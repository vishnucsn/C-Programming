#include <stdio.h>

int setbits(int num){
    int count = 0;
    while(num){
        count += num&1;
        num>>=1;
    }
    return count;
}

const char* parity(int num){
    
    return (((setbits(num) %2 == 0) ? "even":"odd"));
}

int main()
{
    printf("SetBits\n");
    /* Modify the input value in the below variable num */
    int num = 15;
    printf("%d\n",setbits(num));
    if(parity(num) == "even")
        printf("Even parity\n");
    else
        printf("Odd parity\n");
        
    return 0;
}
