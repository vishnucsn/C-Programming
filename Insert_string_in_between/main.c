#include <stdio.h>
#include <string.h>

void printarr(char *ptr, const char *print)
{
    printf("%s :: ",print);
    for(int i=0;ptr[i] != '\0'; i++)
    {
        printf("%c",ptr[i]);
    }
    printf(" ::\n");

}

void backuparr(char *ptr, char *bkp, int *bkplen)
{
    int len = 0;
    char *temp = bkp;
    while(*ptr != '\0')
    {
        *temp = *ptr;
        ptr++;
        temp++;
        len++;
    }
    *temp = '\0';
    *bkplen = len;

}

int main()
{
    char arr1[] = "string";
    char arr2[] = "ice";
    char backup[20];
    int bkplen = 0;
    int len = sizeof(arr1)/sizeof(arr1[0]);

    printarr(arr1,"initial");
    for(int i=0 ; arr1[i] != '\0'; i++)
    {
        if(arr1[i] == arr2[0])
        {
            backuparr(&arr1[i],backup,&bkplen);
            memcpy((&arr1[i]),arr2,3);
            printarr(arr1,"inter");
            memcpy((&arr1[len-1]),backup,bkplen);
            break;
        }
    }

    printarr(backup,"backup");
    printarr(arr1,"final");

    return 0;
}