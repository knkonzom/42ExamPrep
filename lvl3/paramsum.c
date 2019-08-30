/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   paramsum.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: knkonzom <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/06 19:31:36 by knkonzom          #+#    #+#             */
/*   Updated: 2019/08/12 17:05:48 by knkonzom         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	printnbr(int n)
{
	if (n >= 10)
		printnbr(n / 10);
	n = (n % 10) + '0';
	write(1, &n, 1);
}

int main(int ac, char **av)
{
	int	i;

	i = 1;
	if (ac < 1)
		write(1, "0", 1);
	else
	{
		while(av[i])
			i++;
		printnbr(i - 1);
	}
	write(1, "\n", 1);
	return (0);
}
