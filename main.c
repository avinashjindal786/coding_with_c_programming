#include <stdio.h>
#include <stdlib.h>
#define add(x,y) x+y

enum point2 {x=10,y=25};

void swap(int* x, int* y)
{
    int temp = *x;
    *x = *y;
    *y = temp;
    printf("%d %d", *x,*y);
}

struct emp{

int a;
char b[2];


};


int main()
{

struct emp e[10];


for (int i=0;i<2;i++){

    scanf("%d",&e[i].a);
    for(int j=0;j<2;j++){
    scanf("%c",&e[i].b[j]);
    }
}

for (int i=0;i<2;i++){

    printf("%d\n",e[i].a);
    for(int j=0;j<2;j++){



    printf("%c\n",e[i].b[j]);
    }

}

}
