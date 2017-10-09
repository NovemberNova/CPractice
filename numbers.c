// Name: dimensional.c
// Purpose: Calculates dimensional weight of box.

#include <stdio.h>

int main(void)
{
	int height, length, width;
	float profit, loss;
	int volume;

	height = 8;
	length = 12;
	width = 10;
	volume = height * length * width;
	profit = 2150.48f;

	printf("Height: %d, Length: %d\n", height, length);
	printf("Volume: %d\n", volume);
	printf("Profit: $%.2f\n", profit);
	return 0;
}