#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

size_t my_strlen(char *src)
{
    size_t count =0;
    
    if(src == NULL)
    {
        count = 0;
    }
    
    else
    {
        while(*src != '\0')
        {
            count++;
            src++;
        }
    }
    
    return count;
}


bool my_strcompare(char *src, char *dest)
{
    
    bool ret_val = false;
    
    if((src == NULL) || (dest == NULL))
    {
        return ret_val;
    }
    
    size_t size_src = my_strlen(src);
    size_t size_dest = my_strlen(dest);
    
    if(size_dest != size_src)
    {
        return ret_val;
    }
    
    else
    {
        for(int i=0; i<size_src; i++)
        {
            if(*src == *dest)
            {
                ret_val = true;
                src++;
                dest++;
                continue;
            }
            else
            {
                ret_val = false;
                break;
            }
        }
    }
    
    
    return ret_val;
}

int main()
{
    char *src = "vishnu1";
    char *dest = "vishnu1";
    printf("Both strings are %s\n",(my_strcompare(src,dest)==true)?"same":"incorrect");
    


    return 0;
}