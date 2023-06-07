/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ymenyoub <ymenyoub@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/03 17:18:14 by ymenyoub          #+#    #+#             */
/*   Updated: 2023/03/19 21:24:46 by ymenyoub         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>
#include <limits.h>


int len_nbr(int count)
{
	int i = 0;
	if (count <= 0)
		i++;
	while (count)
	{
		count /= 10;
		i++;
	}
	return(i);
}
char	*ft_itoa(int nbr)
{
	int i = 1;
	int size = len_nbr(nbr);
	long nbr1 = (long)nbr;
	char *str = malloc(sizeof(char) * (size + 1));
	if (!str)
		return (NULL);
	if (nbr1 < 0)
	{
		nbr1 = nbr1 * -1;
		str[0] = '-';
	}
	if (nbr1 == 0)
		str[0] = '0';
	while (nbr1 > 0)
	{
		str[size - i++] = (nbr1 % 10 + 48);
		nbr1 /= 10;
	}
    str[size] = '\0';
	return (str);
}

int main()
{
    int n = -2147483648;
    char *str = ft_itoa(n);
	printf("%s\n", str);
}