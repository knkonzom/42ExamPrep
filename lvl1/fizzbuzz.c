/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fizzbuzz.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: knkonzom <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/29 13:31:16 by knkonzom          #+#    #+#             */
/*   Updated: 2019/07/29 13:43:27 by knkonzom         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

/*
void	printnbr(int n)
{
	if (n >= 10)
		printnbr(n / 10);
	n = (n % 10 + '0');
	write(1, &n, 1);
}

int main(void)
{
	int nbr;

	nbr = 1;
	while (nbr <= 100)
	{
		if ((nbr % 3 == 0) && (nbr % 5 == 0))
			write(1, "fizzbuzz", 8);
		else if (nbr % 3 == 0)
			write(1, "fizz", 4);
		else if (nbr % 5 == 0)
			write(1, "buzz", 4);
		else
			printnbr(nbr);
		write(1, "\n", 1);
		nbr++;
	}
	return (0);
}
*/

void	printnbr(int n)
{
	if (n >= 10)
		printnbr(n / 10);
	n = (n % 10 + '0');
	write(1, &n, 1);
}

int main(void)
{
	int	i;
	
	i = 1;
	while (i <= 100)
	{
		if ((i % 3) == 0)
			write(1, "fizz", 4);
		else if ((i % 5) == 0)
			write(1, "buzz", 4);
		else if ((i % 3 == 0) && (i % 5 == 0))
			write(1, "fizzbuzz", 8);
		else
			printnbr(i);
		write(1, "\n", 1);
		i++;
	}
	return(0);
}