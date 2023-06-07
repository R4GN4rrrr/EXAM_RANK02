/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_hex.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ymenyoub <ymenyoub@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/03 17:52:10 by ymenyoub          #+#    #+#             */
/*   Updated: 2023/03/06 13:45:32 by ymenyoub         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int small_atoi(char *str)
{
	int nb = 0;
	while(*str)
	{
		nb = nb * 10;
		nb = nb +(*str - 48);
		str++; 
	}
	return (nb);
}

void	hex(int nb)
{
	char *h = "0123456789abcdef";

	if (nb >= 16)
		hex(nb / 16);
	write(1, &h[nb % 16], 1);
}
int main(int ac, char **av)
{
	if (ac == 2)
		hex(small_atoi(av[1]));
	write(1, "\n", 1);
}