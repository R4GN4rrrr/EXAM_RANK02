/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rostring.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ymenyoub <ymenyoub@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/03 18:14:57 by ymenyoub          #+#    #+#             */
/*   Updated: 2023/05/21 00:58:55 by ymenyoub         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <unistd.h>

// int main(int ac, char **av)
// {
// 	int i;
// 	int start;
// 	int end;
// 	int flag;

// 	if (ac > 1)
// 	{
// 		i = 0;
// 		while (av[1][i] == ' ' || av[1][i] == '\t')
// 			i++;
// 		start = i;
// 		while (av[1][i] != '\0' && av[1][i] != ' ' && av[1][i] != '\t')
// 			i++;
// 		end = i;
// 		while (av[1][i] == ' ' || av[1][i] == '\t')
// 			i++;
// 		while (av[1][i])
// 		{
// 			while ((av[1][i] == ' ' && av[1][i + 1] == ' ') || (av[1][i] == '\t' && av[1][i + 1] == '\t'))
// 				i++;
// 			if (av[1][i] == ' ' || av[1][i] == '\t')
// 				flag = 1;
// 			write(1, &av[1][i], 1);
// 			i++;
// 		}
// 		if (flag)
// 			write(1, " ", 1);
		
// 		write(1," ",1);
// 		while (start < end)
// 		{
// 			write(1, &av[1][start], 1);
// 			start++;
// 		}
// 	}
// 	write(1, "\n", 1);	
// }
