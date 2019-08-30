/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   hidenp.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: knkonzom <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/06 15:09:06 by knkonzom          #+#    #+#             */
/*   Updated: 2019/08/12 14:17:35 by knkonzom         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

/*
void	hidenp(char *s1, char *s2)
{
	while (*s2)
		if (*s1 == *s2++)
			s1++;
	if (*s1 == '\0')
		write(1, "1", 1);
	else
		write(1, "0", 1);
}

int main(int ac, char **av)
{
	if (ac == 3)
		hidenp(av[1], av[2]);
	write(1, "\n", 1);
}
*/

void	hidenp(char *s1, char *s2)
{
	while (*s2)
		if (*s1 == *s2++)
			s1++;
	if (*s1 == '\0')
		write(1, "1", 1);
	else
		write(1, "0", 1);
}

int main(int ac, char **av)
{
	if (ac == 3)
	{
		hidenp(av[1], av[2]);
	}
	write(1, "\n", 1);
	return (0);
}
