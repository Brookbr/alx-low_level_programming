#include <stdlib.h>
#include <time.h>
/* more headers goes there */
/*betty style doc for function main goes there */
 /**
  * main - prints a text according number
  *
  * Return: Always 0
  */

int main(void)
{
int n,
int m;
srand(time(0));
n = rand() - RAND_MAX / 2;
m = n % 10;
if (m > 5)
printf("Last digit of %d is %d and is greater than 5\n", n, last
	}
else if (m == 0)
	{
printf("Last digit of %d is %d and is 0\n", n, lastd);
	}
else if (m < 6 && lastd != 0)
	{
printf("Last digit of %d is %d and is less than 6 and not 0\n", m);
return (0);
}