/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: knkonzom <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/29 16:54:36 by knkonzom          #+#    #+#             */
/*   Updated: 2019/07/29 17:02:21 by knkonzom         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

/*
int	ft_atoi(const char *str)
{
	int i;
	int res;
	int sign;

	i = 0;
	res = 0;
	sign = 1;

	while (*(str + i) == '\n' ||
			*(str + i) == '\t' ||
			*(str + i) == '\r' ||
			*(str + i) == '\v' ||
			*(str + i) == '\f' ||
			*(str + i) == ' ')
		i++;
	if (*(str + i) == '-')
		sign = -1;
	if (*(str + i) == '-' || *(str + i) == '+')
		i++;
	while (*(str + i) && *(str + i) >= '0' && *(str + i) <= '9')
		res = res * 10 + *(str + i++) - '0';
	return (res * sign);
}

int main()
{
	char	str1[] = "320";
	int		val;

	val = ft_atoi(str1);
	printf("The result is: %d\n", val);
	return (0);
}
*/

int ft_atoi(const char *str)
{
	int i;
	int res;
	int sign;
	
	i = 0;
	res = 0;
	sign = 1;
	while (*(str + i) == '\n' ||
			*(str + i) == '\t' ||
			*(str + i) == '\v' ||
			*(str + i) == '\r' ||
			*(str + i) == '\f' ||
			*(str + i) == ' ')
		i++;
	if (*(str + i) == '-')
		sign = -1;
	if (*(str + i) == '-' || *(str + i) == '+')
		i++;
	while (*(str + i) && *(str + i) >= '0' && *(str + i) <= '9')
		res = res * 10 + *(str + i++) - '0';
	return (res * sign);
}

int main()
{
	char	str1[] = "-2220";
	int		val;

	val = ft_atoi(str1);
	printf("The result is: %d\n", val);
	return (0);
}