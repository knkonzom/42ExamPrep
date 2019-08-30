/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   str_capitalizer.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: exam <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/14 10:02:22 by exam              #+#    #+#             */
/*   Updated: 2019/08/19 13:02:28 by knkonzom         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	str_capitalizer(char *s)
{
	int	i;

	i = 0;
	while (s[i] != '\0')
	{
		while ((s[i] == ' ' || s[i] == '\t') && s[i + 1] != '\0')
			i++;
		if ((s[i] >= 'a' && s[i] <= 'z') && (s[i - 1] == ' ' || s[i - 1] == '\t'))
			s[i] -= 32;
		else if ((s[i] >= 'A' && s[i] <= 'Z') && (s[i - 1] != ' ' && s[i - 1] != '\t' && s[i - 1] != '\0'))
			s[i] += 32;
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
			str_capitalizer(av[i]);
			i++;
		}
	}
	else
		write(1, "\n", 1);
	return (0);
}
