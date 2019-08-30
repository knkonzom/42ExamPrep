/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_hex.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: knkonzom <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/06 16:38:21 by knkonzom          #+#    #+#             */
/*   Updated: 2019/08/06 17:22:28 by knkonzom         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	print_hex(int n)
{
	if (n >= 16)
		print_hex(n / 16);
	if (n % 16 < 10)
		n = (n % 16) + '0';
	else
		n = (n % 16) - 10 + 'a';
	write(1, &n, 1);
}
int		ft_atoi(char *s)
{
	int	i;
	int	res;
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

int main(int ac, char **av)
{
	if (ac == 2)
	{
		int num = ft_atoi(av[1]);
		if (num == -1)
		{
			write(1, "\n", 1);
			return (0);
		}
		else
			print_hex(num);
	}
	write(1, "\n", 1);
	return (0);
}
