#include <stdio.h>
#include <stdint.h>

void display_string(const char *ptr,uint32_t val)
{
    printf("%s - %X\n",ptr,val);
}

uint32_t reverse_hex_value(uint32_t hex_input)
{
    typedef union
    {
        uint32_t rev_hex;
        uint8_t arr[4];
    }hex_parser;

    hex_parser parser; //declare a union variable parser
    parser.rev_hex = hex_input; //assign the input hex_input to rev_hex //each index will store 1 byte.
    parser.rev_hex = (parser.arr[0]<<24) | (parser.arr[1]<<16) | (parser.arr[2]<<8) | (parser.arr[3]); //shift each byte based on indexes.
    return parser.rev_hex;
}


int main()
{

    uint32_t val = 0xABCDEF11;
    display_string("Input",val);
    val = reverse_hex_value(val);
    display_string("Reversed",val);

    return 0;
}
