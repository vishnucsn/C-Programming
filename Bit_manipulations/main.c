#include <stdio.h>
#include <stdint.h>

uint8_t getBitValue(uint8_t bit_pos, uint32_t input)
{
    uint8_t ret = 0;
    uint8_t bin_arr[32] ={0};
    for(int i=0; i<=31; i++)
    {
        bin_arr[i] = (input % 2);
        input = input/2;
    }

    for(int i=0;i<32;i++)
    {
        if(i == bit_pos)
            {
                ret = bin_arr[i];
                break;
            }
    }

    return ret;
}


/*Function which is used to swap the bit values present in the bit positions which are passed as argument*/
uint32_t update_bit_positions(uint8_t x_pos, uint8_t y_pos, uint32_t input)
{
    uint8_t temp =0,x_val=0,y_val=0;

    x_val = getBitValue(x_pos,input);
    y_val = getBitValue(y_pos,input);
    temp = x_val;
    x_val = y_val;
    y_val = temp;

    input &= ~( (1 << x_pos) | (1 << y_pos) ); //clear the bit positions(x_pos and y_pos)
    input |= ( (x_val << x_pos) | (y_val << y_pos) ); //Set the bit positions(x_pos and y_pos) with the desired value(x_val and y_val)

    return input;
}

int main()
{
    uint32_t input = 0x54,output = 0;

    printf("Input = %u\n",input);
    output = update_bit_positions(3,6,input);
    printf("output = %d\n",output);


    return 0;
}
