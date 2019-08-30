/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   inter.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: knkonzom <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/30 14:57:20 by knkonzom          #+#    #+#             */
/*   Updated: 2019/07/30 15:09:00 by knkonzom         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

int		ft_has_char(char *str, char c)
{
	int i;

	i = 0;
	while (str[i])
	{
		if (str[i] == c)
			return 1;
		i++;
	}
	return (0);
}

void	inter(char *str1, char *str2, char *comp)
{
	int i;
	int j;

	i = 0;
	j = 0;
	while (str1[i])
	{
		if (ft_has_char(str2, str1[i]) == 1)
		{
			if (ft_has_char(comp, str1[i]) == 0)
			{
				write(1, &str1[i], 1);
				comp[j] = str1[i];
				j++;
			}
		}
		i++;
	}
}

int main(int ac, char **av)
{
	char str[1024];
	if (ac == 3)
	{
		inter(av[1], av[2], str);
	}
	write(1, "\n", 1);
	return (0);
}
