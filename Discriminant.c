#include <stdio.h>
void main() {

	int a,b,c = 0;
	printf("Enter a\n");
	scanf("%d",&a);
	printf("Enter b\n");
	scanf("%d",&b);
	printf("Enter c\n");
	scanf("%d",&c);
	int D = b*b - 4 * a * c;
	printf("\nD = %d * %d - 4 * %d * %d = %d\n",b,b,a,c,D);
	
	if (D > 0)
	{
		printf("2 real roots");
	}	
	else if (D == 0)
	{
		printf("1 real root");
	}
	
	else
	{
		printf("No real roots");
	}
}