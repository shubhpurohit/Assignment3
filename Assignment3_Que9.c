// program to find the greatest among three given numbers. Print number once if the greatest number appears two or three times.
#include<stdio.h>
int main()
{

    int a,b,c;
    printf("Enter three numbers\n");
    scanf("%d%d%d",&a,&b,&c);
    if(a==b&&a==c)
    {
        printf("number %d is same",a);

    }
    else if((a>b&&a>c)||(a>=b&&a>c)||(a>b&&a>=c))
    {
        printf(" number %d is greatest",a);
    }
    else if((b>a&&b>c)||(b>=a&&b>c)||(b>a&&b>=c))
    {
        printf(" number %d is greatest",b);


    }
    else{
        printf("number %d is greatest",c);    }
}
