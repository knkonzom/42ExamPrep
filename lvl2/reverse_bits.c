/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   reverse_bits.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: knkonzom <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/30 16:26:15 by knkonzom          #+#    #+#             */
/*   Updated: 2019/07/30 16:52:47 by knkonzom         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
unsigned char	reverse_bits(unsigned char octet)
{
	unsigned char	res;
	int				count;

	res = 0;
	count = 8;
	while (count)
	{
		res = res * 2 + (unsigned char)(octet % 2);
		octet = octet / 2;
		count--;
	}
	return (res);
}

#include <unistd.h>

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

int main()
{
	int n = 5;
	print_bits(n);
	write(1, "\n", 1);
	char octet = reverse_bits(n);
	print_bits(octet);
}
*/

unsigned char	reverse_bits(unsigned char octet)
{
	return (((octet >> 0) & 1) << 7) | \
			(((octet >> 1) & 1) << 6) | \
			(((octet >> 2) & 1) << 5) | \
			(((octet >> 3) & 1) << 4) | \
			(((octet >> 4) & 1) << 3) | \
			(((octet >> 5) & 1) << 2) | \
			(((octet >> 6) & 1) << 1) | \
			(((octet >> 7) & 1) << 0);
}