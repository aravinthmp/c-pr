
#include<stdio.h>
#include<conio.h>
int main()
{
long long n;
int c=0;
clrscr();
scanf("%lld",&n);
while(n!=0)
{
n=n/10;
c++;
}
printf("%d",c);
return 0;
}
