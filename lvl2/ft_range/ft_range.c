/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ymenyoub <ymenyoub@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/16 04:13:35 by ymenyoub          #+#    #+#             */
/*   Updated: 2023/03/13 13:30:36 by ymenyoub         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	abs_value(int nb)
{
	if (nb < 0)
		return (-nb);
	return (nb);
}
int     *ft_range(int start, int end)
{
	int  i = 0;
	int size  = abs_value(start - end);;
	int *tab = (int *)malloc(sizeof(int) * size + 1);
	if (!tab)
		return (NULL);
	while (start < end)
	{
		tab[i] = start;
		start++;
		i++;
	}
	tab[i] = start;
	while (start > end)
	{
		tab[i] = start;
		start--;
		i++;
	}
	tab[i] = start;
	return (tab);
}






// #include <stdio.h>
// int	main(void)
// {
// 	int	*tab;
// 	int	i;
// 	int	start;
// 	int	end;
// 	int	size;
// 	i = 0;
// 	start = -5;
// 	end = 5;
// 	tab = ft_range(start, end);
// 	size = abs_value(end - start) + 1;
// 	while (i < size)
// 	{
// 		printf(" [%i]\n ", tab[i]);
// 		i++;
// 	}
// }