#include<stdio.h>

int a,b,c,d,e,f=0;


void add(int x, int y)
{
	printf("\nAddition of %d and %d is %d",x,y,x+y);
}

int main()
{
	printf("\nEnter the value of a: ");
	scanf("%d",&a);
	
	printf("\nEnter the value of b: ");
	scanf("%d",&b);
	
	printf("\nEnter the value of c: ");
	scanf("%d",&c);
	
	printf("\nEnter the value of d: ");
	scanf("%d",&d);
	
	printf("\nEnter the value of e: ");
	scanf("%d",&e);
	
	printf("\nEnter the value of f: ");
	scanf("%d",&f);
add(a,b); //calling the function
	
	add(c,e);
	
	add(f,d);
	
	add(d,a);
	
	add(b,e);
	
	add(5,8);
	
	
	
	return 0;
}
