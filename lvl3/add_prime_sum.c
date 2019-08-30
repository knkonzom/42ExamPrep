/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   add_prime_sum.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: knkonzom <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/19 16:22:58 by knkonzom          #+#    #+#             */
/*   Updated: 2019/08/19 17:25:37 by knkonzom         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int		ft_isspace(char c)
{
	if (c == ' ' || (c >= '\t' && c <= '\r'))
		return (1);
	return (0);
}

void	ft_printnbr(int n)
{
	if (n >= 10)
		ft_printnbr(n / 10);
	n = (n % 10) + '0';
	write(1, &n, 1);
}

unsigned int	ft_atoi(char *s)
{
	unsigned int	res;
	int				i;

	i = 0;
	res = 0;
	if (s[i] == ' ' || (s[i] >= '\t' &&  s[i] <= '\r'))
		i++;
	if (s[i] == '-' || s[i] == '+')
	{
		if (s[i] == '-')
			res = 0;
		return (res);
		i++;
	}
	while (s[i] && s[i] >= '0' && s[i] <= '9')
		res = res * 10 + s[i++] - '0';
	return (res);
}

int			ft_is_prime(int	n)
{
	int	i;

	i = 2;
	while (i < n)
	{
		if (n % i == 0)
			return (0);
		i++;
	}
	return (1);
}

void		ft_add_prime(int n)
{
	int	i;
	int	sumof;

	i = 2;
	sumof = 0;
	while (i <= n)
	{
		if (ft_is_prime(i))
			sumof += i;
		i++;
	}
	ft_printnbr(sumof);
}

#include <stdlib.h>

int main(int ac, char **av)
{
	if (ac == 2)
	{
		int num = ft_atoi(av[1]);
		if (num == 0)
			write(1, "0\n", 2);
		ft_add_prime(num);
	}
	else
		write(1, "0", 1);
	write(1, "\n", 1);
	return (0);
}
