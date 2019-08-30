/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: knkonzom <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/12 17:58:43 by knkonzom          #+#    #+#             */
/*   Updated: 2019/08/12 18:01:31 by knkonzom         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int	*s;
	int	len;

	if (max >= min)
		len = max - min;
	else
		len = min - max;
	if (!(s = (int *)malloc(sizeof(int) * len)))
		return (NULL);
	while (max != min)
		if (max >= min)
			*s++ = min++;
		else
			*s++ = min--;
	*s = min;
	return (s - len);
}
