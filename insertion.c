#include<stdio.h>
void display(int arr[], int size)
{
    for (int i = 0; i < size; i++)
    {
        printf("%d\n",arr[i]);
    }
    
}

int indinsertion(int arr[],int size,int capacity,int index,int element)
{
    if (size >= capacity)
    {
        return -1;
    }
    else{
        for (int i = size-1; i>=index; i--)
        {
            arr[i+1] = arr[i];
        }
        arr[index] = element;
        return 1;
    }
    
}

int main()
{
    int arr[100] = {2,55,96,45,33};
    int size = 5, index = 3 , element = 66;
    int capacity = 100;
    display(arr,size);
    indinsertion(arr,size,capacity,index,element);
    size = size+1;
    display(arr,size);
    return 0;
}