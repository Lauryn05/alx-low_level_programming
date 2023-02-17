#include <stdio.h>
#include <time.h>
/** 
 * main - Entry point
 *
 * Return: Always 0
 */
int main() {
	int n;
	time_t t;
	// Get seconds of current time
	t = time(NULL);
	// Use the last two digits of the current time as the "random" number
	n = t % 200 - 100;
	// Check if the number is positive, negative, or zero by getting a range between 0-199 and minusing 100
	if (n > 0) {
		printf("%d is positive\n", n);
	} else if (n == 0) {
		printf("%d is zero\n", n);
       	} else 
	{printf("%d is negative\n", n);
	}
	return (0);
}
