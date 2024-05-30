#include <stdio.h>
#include <stdint.h>
#include <stdbool.h>

void display(uint32_t val, const char *ptr)
{
    printf("Is %lu a Power of two - %s\n",(unsigned long)val,ptr);
}

bool power_of_two(uint32_t val)
{
    uint8_t flag = 0;
    bool ret = false;
    while(val)
    {
        if(val & (1<<0)) //check lsb bit is 1
        {
            flag++; //increment the flag, if the lsb is 1
        }
        val = val >> 1; //right shift the actual by 1 so that the loop can check the lsb.
    }
    if(flag == 1) //flag variable will be one if there is only one 1 in the input value, which means that it is a power of two.
    {
        ret = true;
    }
    return ret;
}

int main()
{
    uint32_t val = 16; //input value
    bool ret = false;
    ret = power_of_two(val);
    (ret == true) ? display(val,"Yes"):display(val,"No");

    return 0;
}
