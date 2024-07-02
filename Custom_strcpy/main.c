#include <stdio.h>
#include <stdlib.h>


void mystrcpy(char *dest, char *src)
{
    char *temp = dest;

    while(*src != '\0')
    {
        *temp = *src;
        temp++;
        src++;
    }
    *temp = '\0';

    printf("Finally - %s\n",dest);
}

int main()
{
    char src[] = "QWERTYKEYPAD";
    char *dest = malloc(sizeof(src)/sizeof(src[0]));
    mystrcpy(dest,src);
    printf("Main - %s\n",dest);
    return 0;
}
