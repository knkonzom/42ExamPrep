/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   lcm.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: knkonzom <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/12 17:07:47 by knkonzom          #+#    #+#             */
/*   Updated: 2019/08/14 09:21:11 by knkonzom         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

unsigned int	lcm(unsigned int a, unsigned int b)
{
	int	lcm;
	int	max;
	int	a1;
	int	b1;
	int	i;

	lcm = 0;
	a1 = a;
	b1 = b;
	if (a == 0 || b == 0)
		return (0);
	if (a1 > b1)
	{
		max = a1;
		i = a1;
	}
	else
	{
		max = b1;
		i = b1;
	}
	while (1)
	{
		if (max % a1 == 0 && max % b1 == 0)
		{
			lcm = max;
			break ;
		}
		max += i;
	}
	return ((unsigned int)lcm);
}

int main()
{
	printf("%d\n", lcm(1,0));
	printf("%d\n", lcm(8, 16));

	return (0);
}
