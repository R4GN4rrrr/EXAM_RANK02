/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   expand_str.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ymenyoub <ymenyoub@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/14 23:00:30 by ymenyoub          #+#    #+#             */
/*   Updated: 2023/03/20 13:23:41 by ymenyoub         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void    expand(char *str)
{
	int i = 0;

	while (str[i] == ' ' || str[i] == '\t')
		i++;
	while (str[i])
	{
		if (str[i] == ' ' || str[i] == '\t')
		{
			if (str[i + 1] != ' ' && str[i + 1] != '\0' && str[i + 1] != '\t')
				write(1, "   ", 3);
		}
		else
			write(1, &str[i], 1);
		i++;
	}
}
int main(int ac, char **av)
{
	if (ac == 2)
		expand(av[1]);
	write(1, "\n", 1);
}