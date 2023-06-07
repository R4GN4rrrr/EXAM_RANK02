/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   hidenp.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ymenyoub <ymenyoub@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/24 10:00:52 by ymenyoub          #+#    #+#             */
/*   Updated: 2023/03/11 21:08:52 by ymenyoub         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int ft_strlen(char *str)
{
	int i = 0;
	while(str[i])
		i++;
	return (i);
}

void	hidenp(char	*s1, char *s2)
{
	int i = 0;
	int j = 0;
	
	while (s2[j] != '\0')
	{
		if (s1[i] == s2[j])
			i++;
		j++;
	}		
	if (i == ft_strlen(s1))
		ft_putchar('1');
	else
		ft_putchar('0');
}


int main(int ac, char **av)
{
	if (ac == 3)
		hidenp(av[1], av[2]);
	write(1, "\n", 1);
}