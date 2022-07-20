//a program to check whether a given number is an even number or an odd number without using % operator.
#include<stdio.h>
int main()
{
    int n;
    printf("enter an number");
    scanf("%d",&n);
    if(n&1==1)
    {
        printf("the number is odd");
    }
    else
    {
        printf("the number is even");

    }

    return 0;
}
