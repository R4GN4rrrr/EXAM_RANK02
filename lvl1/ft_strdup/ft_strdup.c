/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ymenyoub <ymenyoub@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/04 16:48:51 by ymenyoub          #+#    #+#             */
/*   Updated: 2023/03/04 16:51:22 by ymenyoub         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int len(char *str)
{
    int i = 0;
    while(str[i])
        i++;
    return (i);
}

char    *ft_strcpy(char *s1, char *s2)
{
	int i =0;
	while (s2[i])
	{
		s1[i] = s2[i];
		i++;
	}
	s1[i] = '\0';
	return (s1);
}

char    *ft_strdup(char *src)
{
    char *dest;

    dest = malloc(sizeof(char) * (len(src) + 1));
    ft_strcpy(dest, src);
    return (dest);
}