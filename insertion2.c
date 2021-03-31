#include<stdio.h>
#include<stdlib.h>


void setval(int *a,int n)
{
    int x;
    a = (int *)malloc(n * sizeof(int));
    for (int i = 0; i < n; i++)
    {
        printf("enter the value %d", i+1);
        scanf("%d",&x);
        a[i]=x;
    }
    
}

void display(int *a, int n)
{
    printf("display the valuearray ");
    for (int i = 0; i < n; i++)
    {
        printf("%d", a[i]);
    }
    
}


int main()
{
    int *a;
    int n= 5;
    setval(a,n);
    display(a , n);
    //free(a);
    return 0;
}