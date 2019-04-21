#include <stdio.h>
void main() {

	float V = 0, S1 = 0, S2 = 0, T = 0;

	printf("Type pool volume:");
	scanf("%f", &V);
	printf("Type S1:");
	scanf("%f", &S1);
	printf("Type S2:");
	scanf("%f", &S2);
	printf("Type time:");
	scanf("%f", &T);

	if(V <= 0 || S1 < 0 || S2 < 0 || T <= 0 )
	{
		printf("Incorrect input");
	}
	else if (S2 > S1)
	{
		printf("Your pool will be empty");
	}
	else  
	{  	
		float water = (S1 - S2)* T;
		float water_percent = water / V * 100;
		if (water_percent > 100)
		{
			printf("YOU'RE WASTING %.2fm³ WATER!!!",water - V);
		}
		else 
		{
			printf("Your pool will be filled on %.2f%%",water_percent);
		}
	}
}