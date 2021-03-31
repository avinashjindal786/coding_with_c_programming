
#include <stdio.h>
#include <stdlib.h>

int main()
{

 int a,b,c,front=-1,rear=-1,stac[100],val,n=1,abb,vi,ads;

    printf("how many will be enter");
    scanf("%d",&a);

    while (n!=0)
    {

      printf("you enter");
    scanf("%d",&b);
    if(b==0)
        {
    for(int i=0;i<a;i++)
    {

        if(rear+1==a)
        {
            printf("stack overflow");
        }
        else{
            if(front==-1 || rear==-1 )
            {
                front=0;
                rear=0;
            }
            else{
                rear +=1;
            }
        }
        scanf("%d",&val);
            stac[rear]=val;
    }
    }
     else if(b==1)
    {
        printf("how many value you are delete");
        scanf("%d",&c);
        for(int i=0;i<c;i++)
    {

        if(front==rear)
        {
            front = -1;
            rear = -1;
        }
        else{
            front = front + 1;

        }
    }
    }

    else if(b==2)
    {



    for(int j=front;j<=rear;j++)
    {
        printf("%d",stac[j]);
    }
    }

    else if(b==3){
        n=0;
    }
    else if(b==4){
            abb= rear;
            ads=abb;


        for(int i=0;i<abb-1;i++)
        {
            for(int j=0;j<ads-i-1;j++)
                {
            if(stac[j]>stac[j+1])
            {
               vi=stac[j];
               stac[j]=stac[j+1];
               stac[j+1]=vi;
            }
        }}
    }
    }
}
