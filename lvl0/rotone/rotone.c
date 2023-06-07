/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotone.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ymenyoub <ymenyoub@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/03 09:30:07 by ymenyoub          #+#    #+#             */
/*   Updated: 2023/02/03 09:31:38 by ymenyoub         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void    rotone(char *str)
{
    int i = 0;

    while(str[i] != '\0')
    {
       if ((str[i] >= 'a' && str[i] <= 'y') || (str[i] >= 'A' && str[i] <= 'Y'))
            str[i] += 1;
        else if ((str[i] == 'z' )|| (str[i] == 'Z'))
            str[i] -= 25;
        write(1, &str[i], 1);
        i++;
    }
}
int main(int ac, char **av)
{
    if (ac == 2)
    {
        rotone(av[1]);
    }
    write(1, "\n", 1);

}