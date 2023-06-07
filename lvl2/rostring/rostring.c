/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rostring.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ymenyoub <ymenyoub@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/15 00:48:12 by ymenyoub          #+#    #+#             */
/*   Updated: 2023/03/20 13:36:32 by ymenyoub         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdlib.h>

void ft_putstr(char *str)
{
    int i = 0;
    while (str[i])
    {
        write(1, &str[i], 1);
        i++;
    }
}
char *ft_strncpy(char * dst, const char * src, int n)
{
    int i = 0;

    while (i < n && src[i] != '\0')
    {
        dst[i] = src[i];
        i++;
    }
    dst[i] = '\0';
    return (dst);
}

char **ft_split(char *str)
{
    int i = 0;
    int j = 0;
    int k = 0;
    int wc = 0;
  
    while (str[i])
    {
        while (str[i] && (str[i] == ' ' || str[i] == '\t' || str[i] == '\n'))
            i++;
        if (str[i])
            wc++;
        while (str[i] && (str[i] != ' ' && str[i] != '\n' && str[i] != '\t'))
            i++;
    }
    char **out = ((**malloc)(sizeof(char *) * (wc + 1)));
    if (!out)
        return (NULL);
    i = 0;
    while (str[i])
    {
        while (str[i] && (str[i] == ' ' || str[i] == '\t' || str[i] == '\n'))
            i++;
        j = i;
        while (str[i] && (str[i] != ' ' && str[i] != '\n' && str[i] != '\t'))
            i++;
        if (j < i)
        {
            out[k] = malloc(sizeof(char) * (i - j) + 1);
            ft_strncpy(out[k++], &str[j], i - j);
        }
    }
    out[k] = NULL;
    return (out);
}

int main(int ac, char **av)
{
	int i = 1;
	char **s;

	if (ac > 1 && *av[1])
	{
		s = ft_split(av[1]);
		if (s[0] == NULL)
		{
			write(1, "\n", 1);
			return (0);
		}
		while (s[i] )
		{
			ft_putstr(s[i]);
			write(1, " ", 1);
			i++;
		}
		ft_putstr(s[0]);
	}
	write(1, "\n", 1);
}