/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   epur_str.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ymenyoub <ymenyoub@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/14 21:53:53 by ymenyoub          #+#    #+#             */
/*   Updated: 2023/03/04 13:57:44 by ymenyoub         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void    epur(char   *str)
{
    int i = 0;

    while (str[i] == ' ' || str[i] == '\t')
        i++;
    while (str[i] != '\0')
    {
        if (str[i] == ' ' || str[i] == '\t')
        {
            if (str[i + 1] != ' ' && str[i + 1] != '\0' && str[i + 1] != '\t')
                write(1, " ", 1);
        }
        else
            write(1, &str[i], 1);
        i++;
    }
}
int main(int ac, char **av)
{
    if (ac == 2)
        epur(av[1]);
    write(1, "\n", 1);
}