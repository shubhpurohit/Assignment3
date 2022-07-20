// program to check whether a given number is an even number or an odd number.

#include<stdio.h>
int main()
{
    int n;
    printf("enter an number\n");
    scanf("%d",&n);
    if(n%2==0)
    {
        printf("\n the number is even");
    }
    else
    {
        printf("\n the number is odd");

    }

    return 0;
}
