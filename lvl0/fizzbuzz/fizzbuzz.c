/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fizzbuzz.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ymenyoub <ymenyoub@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/01 21:56:08 by ymenyoub          #+#    #+#             */
/*   Updated: 2023/02/01 22:07:46 by ymenyoub         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void ft_putchar(char c)
{
    write(1, &c, 1);
}
int main()
{
    int nb = 1;
    while(nb <= 100)
    {
        if ((nb % 3 == 0) && (nb % 5 == 0))
            write(1, "fizzbuzz", 8);
        else if (nb % 3 == 0)
            write(1, "fizz", 4);
        else if (nb % 5 == 0)
            write(1, "buzz", 4);
        else if (nb >= 0 && nb <= 9)
            ft_putchar(nb + 48);
        else
        {  
            ft_putchar(nb / 10 + 48);
            ft_putchar(nb % 10 + 48);
        }
        nb++;
        write(1, "\n", 1);
    }
  
}
