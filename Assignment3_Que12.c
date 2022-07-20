#include<stdio.h>
int main()
{
    char n;
    printf("enter an char\n");
    scanf("%c",&n);
    if(n>=65&&n<=91)
    {
    printf("Uppercase");
    }
    else
    {
    printf("Lowercase");
    }

    return 0;
}
