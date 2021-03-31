#include <stdio.h>
#include <stdlib.h>

int main()
{

int x ,*a, *b, c[20], z=0, f=0, sum=0,y=0, sp=0;
int G=0, add;

scanf("%d",&x);

a = malloc(x*sizeof(int));

for(int i=0;i<x;i++)
{
    scanf("%d", &a[i]);
}

b = malloc(2*sizeof(int));
for(int i=0;i<2;i++)
{
    scanf("%d", &b[i]);
}

for(int i=f;i<x;i++)
{
    add = b[0] + y;
    for(int j=y;j<add;j++)
    {
        sum = sum + a[j];
        sp= sp+1;
    }
    c[G]=sum;
    y = sp;
    f = y;
    G =G +1;
}

for(int i=0;i<G-1;i++)
{
    if(c[i]==b[0])
    {
        z=z+1;
    }

}
printf("%d",z);
free(b);
free(a);

}

