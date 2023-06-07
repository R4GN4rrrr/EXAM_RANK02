/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   paramsum.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ymenyoub <ymenyoub@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/15 01:33:19 by ymenyoub          #+#    #+#             */
/*   Updated: 2023/02/15 01:37:39 by ymenyoub         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}
void	short_putnbr(int nb)
{
	if (nb >= 10)
	{
		short_putnbr(nb / 10);
		short_putnbr(nb % 10);
	}
	else
		ft_putchar(nb + 48);
}
int main(int ac, char **av)
{
	short_putnbr(ac - 1);
	write(1, "\n", 1);
}