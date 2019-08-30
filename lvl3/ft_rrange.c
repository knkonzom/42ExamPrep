/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rrange.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: knkonzom <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/12 17:43:56 by knkonzom          #+#    #+#             */
/*   Updated: 2019/08/12 17:53:06 by knkonzom         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

int     *ft_rrange(int start, int end)
{
    int		*s;
    int		len;
	
	len = (end >= start) ? end - start + 1 : start - end + 1;
    if (!(s = (int*)malloc(sizeof(int) * len)))
        return (NULL);
    while (len--)
        s[len] = (end >= start) ? start++ : start--;
    return (s);
}

int main()
{
	int numb_range;
    int i;
    int start;
    int end;
    int *numbers;

    i = 0;
    start = 1;
    end = 3;
    if (end > start)
        numb_range = end - start + 1;
    else
        numb_range = start - end;
    numbers = (int *)malloc(sizeof(int) * numb_range);
    numbers = ft_rrange(start, end);
    while (i <= numb_range)
        printf("%d |", numbers[i++]);
	return 0;
}
