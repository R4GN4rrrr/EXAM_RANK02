/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   repeat_alpha.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ymenyoub <ymenyoub@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/01 23:04:25 by ymenyoub          #+#    #+#             */
/*   Updated: 2023/02/27 09:56:49 by ymenyoub         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "unistd.h"

int main(int ac, char **av)
{
    int i = 0;
    int j ;
    char *str ;

    if (ac == 2)
    {
        str = av[1];
        while (str[i] != '\0')
        {
            j = 1;
            if (str[i] >= 'a' && str[i] <= 'z')
               j =  str[i] - 96;
            if (str[i] >= 'A' && str[i] <= 'Z')
                 j = str[i] - 64;
            while (j >= 1)
            {
                write(1, &str[i], 1);
                j--;
            }
            i++;
        }
    }
    write(1, "\n", 1);
}