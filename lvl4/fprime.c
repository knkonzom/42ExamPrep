/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fprime.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: knkonzom <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/20 16:02:01 by knkonzom          #+#    #+#             */
/*   Updated: 2019/08/20 16:06:14 by knkonzom         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

void	fprime(unsigned int n)
{
	unsigned int	prime;

	if (n == 1)
		printf("1");
	else
	{
		prime = 2;
		while (n > 1)
		{
			if (n % prime == 0)
			{
				printf("%d", prime);
				n /= prime;
				if (n > 1)
					printf("*");
				prime--;
			}
			prime++;
		}
	}
}

int main(int ac, char **av)
{
	if (ac == 2)
		fprime(atoi(av[1]));
	printf("\n");
}
