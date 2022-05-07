#include <stdio.h>
#include <stdlib.h>
double diameter(double x);
double circumference(double y);
double area(double z);
int main()
{
int radius;
double Dia,Cir,Area;
printf("Input radius:");
scanf("%d",&radius);
Dia=diameter(radius);
Cir=circumference(radius);
Area=area(radius);

printf("diameter:%.2f units\n",Dia);
printf("circumference:%.2f units\n",Cir);
printf("Area:%.2f s.q units\n",Area);


return 0;
}
double diameter(double x)
{
return 2*x;
}
double circumference(double y)
{
return 2*3.1416*y;
}
double area(double z)
{
return 3.1416*z*z;
}
