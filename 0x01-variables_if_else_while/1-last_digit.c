#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/* more headers goes there */

/**
 * main - this is the main function
 * Description: the main function)?
 * Return: 0
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* your code goes there */
  if (n > 5)
    printf("%d\n" "Last digit of" ,n ,and is greater than 5);
	else if (n == 0)
	printf("%d\n" "Last digit of", n ,and is 0);
	else if (n < 6) 
	printf("%d\n" "Last digit of", n ,and is less than 6 and not 0);
  else 
	return (0);
  
}
