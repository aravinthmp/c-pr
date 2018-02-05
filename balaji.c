
#include<stdio.h>
#include<conio.h>
int main()
{
int n,sum=0;
int i;
clrscr();
scanf("%d",&n);
for(i=1;i<=n;i++)
{
sum+=i;
}
printf("\n%d",sum);
return 0;
}
