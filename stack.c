
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a,b,temp=-1,stac[100],val,n=1;

    printf("how many will be enter");
    scanf("%d",&a);
    while (n!=0)
    {

      printf("you enter");
    scanf("%d",&b);
    if(b==0)
        {
    for(int i=0;i<=a-1;i++)
    {

        if(temp==a)
        {
            printf("stack overflow");
        }
        else{
            temp=temp+1;
            scanf("%d",&val);
            stac[temp]=val;
        }
    }
    }
    else if(b==1)
    {
        for(int i=a-1;i<=a-2;i)
    {

        if(temp==-1)
        {
            printf("stack overflow");
        }
        else{
            temp=temp-1;

        }
    }
    }
    else if(b==2)
    {



    for(int j=0;j<=temp-1;j++)
    {
        printf("%d",stac[j]);
    }
    }

    else if(b==3){
        n=0;
    }
    }
}
