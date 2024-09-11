#include <stdio.h>
#include <string.h>

int arr[] = {1,2,3,4,5};

void print(int arr[])
{
    for(int i=0; i<5; i++)
    {
        printf("%d ",arr[i]);
    }
    printf("\n");
}

void shift_array_left(int arr[], int num_times,int len_of_array)
{

   int first_element =0;
   
   for(int i=0; i<num_times; i++)
   {
       first_element = arr[0];
       memmove(&arr[0],&arr[1],(len_of_array-1)*sizeof(int));
       arr[len_of_array -1] = first_element; 
       print(arr);
   }

}

void shift_array_right(int arr[], int num_times,int len_of_array)
{

   int last_element =0;
   
   for(int i=0; i<num_times; i++)
   {
       last_element = arr[len_of_array -1];
       memmove(&arr[1],&arr[0],(len_of_array-1)*sizeof(int));
       arr[0] = last_element; 
       print(arr);
   }

}


int main()
{
    print(arr);
    int len_of_array =  sizeof(arr)/sizeof(arr[0]);
    printf("/* SHIFTING RIGHT */\n");
    shift_array_right(arr,2,len_of_array);
    printf("/* SHIFTING LEFT */\n");
    shift_array_left(arr,2,len_of_array);


    return 0;
}