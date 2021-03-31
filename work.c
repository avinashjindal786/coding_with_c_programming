#include <stdio.h>
#include <stdlib.h>


int main()
{
  int a[10], b, i, j, e;

  printf("Enter number of elements\n");
  scanf("%d", &b);

  printf("Enter %d integers\n", b);

  for (i = 0; i <b ; i++)
  {
      scanf("%d", &a[i]);
  }
  for (i = 0 ; i < b - 1; i++)
  {
    for (j = 0 ; j < b - i - 1; j++)
    {
      if (a[j] > a[j+1]) /* For decreasing order use < */
      {
        e     = a[j];
        a[j]   = a[j+1];
        a[j+1] = e;
      }
    }
  }

  printf("Sorted list in ascending order:\n");

  for (i = 0; i < b; i++)
     printf("%d\n", a[i]);


}
