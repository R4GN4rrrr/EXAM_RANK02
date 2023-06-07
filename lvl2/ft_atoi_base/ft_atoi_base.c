/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi_base.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ymenyoub <ymenyoub@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/04 17:23:16 by ymenyoub          #+#    #+#             */
/*   Updated: 2023/03/04 18:33:55 by ymenyoub         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_atoi_base(const char *str, int str_base)
{
	int i = 0;
	int sign = 1;
	int result;

	if (str[i] == '-')
	{
		sign = -1;
		i++;
	}
	while (str[i] && ((str[i] >= '0' && str[i] <= '9') || (str[i] >= 'a' && str[i] <= 'f') || (str[i] >= 'A' && str[i] <= 'F')))
	{
		result *= str_base;
		if (str[i] >= '0' && str[i] <= '9') 
			result += str[i] - 48;
		else if (str[i] >= 'a' && str[i] <= 'f')
			result += str[i] - 87;
		else if (str[i] >= 'A' && str[i] <= 'F')
			result += str[i] - 55;
		i++;
	}
	return (sign * result);
}
int main ()
{
	printf("%d\n", ft_atoi_base("1", 16));
}