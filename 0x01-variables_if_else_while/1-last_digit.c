#include <stdio.h>
#include <time.h>
#include <stdlib.h>
/**
 * main - main block
 * Description: Get a random number and check its last digit, compare it with 5
 * Return: 0
 */
int main(void)
{
	int n;
	int last;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	last = n % 10;
	
	      printf("14\n");
      scanf("%d", &n);
		if (last > 5)
      printf("Last digit of %d \n is %d",n,last,and is 5);
	else if (last == 0)
		printf("Last digit of %d \n is %d",n,last,and is 0);
	else if (last < 6)
	printf("Last digit of %d \n is %d",n,last,and is less than 6 and not 0);

	return (0);
}
