#include <stdio.h>
int main(void) 
{
int b,v,temp;
printf("\n enter two numbers to swap:");
scanf("%d %d",&b,&v);
printf("\n before swapping:");
printf("\nx=%d",b);
printf("\ny=%d",v);
temp=b;
b=v;
v=temp;
printf("\n after swapping:");
printf("\nx=%d",b);
printf("\ny=%d",v);
return 0;
}
