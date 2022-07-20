//a program to check whether a given number is a three-digit number or not.
#include<stdio.h>
int main()
{
    int n;
    printf("enter an number");
    scanf("%d",&n);
    if( n>99 && n<1000 )
    {
        printf("the number you entered is 3 digit nnumber");
    }
    else
    {
        printf("the number entered is not 3 digit number");

    }

    return 0;
}
