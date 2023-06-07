/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ymenyoub <ymenyoub@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/22 19:24:17 by ymenyoub          #+#    #+#             */
/*   Updated: 2023/02/27 10:57:44 by ymenyoub         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */



#include <stdlib.h>
#include <unistd.h>
#include <stdio.h>


int is_space(char c)
{
    if (c == ' ' || c == '\t' || c == '\n')
        return (1);
    return (0);
    
}
int	cwords(char const *str)
{
	unsigned int	i;
	int				count;

	i = 0;
	count = 0;
	while (str[i])
	{
		if (is_space(str[i]))
			i++;
		else
		{
			count++;
			while (str[i] && !is_space(str[i]))
				i++;
		}
	}
	return (count);
}

 char	*ft_strings(const char *s, int n)
{
	char	*str;
	int		i;

	str = malloc(sizeof(char) * (n + 1));
	if (!str)
		return (NULL);
	i = 0;
	while (s[i] && i < n)
	{
		str[i] = s[i];
		i++;
	}
	str[n] = '\0';
	return (str);
}
char    **ft_split(char *str)
{
	int		i;
	int		j;
	int		n;
	char	**tab;

	i = 0;
	n = 0;
	if (!str)
		return (0);
	tab = malloc(sizeof(char *) * (cwords(str) + 1));
	if (!tab)
		return (NULL);
	while (str[i])
	{
		while (is_space(str[i]))
			i++;
		j = i;
		while (str[i] && !is_space(str[i]))
			i++;
		if (i > j)
			tab[n++] = ft_strings(str + j, i - j);
	}
	tab[n] = 0;
	return (tab);
}


// int main ()
// {
//     char **s = ft_split("test hhh tssts");
//     int i =0;
//     while (s[i])
//     {
//         printf("%s\n", s[i]);
//         i++;
//     }
    
// }
