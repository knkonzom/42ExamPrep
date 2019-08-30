/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strspn.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: knkonzom <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/30 14:38:18 by knkonzom          #+#    #+#             */
/*   Updated: 2019/07/30 14:54:10 by knkonzom         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

/*
size_t	ft_strspn(const char *str, const char *charset)
{
	size_t	i;
	size_t	j;

	i = 0;
	while (str[i])
	{
		j = 0;
		while (charset[j])
		{
			if (str[i] == charset[j])
				break ;
			j++;
		}
		if (!charset[j])
			break ;
		i++;
	}
	return (i);
}
int main()
{
	int len;

	len = ft_strspn("geeksforgeeks", "geeksf");
	printf("Length of segment matching: %d\n", len);
	return (0);
}
*/

size_t	ft_strspn(const char *str, const char *charset)
{
	size_t	i;
	size_t	j;
	
	i = 0;
	while (str[i])
	{
		j = 0;
		while (charset[j])
		{
			if (str[i] == charset[j])
				break ;
			j++;
		}
		if (!charset)
			break ;
		i++;
	}
	return (i);
}

int main()
{
	int len;
	
	len = ft_strspn("geeksforgeeks", "geeksfor");
	printf("Length of segment matching: %d\n", len);
	return (0);
}