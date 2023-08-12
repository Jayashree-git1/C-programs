#include<stdio.h>
int main()
{
	float p,t,r,si;
	printf("enter the principle amount");
	scanf("%f", &p);
	printf("enter the time");
	scanf("%f",&t);
	printf("enter the rate of interset");
	scanf("%f",&r);
	si=(p*t*r)/100;
	printf("simple interset=%f\n", si);
	return (0);
	
}
