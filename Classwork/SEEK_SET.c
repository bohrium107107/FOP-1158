#include <stdio.h>
int main() {
    FILE *f;
    f = fopen("project.txt", "w");
    fputs("Hello World", f);
    fseek(f, 6, SEEK_SET);
    fputs("Everyone", f);
    fclose(f);
    return 0;
}