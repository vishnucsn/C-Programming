#include <stdio.h>

void swap(int *max1, int *max2)
{
    int temp = 0;
    temp = *max1;
    *max1 = *max2;
    *max2 = temp;
}

int main()
{
    int arr[] = {6,8,10,1,10};
    int max1 =0, max2 = 0;

    size_t len = sizeof(arr)/sizeof(arr[0]);

    max1 = arr[0];
    max2 = arr[1];

    if(max1<max2)
    {
        swap(&max1,&max2);
    }

    for(int i=2;i<len; i++)
    {
        if(arr[i] > max1)
        {
            max2 = max1; //store max2 with the old max1 since the max1 is going to change.
            max1 = arr[i];
        }
        else if(arr[i] > max2)
        {
            max2 = arr[i];
        }

        printf("%d %d \n",max1,max2);
    }

    return 0;
}