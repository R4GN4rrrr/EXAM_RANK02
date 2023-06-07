/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   add_prime_sum.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ymenyoub <ymenyoub@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/04 16:53:08 by ymenyoub          #+#    #+#             */
/*   Updated: 2023/03/04 17:07:59 by ymenyoub         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	short_nbr(int nb)
{
	char c;
	if (nb > 9)
	{
		short_nbr(nb / 10);
		short_nbr(nb % 10);
	}
	else
	{
		c = nb + 48;
		write(1, &c, 1);
	}
	
}

int small_atoi(char *str)
{
	int nb = 0;
	while (*str)
	{
		nb = nb * 10;
		nb = nb + (*str - 48);
		str++;
	}
	return (nb);
}

int ft_is_prime(int nbr)
{
	int check = 2;

	if (check <= 1)
		return 0;
	while (check < nbr)
	{
		if (nbr % check == 0)
			return (0);
		check++;			
	}
	return(1);
}
int ft_add_prime(int nbr)
{
	int i = 2;
	int sum = 0;

	if (nbr <= 0)
		return (0);
	while (i <= nbr)
	{
		if (ft_is_prime(i))
			sum += i;
		i++;
	}
	return(sum);
}
int main (int ac, char **av)
{
	if (ac == 2)
		short_nbr(ft_add_prime(small_atoi(av[1])));
	else
		write(1, "0", 1);
	write(1, "\n", 1);
}