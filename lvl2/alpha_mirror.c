/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   alpha_mirror.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: knkonzom <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/29 16:41:07 by knkonzom          #+#    #+#             */
/*   Updated: 2019/07/29 16:46:32 by knkonzom         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

/*
int	main(int ac, char **av)
{
	int		i;
	char	j;

	i = 0;
	if (ac == 2)
	{
		while (av[1][i])
		{
			if (av[1][i] >= 'a' && av[1][i] <= 'z')
				j = 'm' - (av[1][i] - 'n');
			else if (av[1][i] >= 'A' && av[1][i] <= 'Z')
				j = 'M' - (av[1][i] - 'N');
			else
				j = av[1][i];
			write(1, &j, 1);
			i++;
		}
	}
	write(1, "\n", 1);
	return (0);
}
*/

int main(int ac, char **av)
{
	int i;
	char j;
	
	if (ac == 2)
	{
		i = 0;
		while (av[1][i])
		{
			if (av[1][i] >= 'a' && av[1][i] <= 'z')
				av[1][i] = ('m' - (av[1][i] - 'n'));
			else if (av[1][i] >= 'A' && av[1][i] <= 'Z')
				av[1][i] = ('M' - (av[1][i] - 'N'));
			write(1, &av[1][i], 1);
			i++;
		}
	}
	write(1, "\n", 1);
	return (0);
}