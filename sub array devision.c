#include <stdio.h>
#include <stdlib.h>

void main()
{

int x ,*a, *b, c[20], j=0, z=0, f=0, sum=0,y;
scanf("%d\n",&x);
a = mallow(x*sizeof(int));
for(int i=0;i<x;i++)
{
    scanf("%d", &a[i]);
}
b = mallow(2*sizeof(int));
for(int i=0;i<2;i++)
{
    scanf("%d\t", &b[i]);
}

for(int i=f;i<x;i++)
{
    for(int k=f;k<b[1]+f;k++)
    {
        sum = sum + a[k];
        y = k;
    }
    c[j] = sum;
    f = y;
    sum = 0;
    j= j+1;
}


for(int i=0;i<x;i++)
{
    if(c[i]==b[0]){
        z = z+1;
    }
}
printf("%d",z);

}
