/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   max.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: knkonzom <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/30 15:36:04 by knkonzom          #+#    #+#             */
/*   Updated: 2019/07/30 15:39:56 by knkonzom         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

/*
int	max(int *tab, unsigned int len)
{
	unsigned int i;
	int max;

	i = 0;
	max = 0;
	if (len > 0)
		max = tab[0];
	while (i < len)
	{
		if (tab[i] > max)
			max = tab[i];
		i++;
	}
	return (max);
}

int	main()
{
	int tab[] = {1, 2, 3, 4, 5};
	int len;
	int res;

	len = 5;
	res = max(tab, len);
	printf("Max: %i ||\n", res);
}
*/

int	max(int *tab, unsigned int len)
{
	unsigned int i;
	int max;
	
	i = 0;
	max = 0;
	if (!tab)
		return (0);
	if (len > 0)
		max = tab[0];
	while (i < len)
	{
		if (tab[i] > max)
			max = tab[i];
		i++;
	}
	return (max);
}

int	main()
{
	int tab[] = {1, 2, 3, 4, 5};
	int len;
	int res;

	len = 5;
	res = max(tab, len);
	printf("Max: %i ||\n", res);
}