#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

/*
int	ft_do_op(char av, int i1, int i2)
{
	int result;

	result = 0;
	if (av == '+')
		result = i1 + i2;
	else if (av == '-')
		result = i1 - i2;
	else if (av == '*')
		result = i1 * i2;
	else if (av == '/')
		result = i1 / i2;
	else if (av == '%')
		result = i1 % i2;
	return (result);
}

int main(int ac, char **av)
{
	if (ac == 4)
	{
		int x;
		int y;
		int result;

		x = atoi(av[1]);
		y = atoi(av[3]);
		result = ft_do_op(av[2][0], x, y);
		printf("Result: %i\n", result);
	}
	write(1, "\n", 1);
	return (0);
}

*/

int	ft_do_op(int i, char av, int j)
{
	int result;
	
	result = 0;
	if (av == '+')
		result = i + j;
	else if (av == '-')
		result = i - j;
	else if (av == '*')
		result = i * j;
	else if (av == '/')
		result = i / j;
	else if ( av == '%')
		result = i % j;
	return (result);
}

int main(int ac, char **av)
{
	if (ac == 4)
	{
		int		x;
		int		y;
		int		res;
		
		x = atoi(av[1]);
		y = atoi(av[3]);
		res = ft_do_op(x, av[2][0], y);
		printf("Result is: %d\n", res);
		return (0);
	}
	write(1, "\n", 1);
	return (0);
}