#include <stdio.h>

#define EMPTY '.'

char sb[3][3][3][3];   // small boards
char bb[3][3];         // big board status

char currentPlayer;
int nextRow, nextCol;
int freeMove;

/* ================= INITIALIZATION ================= */

void initialize()
{
    for(int br = 0; br < 3; br++)
    {
        for(int bc = 0; bc < 3; bc++)
        {
            bb[br][bc] = EMPTY;

            for(int cr = 0; cr < 3; cr++)
            {
                for(int cc = 0; cc < 3; cc++)
                {
                    sb[br][bc][cr][cc] = EMPTY;
                }
            }
        }
    }

    currentPlayer = 'X';
    freeMove = 1;
}

/* ================= PRINT BOARD ================= */

void printBoard()
{
    printf("\n");

    for(int bigRow = 0; bigRow < 3; bigRow++)
    {
        for(int cellRow = 0; cellRow < 3; cellRow++)
        {
            for(int bigCol = 0; bigCol < 3; bigCol++)
            {
                for(int cellCol = 0; cellCol < 3; cellCol++)
                {
                    printf(" %c ", sb[bigRow][bigCol][cellRow][cellCol]);

                    if(cellCol < 2)
                        printf("|");
                }

                if(bigCol < 2)
                    printf(" ||");
            }
            printf("\n");
        }

        if(bigRow < 2)
            printf("===========++===========++===========\n");
    }

    printf("\n");
}

/* ================= SMALL BOARD CHECKS ================= */

int checkSmallWin(int sbRow, int sbCol)
{
    char (*board)[3] = sb[sbRow][sbCol];

    // Rows
    for(int i = 0; i < 3; i++)
        if(board[i][0] != EMPTY &&
           board[i][0] == board[i][1] &&
           board[i][1] == board[i][2])
            return 1;

    // Columns
    for(int i = 0; i < 3; i++)
        if(board[0][i] != EMPTY &&
           board[0][i] == board[1][i] &&
           board[1][i] == board[2][i])
            return 1;

    // Diagonals
    if(board[0][0] != EMPTY &&
       board[0][0] == board[1][1] &&
       board[1][1] == board[2][2])
        return 1;

    if(board[0][2] != EMPTY &&
       board[0][2] == board[1][1] &&
       board[1][1] == board[2][0])
        return 1;

    return 0;
}

int checkSmallFull(int sbRow, int sbCol)
{
    for(int r = 0; r < 3; r++)
        for(int c = 0; c < 3; c++)
            if(sb[sbRow][sbCol][r][c] == EMPTY)
                return 0;

    return 1;
}

/* ================= BIG BOARD CHECKS ================= */

int checkBigWin()
{
    // Rows
    for(int i = 0; i < 3; i++)
        if(bb[i][0] != EMPTY && bb[i][0] != 'D' &&
           bb[i][0] == bb[i][1] &&
           bb[i][1] == bb[i][2])
            return 1;

    // Columns
    for(int i = 0; i < 3; i++)
        if(bb[0][i] != EMPTY && bb[0][i] != 'D' &&
           bb[0][i] == bb[1][i] &&
           bb[1][i] == bb[2][i])
            return 1;

    // Diagonals
    if(bb[0][0] != EMPTY && bb[0][0] != 'D' &&
       bb[0][0] == bb[1][1] &&
       bb[1][1] == bb[2][2])
        return 1;

    if(bb[0][2] != EMPTY && bb[0][2] != 'D' &&
       bb[0][2] == bb[1][1] &&
       bb[1][1] == bb[2][0])
        return 1;

    return 0;
}

int checkBigFull()
{
    for(int r = 0; r < 3; r++)
        for(int c = 0; c < 3; c++)
            if(bb[r][c] == EMPTY)
                return 0;

    return 1;
}

/* ================= GAME LOGIC HELPERS ================= */

void switchPlayer()
{
    if(currentPlayer == 'X')
        currentPlayer = 'O';
    else
        currentPlayer = 'X';
}

void updateSmallBoard(int sbRow, int sbCol)
{
    if(checkSmallWin(sbRow, sbCol))
        bb[sbRow][sbCol] = currentPlayer;
    else if(checkSmallFull(sbRow, sbCol))
        bb[sbRow][sbCol] = 'D';
}

void updateNextBoard(int cellRow, int cellCol)
{
    nextRow = cellRow;
    nextCol = cellCol;

    if(bb[nextRow][nextCol] == EMPTY)
        freeMove = 0;
    else
        freeMove = 1;
}

/* ================= MAIN ================= */

int main()
{
    initialize();

    while(1)
    {
        printBoard();
        printf("Player %c turn\n", currentPlayer);

        int sbRow, sbCol, cellRow, cellCol;

        /* ----- Select Small Board ----- */
        if(freeMove)
        {
            printf("Choose small board (row col 0-2): ");
            scanf("%d %d", &sbRow, &sbCol);

            while(sbRow < 0 || sbRow > 2 ||
                  sbCol < 0 || sbCol > 2 ||
                  bb[sbRow][sbCol] != EMPTY)
            {
                printf("Invalid board. Choose again: ");
                scanf("%d %d", &sbRow, &sbCol);
            }
        }
        else
        {
            sbRow = nextRow;
            sbCol = nextCol;

            if(bb[sbRow][sbCol] != EMPTY)
            {
                freeMove = 1;
                continue;
            }

            printf("You must play in board (%d %d)\n", sbRow, sbCol);
        }

        /* ----- Select Cell ----- */
        printf("Enter cell (row col 0-2): ");
        scanf("%d %d", &cellRow, &cellCol);

        while(cellRow < 0 || cellRow > 2 ||
              cellCol < 0 || cellCol > 2 ||
              sb[sbRow][sbCol][cellRow][cellCol] != EMPTY)
        {
            printf("Invalid cell. Enter again: ");
            scanf("%d %d", &cellRow, &cellCol);
        }

        /* ----- Place Move ----- */
        sb[sbRow][sbCol][cellRow][cellCol] = currentPlayer;

        /* ----- Update Small Board ----- */
        updateSmallBoard(sbRow, sbCol);

        /* ----- Check Big Board ----- */
        if(checkBigWin())
        {
            printBoard();
            printf("Player %c wins the game!\n", currentPlayer);
            break;
        }

        if(checkBigFull())
        {
            printBoard();
            printf("Game is a DRAW!\n");
            break;
        }

        /* ----- Update Next Board ----- */
        updateNextBoard(cellRow, cellCol);

        /* ----- Switch Player ----- */
        switchPlayer();
    }

    return 0;
}
