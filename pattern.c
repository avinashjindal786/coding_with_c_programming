

#include<stdio.h>
#include<stdlib.h>
char *parmut(char str[], int n)
{

    for(int i=0;i<n;i++)
    {
        for(int j=i+1;str[j]!='\0';j++)
        {
        if(str[j]==str[i])
        {
            for(int k=j;str[k]!='\0';k++)
            {
                str[k]=str[k+1];
            }

        }
    }
    return str;
}
}

int main()
{
    char sb[] = "aabccba";

    int n = sizeof(sb)/sizeof(sb[0]);
    printf("%d",n);
    printf("%s",parmut(sb,n));

}
