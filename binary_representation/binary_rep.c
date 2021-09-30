/**************************************************************************************
 * File Name : binary_rep.c
 * Description : Binary representation of a integer
 * Author : Vishnu C S
 * $Date: 20210-09-30
 *************************************************************************************/
 
 
#include <stdio.h>
#include <stdlib.h>


void* convert_binary(int num, int *lptr, int *ones, int *zeroes){
    
    int i=0;
    int *data = malloc(20);
    while(num){
        data[i] = num%2;
        if( (num%2) == 0 )
            *zeroes += 1;
        else
            *ones += 1;
        num = num/2;
        i++;
    }
    
    *lptr = i-1;
    
    return data;
}

int main()
{
    int num = 5;
    int len = 0;
    int ones=0, zeroes = 0;
    int *ptr = convert_binary(num,&len,&ones, &zeroes);
    printf(" Binary represenation of num \n");
    for (int i=len; i>=0; i--)
        printf("%d ",ptr[i]);
    printf("\n");

    printf("Ones - %d    zeroes: %d\n",ones,zeroes);

    free(ptr);

    return 0;
}
