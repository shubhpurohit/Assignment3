
#include<stdio.h>
int main()
{
    int cp,sp;
    float profit,loss,perc;
    printf("enter cost price:");
    scanf("%d",&cp);
    printf("enter sell price:");
    scanf("%d",&sp);

    if(sp>=cp)
    {
    profit=sp-cp;
    perc=(profit/cp)*100;
    printf("The profit percentage is= %f %%",perc);
    }
    else
    {
    loss=cp-sp;
    perc=(loss/cp)*100;
    printf("The loss percentage is= %f %%",perc);
    }

    return 0;
}
