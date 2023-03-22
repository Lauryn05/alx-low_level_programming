#include "3-calc.h"
/**
 * main - performs simple operation
 * @argc: number of arguments
 * @argv: array of arguments
 * Return: Always 0
 */
int main(int argc, char *argv[])
{
	int arg1, arg2, ans;
	char x;
	int (*func)(int, int);

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}
	arg1 = atoi(argv[1]);
	arg2 = atoi(argv[3]);
	func = get_op_func(argv[2]);
	if (!func)
	{
		printf("Error\n");
		exit(99);
	}
	x = *argv[2];
	if ((x == '/' || x == '%') && arg2 == 0)
	{
		printf("Error\n");
		exit(100);
	}
	ans = func(arg1, arg2);
	printf("%d\n", ans);
	return (0);
}
