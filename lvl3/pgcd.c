/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pgcd.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: knkonzom <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/06 19:16:38 by knkonzom          #+#    #+#             */
/*   Updated: 2019/08/12 16:35:25 by knkonzom         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

int main(int ac, char **av)
{
	int	min;
	int	cd;
	int	i;
	int	num1;
	int	num2;

	min = 0;
	cd = 1;
	i = 1;
	if (ac == 3)
	{
		num1 = atoi(av[1]);
		num2 = atoi(av[2]);
		if (num1 > num2)
			min = num2;
		else if (num2 > num1)
			min = num1;
		while (i <= min)
		{
			if ((num1 % i == 0) && (num2 % i == 0))
				cd = i;
			i++;
		}
		printf("%i", cd);
	}
	printf("\n");
	return (0);
}
