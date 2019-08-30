/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   repeat_alpha.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: knkonzom <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/29 14:38:42 by knkonzom          #+#    #+#             */
/*   Updated: 2019/07/29 15:07:00 by knkonzom         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
/*
int main(int ac, char **av)
{
	int		i;
	char	j;

	if (ac == 2)
	{
		i = 0;
		while (av[1][i])
		{
			if (av[1][i] >= 'a' && av[1][i] <= 'z')
			{
				j = av[1][i];
				while (j >= 'a')
				{
					write(1, &av[1][i], 1);
					j--;
				}
			}
			else if (av[1][i] >= 'A' && av[1][i] <= 'Z')
			{
				j = av[1][i];
				while (j >= 'A')
				{
					write(1, &av[1][i], 1);
					j--;
				}
			}
			else
				write(1, &av[1][i], 1);
			i++;
		}
	}
	write(1, "\n", 1);
}
*/
int main(int ac, char **av)
{
	int		i;
	char	j;
	
	if (ac == 2)
	{
		i = 0;
		while (av[1][i])
		{
			if (av[1][i] >= 'A' && av[1][i] <= 'Z')
			{
				j = av[1][i];
				while (j >= 'A')
				{
					write(1, &av[1][i], 1);
					j--;
				}
			}
			else if (av[1][i] >= 'a' && av[1][i] <= 'z')
			{
				j = av[1][i];
				while (j >= 'a')
				{
					write(1, &av[1][i], 1);
					j--;
				}
			}
			else
				write(1, &av[1][i], 1);
			i++;
		}
	}
	write(1, "\n", 1);
	return(0);
}