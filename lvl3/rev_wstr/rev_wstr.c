/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rev_wstr.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ymenyoub <ymenyoub@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/26 18:41:10 by ymenyoub          #+#    #+#             */
/*   Updated: 2023/02/26 18:41:17 by ymenyoub         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int is_space(char c)
{
	if (c == ' ' || c == '\t')
		return (1);
	return (0);
}

void	rev_wstr(char *str)
{
	int	idx;
	int	j;
	int	first_word;

	idx = 0;
	first_word = 1;
	while (str[idx] != '\0')
		idx++;
	while (idx >= 0)
	{
		while (idx >= 0 && (str[idx] == '\0' || is_space(str[idx])))
			idx--;
		j = idx;
		while (j >= 0 && !is_space(str[j]))
			j--;
		if (first_word == 0)
			write(1, " ", 1);
		write(1, str + j + 1, idx - j);
		first_word = 0;
		idx = j;
	}
}

int main(int ac, char **av)
{
	if (ac == 2)
		rev_wstr(av[1]);
	write(1, "\n", 1);
}
