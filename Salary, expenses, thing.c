#include <stdio.h>
void main() {

	float salary,expenses,thing = 0;	
	printf("What's your salary\n");	
	scanf("%f",&salary);	
	printf("What's your expenses\n");	
	scanf("%f",&expenses);	
	printf("How much money cost your thing, you want to buy?");	
	scanf("%f",&thing);
	
	if (salary <= expenses || thing <= 0 || salary <= 0 || expenses < 0)
	{
		printf("Incorrect input!");
	}
	else 
	{	
		float time = thing / (salary - expenses); 
		int i_time = time;
		if (time - i_time > 0.00000001 )
		{
			i_time++;
		}
		printf("You need %d months to buy this thing \n", i_time );
	}
}