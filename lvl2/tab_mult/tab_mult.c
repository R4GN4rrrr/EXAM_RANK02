/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   tab_mult.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ymenyoub <ymenyoub@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/04 22:13:52 by ymenyoub          #+#    #+#             */
/*   Updated: 2023/03/04 22:31:35 by ymenyoub         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <unistd.h>

void small_putnbr(int nb)
{
    if (nb > 9)
    {
        small_putnbr(nb / 10);
        small_putnbr(nb % 10);
    }
    else
    {
        char c = nb + 48;
        write(1, &c, 1);
    }
}

int short_atoi(char *str)
{
    int nb = 0;
    while (*str)
    {
        nb = nb * 10;
        nb = nb + (*str - 48);
        str++;
    }
    return nb;
}

int main(int ac, char **av)
{
    int j = 1;
    int nbr;
    if (ac != 2)
       write(1, "\n", 1);
    else
    {
        nbr = short_atoi(av[1]);
        while (j <= 9)
        {
            small_putnbr(j);
            write(1, " x ", 3);
            small_putnbr(nbr);
            write(1, " = ", 3);
            small_putnbr(j * nbr);
            write(1, "\n", 1);
            j++;
        }
    }
}