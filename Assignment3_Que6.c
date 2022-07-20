//program to print greater between two numbers. Print one number of both are the same.
#include<stdio.h>
int main()
{
    int n,m;
    printf("enter two number");
    scanf("%d%d",&n,&m);
    if(n>=m)
    {
        printf("%d",n);
    }
    else
    {
        printf("%d",m);

    }

    return 0;
}
