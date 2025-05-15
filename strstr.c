#include <stdio.h>
#include <string.h>

char src[100] = "Hello ";
char *dest = "World";


static char* my_str(char *src, char *dest)
{

    char *temp = src + strlen(src); //reach temp to the place 

    while(*dest != '\0')
    {
        *temp = *dest;
        temp++;
        dest++;
    }
    *temp = '\0';

    return src;
} 

int main()
{

    printf("Original - %s\n",src); //Hello 
    printf("Final -%s\n",my_str(src,dest)); //Hello World

    return 0;
}
