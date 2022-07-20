#include<stdio.h>
int main()
{
    int n;
    printf("enter an number");
    scanf("%d",&n);
    if(n%2==0&&n%3==0)
    {
    printf("the number is divisible by 2 and 3");
    }
    else
    {
    printf("the number is not divisible by 2 and 3");

    }

    return 0;
}

