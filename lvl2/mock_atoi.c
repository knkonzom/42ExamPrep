#include <stdio.h>

int     ft_atoi(char *s)
{
	int i;
	int res;
	int sign;
	
	i = 0;
	res = 0;
	sign = 1;
	while ((s[i] == ' ') || (s[i] >= '\t' && s[i] <= '\r'))
		i++;
	if (s[i] == '+' || s[i] == '-')
	{
		if (s[i] == '-')
			sign = -1;
		i++;
	}
	while (s[i])
		res = res * 10 + s[i++] - '0';
	return (res * sign);
}

int main()
{
	char str[] = "4995";
	int val;

	val = ft_atoi(str);
	printf("The result is: %d\n", val);
	return (0);
}
