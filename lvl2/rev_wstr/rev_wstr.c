/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rev_wstr.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ymenyoub <ymenyoub@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/12 21:42:33 by ymenyoub          #+#    #+#             */
/*   Updated: 2023/03/12 21:57:47 by ymenyoub         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	is_space(char c)
{
	if ((c == ' ') || (c == '\t'))
		return (1);
	return (0);
}

void    rev_wstr(char *str)
{
    int i = 0;
    int j;
    int fw = 1;
    while (str[i] != '\0')
        i++;
    while (i >= 0)
    {
        while (i >= 0 && (str[i] == '\0' || is_space(str[i])))
            i--;
        j = i;
        while (j >= 0 && (!is_space(str[j])))
            j--;
        if (fw == 0)
            write(1, " ", 1);
        write(1, str + j + 1, i - j);
        fw = 0;
        i = j;
    }
}

int main(int ac, char **av)
{
    if (ac == 2)
        rev_wstr(av[1]);
    write(1, "\n", 1);
}

