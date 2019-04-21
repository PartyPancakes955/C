#include <stdio.h>
void main() {

	float V = 0, S1 = 0, S2 = 0;

	printf("Type pool volume:");
	scanf("%f", &V);
	printf("Type S1:");
	scanf("%f", &S1);
	printf("Type S2:");
	scanf("%f", &S2);

	if (V <= 0 || S1 < 0 || S2 < 0)
	{
		printf("Incorrect input!\n");
	}
	else if (S1 <= S2 )
	{
		printf("Pool will be empty... :|\n");
	}
	else 
	{
		printf("The pool will be filled with water %.2fsec",V/(S1-S2));
	}



}