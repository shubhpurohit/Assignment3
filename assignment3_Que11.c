//a program to take marks of 5 subjects from the user. Assume marks are given out of 100 and passing marks is 33. Now display whether the candidate passed the examination or failed.

#include<stdio.h>
int main()
{
    int s1,s2,s3,s4,s5,marks;
    printf("enter marks obtained in 5 subjects out of 100");
    scanf("%d%d%d%d%d",&s1,&s2,&s3,&s4,&s5);
    marks=s1+s2+s3+s4+s5;
    if(marks>=165)    //33*5=165 for 5 subjects
    {
    printf("Passed");
    }
    else
    {
    printf("Fail");

    }

    return 0;
}
