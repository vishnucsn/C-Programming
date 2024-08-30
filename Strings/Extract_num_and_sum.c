#include <stdio.h>
#include <stdlib.h>

/*Extract the numbers from the array and add it together
* For eg: "1AB1CD1234xyx56123!"
* Numbers -> 1 1 1234 56123
* Add -> 1+1+1234+56123 = 57359
*/
char arr[] = "1AB1CD1234xyx56123!";
char dummy_arr[20];
int j=0,sum =0,prev=0;

int main()
{
    int length = sizeof(arr)/sizeof(arr[0]);

    for(int i=0; i<length; i++)
    {
        if( (arr[i] >= '0') && (arr[i] <= '9') )
        {
            dummy_arr[j] = arr[i];
            j++;
        }
        else
        {
            dummy_arr[j] = '\0';
            sum = atoi(dummy_arr);
            sum  = prev +sum;
            prev = sum;
            j=0;
        }
    }
    printf("Sum - %d\n",sum);
    return 0;
}


