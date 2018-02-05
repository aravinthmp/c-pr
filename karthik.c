
#include<stdio.h>
#include<conio.h>
int main()
{
int n,k;
char choice;
int s[5]={1,2,3,4,5};
printf("Enter your choice:\n);
scanf("%c",&choice);
switch(choice)
{
case'n':
n=s[0]+s[1]+s[3]+s[4]+s[5];
printf("%d",n);
break;
case'k':
k=s[0]+s[1];
printf("%d",k);
break;
}
getch();
}
