/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   is_power_of_2.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: knkonzom <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/30 15:12:41 by knkonzom          #+#    #+#             */
/*   Updated: 2019/07/30 15:18:04 by knkonzom         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
/*
int	is_power_of_2(unsigned int n)
{
	if (n == 0)
		return (0);
	while (n % 2 == 0)
		n /= 2;
	if (n == 1)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}

int main()
{
	int res;
	int i;

	i = 16;
	res = is_power_of_2(i);
	printf("Answer: %d\n", res);
	return (0);
}
*/

int is_power_of_2(unsigned int n)
{
	if (n == 0)
		return (0);
	while (n % 2 == 0)
		n /= 2;
	if (n == 1)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}

int main()
{
	int res;
	int i;

	i = 2147483648;
	res = is_power_of_2(i);
	printf("Answer: %d\n", res);
	return (0);
}