/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: knkonzom <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/30 11:48:09 by knkonzom          #+#    #+#             */
/*   Updated: 2019/07/30 11:58:15 by knkonzom         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

/*
char	*ft_strdup(char *src)
{
	char	*new_str;
	int		i;
	int		len;

	len = 0;
	i = 0;
	while (src[len])
		len++;
	if (!(new_str = (char *)malloc(sizeof(*new_str) * len + 1)))
		return (NULL);
	while (i < len)
	{
		new_str[i] = src[i];
		i++;
	}
	new_str[i] = '\0';
	return (new_str);
}

int main()
{
	char str[] = "Kwakhanya";
	
	char *ret = ft_strdup(str);
	printf("Result: %s\n", ret);
	return (0);
}
*/

char	*ft_strdup(char *src)
{
	char *new_str;
	int i;
	int len;
	
	i = 0;
	len = 0;
	if (src == NULL)
		return (NULL);
	while (src[len])
		len++;
	new_str = (char *)malloc(sizeof((char) len + 1));
	if (!new_str)
		return (NULL);
	while (src[i])
	{
		new_str[i] = src[i];
		i++;
	}
	new_str[i] = '\0';
	return ((char *)new_str);
}

int main()
{
	char str[] = "Hello There";
	
	char *ret = ft_strdup(str);
	printf("Duplicated string: %s\n", ret);
	return (0);
}