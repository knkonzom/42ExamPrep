/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcspn.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: knkonzom <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/30 11:10:01 by knkonzom          #+#    #+#             */
/*   Updated: 2019/07/30 11:40:57 by knkonzom         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>
#include <string.h>

/*
char	*ft_strchr(const char *s, int c)
{
	int	i;

	i = -1;
	while (++i < (int)strlen(s) + 1)
	{
		if (*(s + i) == (char)c)
			return ((char *)s + i);
	}
	return (NULL);
}

size_t	ft_strcspn(const char *s, const char *charset)
{
	size_t	ret;

	ret = 0;
	while (*s)
	{
		if (ft_strchr(charset, *s))
			return (ret);
		else
		{
			s++;
			ret++;
		}
	}
	return (ret);
}

int main()
{
	int size;
	int i;
	char str1[] = "geekforgeeks";
	char str2[] = "qwts";

	size = ft_strcspn(str1, str2);
	i = strcspn(str1, str2);
	printf("my function result: %d\n", size);
	printf("system function result: %d\n", i);
	return (0);
}
*/

char	*ft_strchr(const char *s, int c)
{
	int i;
	
	i = -1;
	while (++i < (int)strlen(s) + 1)
	{
		if (*(s + i) == (char)c)
			return ((char *)s + i);
	}
	return (NULL);
}

size_t	ft_strcspn(const char *s, const char *charset)
{
	size_t	ret;
	
	ret = 0;
	while (*s)
	{
		if (ft_strchr(charset, *s))
			return (ret);
		else
		{
			s++;
			ret++;
		}
	}
	return (ret);
}

int main()
{
	int size;
	int i;
	char str1[] = "geeksfogeeks";
	char str2[] = "qwts";
	
	size = ft_strcspn(str1, str2);
	i = strcspn(str1, str2);
	printf("my function result: %d\n", size);
	printf("system function result: %d\n", i);
	return (0);
}