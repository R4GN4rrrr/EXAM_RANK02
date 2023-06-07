/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   str_capitalizer.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ymenyoub <ymenyoub@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/15 01:57:48 by ymenyoub          #+#    #+#             */
/*   Updated: 2023/03/19 20:15:51 by ymenyoub         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void    ft_strcap(char  *str)
{
    int i = 1;

    if (str[0]  >= 'a' && str[0] <= 'z')
        str[0] -= 32;
    write(1, &str[0], 1);
    while(str[i])
    {
        if (str[i] >= 'A' && str[i] <= 'Z')
            str[i] += 32;
        if ((str[i] >= 'a' && str[i] <= 'z') && (str[i - 1] == ' ' || str[i - 1] == '\t'))
            str[i] -= 32;
        write(1, &str[i], 1);
        i++;
    }
}
int main(int ac, char **av)
{
    if (ac >= 2)
    {
        int i = 1;
        while (i < ac)
        {
            ft_strcap(av[i]);
            i++;
        }
    }
    write(1, "\n", 1);
}

