/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   union.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ymenyoub <ymenyoub@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/05 10:04:04 by ymenyoub          #+#    #+#             */
/*   Updated: 2023/03/20 13:23:09 by ymenyoub         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int main(int ac, char **av)
{
    int tab[256] = {0};
    int i = 0;
    int j = 1;

    if (ac == 3)
    {
        while (j < 3)
        {
            while (av[j][i])
            {   
               tab[(int)av[j][i++]] = 1; 
            }
            i = 0;
            j++;
        }
        j = 1;
        while(j < 3)
        {
            while (av[j][i])
            {
                if (tab[(int)av[j][i]] == 1)
                {
                    write(1, &av[j][i], 1);
                    tab[(int)av[j][i]] = 2;
                }
                i++;
            }
            i = 0;
            j++;
        }
    }
    write(1, "\n", 1);
}