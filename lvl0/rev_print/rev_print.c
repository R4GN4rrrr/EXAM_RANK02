/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rev_print.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ymenyoub <ymenyoub@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/03 08:50:49 by ymenyoub          #+#    #+#             */
/*   Updated: 2023/03/20 13:37:02 by ymenyoub         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int main(int ac, char **av)
{
    int i = 0;
    if (ac == 2)
    {
        while(av[1][i] != '\0')
            i++;
        while (i >= 0)
        {
            write(1, &av[1][i - 1], 1);
            i--;
        }
    }
    write(1, "\n", 1);
}