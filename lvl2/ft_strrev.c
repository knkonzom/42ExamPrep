/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrev.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: knkonzom <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/30 13:23:48 by knkonzom          #+#    #+#             */
/*   Updated: 2019/07/30 13:28:28 by knkonzom         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>
/*
char	*ft_strrev(char *str)
{
	int		i;
	int		j;
	int		len;
	char	*temp;
	
	len = 0;
	while (str[len])
		len++;
	temp = (char *)malloc(sizeof(char) * len);
	i = 0;
	while (str[i])
	{
		temp[i] = str[i];
		i++;
	}
	i--;
	j = 0;
	while (temp[i])
	{
		str[j] = temp[i];
		i--;
		j++;
	}
	str[j] = '\0';
	return (str);
}

int main()
{
	char str[] = "hello";

	printf("String before: %s\n", str);
	ft_strrev(str);
	printf("String after: %s\n", str);
	return (0);
}
*/

char	*ft_strrev(char *str)
{
	int i;
	int j;
	char *temp;
	
	i = 0;
	while (str[i])
		i++;
	temp = (char *)malloc(sizeof(char) * i);
	i = 0;
	while (str[i])
	{
		temp[i] = str[i];
		i++;
	}
	i--;
	j = 0;
	while (temp[i])
	{
		str[j] = temp[i];
		i--;
		j++;
	}
	str[j] = '\0';
	return (str);
}

int main()
{
	char str[] = "Kwakhanya";
	char *ret;
	printf("String before being reversed: %s\n", str);
	ret = ft_strrev(str);
	printf("String after being reversed: %s\n", ret);
	return (0);
}