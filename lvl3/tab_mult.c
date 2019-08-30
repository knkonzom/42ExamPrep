/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   tab_mult.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: knkonzom <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/06 19:00:43 by knkonzom          #+#    #+#             */
/*   Updated: 2019/08/12 16:02:15 by knkonzom         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

void	printnbr(int n)
{
	if (n >= 10)
		printnbr(n / 10);
	n = (n % 10) + '0';
	write(1, &n, 1);
}

int		ft_atoi(const char *s)
{
	int	i;
	int	ret;

	i = 0;
	while ((s[i]) && (s[i] >= '0' && s[i] <= '9'))
		ret = ret * 10 + s[i++] - '0';
	return (ret);
}

int main(int ac, char **av)
{
	int	i;
	int base;

	i = 0;
	if (ac > 1)
	{
		base = ft_atoi(av[1]);
		while (i <= 9)
		{
			printnbr(i);
			write(1, " x ", 3);
			printnbr(base);
			write(1, " = ", 3);
			printnbr(i * base);
			write(1, "\n", 1);
			i++;
		}
	}
	write(1, "\n", 1);
}
