//a program to check whether roots of a given quadratic equation are real & distinct, real & equal or imaginary roots
#include<stdio.h>
#include<math.h>
#include<conio.h>
int main()
{
    float x, y, z, d, r1, r2, real, img;
    printf("\n Enter the value of coefficient x, y and z: \n ");
    scanf("%f %f %f", &x, &y, &z);

    d=y*y-4*x*z;

    if(d>0)
    {
   printf("roots of quadratic equation are real and distinct ");
    }
    else if(d==0)
    {
        printf("roots of the equation are real and equal");
    }
    else {

        printf("roots are imaginary");
    }
    return 0;
    }
