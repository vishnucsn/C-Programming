#include <stdio.h>
#include <stdint.h>
#include <stdlib.h>

void mystrcpy(void *dest, void *src)
{
    char *_dest = (char*)dest;
    char *_src = (char*)src;

    while(*_src != '\0')
    {
        *_dest = *_src;
        _dest++;
        _src++;
    }
    *_dest = '\0';
}

int main()
{
    char *src = "FOODBABE";
    char *dest = malloc(20);
    mystrcpy(dest,src);
    printf("src  -> %s\n",src);
    printf("dest -> %s\n",dest);


    return 0;
}
