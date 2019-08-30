/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi_base.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: knkonzom <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/13 17:12:13 by knkonzom          #+#    #+#             */
/*   Updated: 2019/08/13 17:21:14 by knkonzom         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	isblank(char c)
{
	if (c <= 32)
		return (1);
	return (0);
}

int	isvalid(char c, int base)
{
	char digits[17] = "0123456789abcdef";
	char digits1[17] = "0123456789ABCDEF";

	while (base--)
		if (digits[base] == c || digits1[base] == c)
			return (1);
	return (0);
}

int	value_of(char c)
{
	if (c >= '0' && c <= '9')
		return (c - '0');
	else if (c >= 'a' && c <= 'z')
		return (c - 'a' + 10);
	else if (c >= 'A' && c <= 'Z')
		return (c - 'A' + 10);
	return (0);
}

int	ft_atoi_base(const char *s, int str_base)
{
	int	sign;
	int	res;

	res = 0;
	while (isblank(*s))
		s++;
	if (*s == '-')
		sign = -1;
	else
		sign = 1;
	if (*s == '-' || *s== '+')
		++s;
	else
		return (0);
	while (isvalid(*s, str_base))
		res = res * str_base + value_of(*s++);
	return (res * sign);
}
