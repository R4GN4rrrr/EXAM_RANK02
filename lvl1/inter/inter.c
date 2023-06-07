/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   inter.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ymenyoub <ymenyoub@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/03 11:24:21 by ymenyoub          #+#    #+#             */
/*   Updated: 2023/02/15 00:00:29 by ymenyoub         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
void    inter(char  *s1, char *s2)
{
    int ascci[256] = {0};
    int i = 0;
 
    while (s2[i])
        ascci[(int)s2[i++]] = 1;
    i = 0;
   while (s1[i])
   {
        if (ascci[(int)s1[i]] == 1)
        {
            write(1, &s1[i], 1);
            ascci[(int)s1[i]] = 2;
        }
        i++;
   }
}
int main(int ac, char **av)
{

    if (ac == 3)
        inter(av[1], av[2]);
    write(1, "\n", 1);
}