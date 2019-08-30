/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rostring.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: knkonzom <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/20 16:45:28 by knkonzom          #+#    #+#             */
/*   Updated: 2019/08/20 19:08:13 by knkonzom         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int		ft_isblank(char c)
{
	if (c == ' ' || c == '\t')
		return (1);
	else
		return (0);
}

void	rostring(char *s)
{
	int	i;
	int	first_word_len;

	i = 0;
	first_word_len = 0;
	while (s[i])
	{
		while (ft_isblank(s[i]))
			i++;
		if (s[i] && !ft_isblank(s[i]))
		{
			if (first_word_len == 0)
				while (s[i] && !ft_isblank(s[i++]))
					first_word_len++;
			else
			{
				while (s[i] && !ft_isblank(s[i]) && write(1, &s[i++], 1));
				write(1, " ", 1);
			}
		}
	}
	i = 0;
	while (ft_isblank(s[i]))
		i++;
	while (first_word_len--)
		write(1, &s[i++], 1);
}

int main(int ac, char **av)
{
	if (ac > 1 && *av[1])
		rostring(av[1]);
	write(1, "\n", 1);
	return (0);
}
