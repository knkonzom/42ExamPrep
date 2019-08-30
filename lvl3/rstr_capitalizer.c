/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rstr_capitalizer.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: knkonzom <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/06 15:17:26 by knkonzom          #+#    #+#             */
/*   Updated: 2019/08/12 15:36:46 by knkonzom         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	rstr_capitalizer(char *s)
{
	int	i;

	i = 0;
	while (s[i])
	{
		if (s[i] >= 'A' && s[i] <= 'Z')
			s[i] += 32;
		if ((s[i] >= 'a' && s[i] <= 'z') && (s[i + 1] == ' ' || s[i + 1] == '\t'\
					|| s[i + 1] == '\0'))
			s[i] -=32;
		i++;
	}
	write(1, s, i);
	write(1, "\n", 1);
}

int main(int ac, char **av)
{
	int	i;

	i = 1;
	if (ac > 1)
	{
		while (ac > i)
		{
			rstr_capitalizer(av[i]);
			i++;
		}
	}
	else
		write(1, "\n", 1);
}
