/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ymenyoub <ymenyoub@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/04 21:29:05 by ymenyoub          #+#    #+#             */
/*   Updated: 2023/03/20 13:25:51 by ymenyoub         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

char *ft_strncpy(char * dst, const char * src, int n)
{
	int  i = 0;
	while (i < n && src[i])
	{
		dst[i] = src[i];
		i++;
	}
	dst[i] = '\0';
	return (dst);
}

char    **ft_split(char *str)
{
	int i = 0;
	int j = 0;
	int k = 0;
	int wc = 0;
	char **out;
    if (!str)
	{
		out = malloc(sizeof(char *) * 1);
		out[0]= NULL;
		return out; 
	}	
	while (str[i])
	{
		while (str[i] && (str[i] == ' ' || str[i] == '\t' || str[i] == '\n'))
			i++;
		if (str[i])
			wc++;
		while (str[i] && (str[i] != ' ' && str[i] != '\t' && str[i] != '\n'))
			i++;
	}
	out = ((**malloc)(sizeof(char *) * (wc + 1)));
	if (!out)
		return (NULL);
	i = 0;
	while (str[i])
	{
		while (str[i] && (str[i] == ' ' || str[i] == '\t' || str[i] == '\n'))
			i++;
		j = i;
		while (str[i] && (str[i] != '\t' && str[i] != ' ' && str[i] != '\n'))
			i++;
		if (j < i)
		{
			out[k] = malloc(sizeof(char) * ((i - j) + 1));
			ft_strncpy(out[k++], &str[j], i - j);
		}
	}
	out[k] = NULL;
	return (out);
}

int main ()
{
    char **s = ft_split("test hh hhjjj");
    int i =0;
    while (s[i])
    {
        printf("%s\n", s[i]);
        i++;
    }
}


if (!str)
{
	out = malloc(sizeof(char *) * 1);
	out[0] = null;
	return (out);
}