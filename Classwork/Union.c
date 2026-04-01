#include <stdio.h>
#include <string.h>
int main() {
    struct a{
       long int i;
        char ch[2];
    };
    struct a key;
    key.i = 512;
    strcpy(key.ch,"d");
    printf("key.i= %d\n", key.i);
    printf("key.ch[0] = %s\n",key.ch);
    printf("key.ch[1] = %s\n",key.ch);
    key.i= 42;
    printf("key.i = %d\n", key.i);
    printf("key.ch[0] = %s\n",key.ch);
    printf("------------------------------------------");


    union b{
        int i;
        char ch[2];
    };
    union b key;
    key.i = 512;
    strcpy(key.ch,"d");
    printf("key.i= %d\n", key.i);
    printf("key.ch[0] = %s\n",key.ch);
    printf("key.ch[1] = %s\n",key.ch);
    key.i= 42;
    printf("key.i = %d\n", key.i);
    printf("key.ch[0] = %s\n",key.ch);
    


    return 0;

}
