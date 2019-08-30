/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   epur_str.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: knkonzom <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/06 14:49:28 by knkonzom          #+#    #+#             */
/*   Updated: 2019/08/19 13:19:32 by knkonzom         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int main(int ac, char **av)
{
	int	i;
	int	space;

	i = 0;
	space = -1;
	if (ac == 2)
	{
		while (av[1][i])
		{
			if (av[1][i] != ' ' && av[1][i] != '\t')
			{
				if (space == 1)
					write(1, " ", 1);
				space = 0;
				write(1, &av[1][i], 1);
			}
			else if (space == 0)
				space = 1;
			i++;
		}
	}
	write(1, "\n", 1);
	return (0);

}
