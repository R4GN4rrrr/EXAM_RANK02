/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pgcd.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ymenyoub <ymenyoub@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/02 20:46:18 by ymenyoub          #+#    #+#             */
/*   Updated: 2023/03/06 13:46:14 by ymenyoub         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

void	pgcd(int nb, int nb1)
{
	int div = 1;
	int pgcd;
	if (nb <= 0 || nb1 <= 0)
		return ;
	while ((div <= nb) || (div <= nb1))
	{
		if (((nb % div ) == 0) && ((nb1 % div) == 0))
			pgcd = div;
		div++;
	}
	printf("%d", pgcd);
}

int main(int ac, char **av)
{
	if (ac == 3)
		pgcd(atoi(av[1]), atoi(av[2]));
	printf("\n");
}
