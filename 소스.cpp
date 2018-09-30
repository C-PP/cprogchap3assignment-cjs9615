#include <stdio.h>
#include <stdlib.h>
#include <math.h>

void function(float);
int main(void) {
	float amount;

	printf("Please enter an amount of water in quarts\n");

	scanf("%f", &amount);
	function(amount);
	getchar();
	return 0;
}

void function(float amount)
{
	float value;
	float ten=10.0;
	float result = pow(ten, -23);
	
	value = (950.0*amount)/(3.0*(result));
	printf("The number of water molecules is %.2f.\n", value);
	system("pause");
	return;
}