#include <stdio.h>
int main()
{
    int i,j,n,a;
    scanf("%d",&n);
    a=n/2;
    if(n%2==1)
        a=(n/2)+1;
    for(i=0; i<a; i++)
    {
        for(j=a-i; j!=1; j--)
            printf("_");
        printf("*");
        for(j=i; j>0; j--)
            printf("_");
        for(j=i; j>1; j--)
            printf("_");
        if(i!=0)
        {
            printf("*");
        }
        for(j=i; j<a-1; j++)
            printf("_");
        printf("\n");
    }
    if(n%2!=0)
        a--;
    for(i=a; i>0; i--)
    {
        if(n%2!=0)
            a=(n/2)+1;
        for(j=i-a; j!=0; j++)
        {
            printf("_");
        }
        for(j=0; j!=1; j++)
        {
            printf("*");
        }
        for(j=i; j>1; j--)
            printf("_");
        for(j=i; j>2; j--)
            printf("_");
        if(i!=1)
        {
            printf("*");
        }
        for(j=i; j<a; j++)
            printf("_");

        printf("\n");
    }

    return 0;
}


