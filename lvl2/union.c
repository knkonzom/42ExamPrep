/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   union.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: knkonzom <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/30 16:55:56 by knkonzom          #+#    #+#             */
/*   Updated: 2019/07/30 17:00:40 by knkonzom         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int		ft_has_char(char *s, char c)
{
	int i;

	i = 0;
	while (s[i])
	{
		if (s[i] == c)
			return (1);
		i++;
	}
	return (0);
}

void	ft_union(char *str, char *united, int *position)
{
	int i;

	i = 0;
	while (str[i])
	{
		if (ft_has_char(united, str[i]) == 0)
		{
			write(1, &str[i], 1);
			united[*position] = str[i];
			(*position)++;
		}
		i++;
	}
}

int main(int ac, char **av)
{
	int position;
	char str[1024];

	if (ac == 3)
	{
		position = 0;
		ft_union(av[1], str, &position);
		ft_union(av[2], str, &position);
	}
	write(1, "\n", 1);
	return (0);
}
