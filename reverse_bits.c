#include <stdio.h>
#include <stdint.h>


uint32_t bin = 0b10111111; //11111101
uint32_t n_bin=0;

//1011

void print_binary(uint32_t bin)
{
    for(int i=31; i>=0; i--)
    {
        printf("%d",!!(bin & (1<<i)));
        if((i%4) == 0)
        printf(" ");
    }
    
}


int main()
{
    
    for(int i=0; i<32; i++)
    {
        n_bin <<= 1;
        n_bin |= !!(bin & (1<<i));
    }
    
    print_binary(n_bin);
    

    return 0;
}
