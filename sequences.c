


#include<stdio.h>
#include<stdlib.h>

int main()
{
    int n, a[100], b;
    int result,res;
    scanf("%d",&n);

    for(int i=0;i<n;i++)
    {
      scanf("%d",&a[i]);
    }

    b = n/2;

    for(int i=0;i<b;i++)
    {
    if(a[i] < a[i+1])
    {
        result = 0;
    }
    else
    {
        result = 1;
    }
    }

    for(int i=b;i<n;i++)
    {
        if(a[i] > a[i+1])
    {
        res = 0;
    }
    else
    {
        res = 1;
    }
    }
    if(result == res)
        printf("%s",result);
    else
        printf("false");
}
