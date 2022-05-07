#include <stdio.h>
#include <stdlib.h>
double cube(double x);
int main()
{int a;
double c;
printf("Enter any number:");
scanf("%d",&a);
c=cube(a);
printf("cube of %d is %.2f",a,c);
return 0;
}
double cube(double x)
{
return (x*x*x);
}
