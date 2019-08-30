/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rev_wstr.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: knkonzom <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/20 19:18:16 by knkonzom          #+#    #+#             */
/*   Updated: 2019/08/20 20:40:29 by knkonzom         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int		str_len(char *s)
{
	int	i;

	i = 0;
	while (s[i])
		i++;
	return (i);
}

int		is_blank(char c)
{
	if (c == ' ' || c == '\t')
		return (1);
	return (0);
}

void	print_rev(char *str)
{
	int	start;
	int	end;
	int	i;

	start = str_len(str) - 1;
	end = start;
	i = start;
	while (start >= 0)
	{
		end = start;
		i = start;
		while (start >= 0 && !is_blank(str[start]))
			start--;
		start++;
		i = start;
		while (i <= end)
		{
			write(1, &str[i], 1);
			i++;
		}
		if (start > 0)
			write(1, " ", 1);
		start--;
		start--;
	}
}

int main(int ac, char **av)
{
	if (ac == 2)
		print_rev(av[1]);
	write(1, "\n", 1);
}
