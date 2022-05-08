#include <stdio.h>
#include <stdlib.h>
int max(int x,int y);
int min(int x,int y);
int main()
{
int a,b,maximum,minimum;
printf("Input two number:");
scanf("%d %d",&a,&b);
maximum=max(a,b);
minimum=min(a,b);
printf("maximum:%d\n",maximum);
printf("minimum:%d",minimum);
return 0;
}
int max(int x,int y)
{
return (x>y)? x:y;
}
int min(int x,int y)
{
return (x>y)? y:x;
}
