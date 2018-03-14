#include <stdio.h>
int main(void) 
{
	intl,b,h;
	scanf("%d %d %d",&l,&b,&h);
	int volume,tsa;
	volume=l*b*h;
	tsa=2*((l*b)+(b*h)+(h*l));
	printf("\nVOLUME=%d",volume);
	printf("\nTSA=%d",tsa);
	return 0;
}
