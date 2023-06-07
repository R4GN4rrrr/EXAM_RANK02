/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   do_op.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ymenyoub <ymenyoub@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/05 07:56:00 by ymenyoub          #+#    #+#             */
/*   Updated: 2023/03/06 13:39:32 by ymenyoub         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>
#include <unistd.h>

int main(int ac, char **av)
{
    int nb;
    int nb1;
    int sum = 0;

    if (ac == 4)
    {
        nb = atoi(av[1]);
        nb1 = atoi(av[3]);
        if (av[2][0] == '+')
            sum = nb + nb1;
        else if (av[2][0] == '-')
            sum = nb - nb1;
        else if (av[2][0] == '/')
            sum = nb / nb1;
        else if (av[2][0] == '%')
            sum = nb % nb1;
        else if (av[2][0] == '*')
            sum = nb * nb1;
        printf("%d", sum);
    }
    printf("\n");
}


