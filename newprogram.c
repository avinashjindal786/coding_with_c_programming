

#include<stdio.h>
#include<stdlib.h>

int main()
{
  int a,b,n, c,result=0;
  scanf("%d",&a);
  scanf("%d",&b);
  scanf("%d",&n);

  c = b-a;
  result = c;
  for(int i=0;i<n;i++)
  {
      result = c+result;
  }
  printf("%d",result);
}
