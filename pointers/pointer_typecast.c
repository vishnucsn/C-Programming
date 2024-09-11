#include <stdio.h>
#include <stdint.h>


int main()
{
    char buff[] = {'a','b','s','h','n','u'};
    uint32_t *ptr = (uint32_t*)buff;
    
    printf("%c %c %c %c",*(ptr), *((uint8_t*)ptr+1), *(ptr+1), *((uint8_t*)(ptr+1)+1)  );
    

    return 0;
}