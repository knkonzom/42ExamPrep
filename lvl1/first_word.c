/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   first_word.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: knkonzom <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/29 13:11:44 by knkonzom          #+#    #+#             */
/*   Updated: 2019/07/29 13:29:21 by knkonzom         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
/*
void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int main(int ac, char **av)
{
	int	i;
	
	if (ac == 2)
	{
		i = 0;
		{
			while (av[1][i] == ' ' || av[1][i] == '\t')
			{
				i++;
			}
			while (av[1][i] != ' ' && av[1][i] != '\t' && av[1][i] != '\0')
			{
				ft_putchar(av[1][i]);
				i++;
			}
		}
	}
	ft_putchar('\n');
	return (0);
}
*/

int main(int ac, char **av)
{
	int i;
	
	i = 0;
	if (ac == 2)
	{
		while (av[1][i] == ' ' || av[1][i] == '\t')
		{
			i++;
		}
		while (av[1][i] != ' ' && av[1][i] != '\t' && av[1][i] != '\0')
		{
			write(1, &av[1][i], 1);
			i++;
		}
	}
	write(1, "\n", 1);
	return (0);
}