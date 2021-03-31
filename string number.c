
#include<stdio.h>
#include<stdlib.h>

#include <stdio.h>
#include <stdlib.h>

int recurtion (int j);

int recurtion (int j)
{
    int ans, result;
    if(j==0)
    {
        return(0);
    }
    ans = j % 10 ;
    result = j /10;
    return ans + recurtion(result);
}


int permut(char* input)
{
    int j;

    j = atoi(input);


    printf("%d",recurtion(j));

}

int main(void)
{
    char sd[100];

    scanf("%s",&sd);

    permut(sd);

    return 0;
}
