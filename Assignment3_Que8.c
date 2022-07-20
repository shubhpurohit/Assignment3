// program to check whether a given year is a leap year or not.
#include<stdio.h>
int main()
{
    int n;
    printf("enter an year\n");
    scanf("%d",&n);

     if(n%400==0){
        printf("the year is leap year");
    }
    else if(n%100==0)
    {printf("the year is not leap year");
    }
    else if(n%4==0)
    {
         printf("the year is leap year");

    }
    else
    {
    printf("the year is not leap year");

    }

    return 0;
}
