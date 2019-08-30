/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: knkonzom <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/29 17:02:33 by knkonzom          #+#    #+#             */
/*   Updated: 2019/07/29 17:11:23 by knkonzom         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
/*
int	ft_strcmp(const char *s1, const char *s2)
{
	unsigned char	*str1;
	unsigned char	*str2;
	unsigned int	i;

	str1 = (unsigned char *)s1;
	str2 = (unsigned char *)s2;
	i = 0;
	while (str1[i] != '\0' || str2[i] != '\0')
	{
		if (str1[i] != str2[i])
		{
			if ((str1[i] - str2[i]) < 0)
				return (-1);
			else
				return (1);
		}
		i++;
	}
	return (0);
}

int main()
{
	char str1[] = "NKONZOMB";
	char str2[] = "NKONZOMBI";
	int	i;

	i = 0;

	if (ft_strcmp(str1, str2) > i)
		printf("String 1 is greater than string 2");
	else if (ft_strcmp(str1, str2) < i)
		printf("String 2 is greater than string 1");
	else if (ft_strcmp(str1, str2) == 0)
		printf("Strings are equal");
	return (0);
}
*/

/*
int	ft_strcmp(const char *s1, const char *s2)
{
	unsigned char *str1;
	unsigned char *str2;
	int i;
	
	str1 = (unsigned char *)s1;
	str2 = (unsigned char *)s2;
	i = 0;
	while (str1[i] != '\0' || str2[i] != '\0')
	{
		if (str1[i] != str2[i])
		{
			if ((str1[i] - str2[i]) < 0)
				return (-1);
			else
				return (1);
		}
		i++;
	}
	return (0);
}
*/

int	ft_strcmp(char *s1, char *s2)
{
	while (*s1 == *s2 && *s1 != '\0' && *s2 != '\0')
	{
		s1++;
		s2++;
	}
	return (*s1 - *s2);
}
int main()
{
	char str1[] = "NKONZOMBI";
	char str2[] = "NKONZOMB";
	
	if (ft_strcmp(str1, str2) < 0)
		printf("String 1 is less than String 2\n");
	else if (ft_strcmp(str1, str2) > 0)
		printf("String 2 is greater than String 1\n");
	else if (ft_strcmp(str1, str2) == 0)
		printf("Strings are equal.\n");
	return (0);
}