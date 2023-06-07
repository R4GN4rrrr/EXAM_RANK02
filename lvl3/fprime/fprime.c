/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fprime.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ymenyoub <ymenyoub@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/03 15:29:27 by ymenyoub          #+#    #+#             */
/*   Updated: 2023/03/20 13:31:16 by ymenyoub         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main(int ac, char **av)
{
	int i = 1;
	int nb;
	if (ac == 2)
	{
		nb = atoi(av[1]);
		if (nb == 1)
			printf("1");
		while (nb >= ++i)
		{
			if (nb % i == 0)
			{
				printf("%d", i);
				if (nb == i)
					break ;
				printf("*");
				nb /= i;
				i = 1;
			}
		}
		
	}
	printf("\n");
}

