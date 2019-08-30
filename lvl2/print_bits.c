/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_bits.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: knkonzom <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/30 16:08:55 by knkonzom          #+#    #+#             */
/*   Updated: 2019/07/30 16:25:51 by knkonzom         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>

/*
void	print_bits(unsigned char octet)
{
	int divide;
	int oct;

	oct = octet;
	divide = 128;
	while (divide)
	{
		if (divide <= oct)
		{
			write(1, "1", 1);
			oct %= divide;
		}
		else
			write(1, "0", 1);
		divide /= 2;
	}
}
*/

void	print_bits(unsigned char octet)
{
	int divide;
	int oct;
	
	oct = octet;
	divide = 128;
	while (divide)
	{
		if (divide <= oct)
		{
			write (1, "1", 1);
			oct %= divide;
		}
		else
			write(1, "0", 1);
		divide /= 2;
	}
}

int main()
{
	int n = 128;
	print_bits(n);
	write(1, "\n", 1);
	return (0);
}