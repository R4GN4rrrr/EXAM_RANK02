/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ymenyoub <ymenyoub@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/01 22:45:15 by ymenyoub          #+#    #+#             */
/*   Updated: 2023/02/01 23:02:57 by ymenyoub         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

char    *ft_strcpy(char *s1, char *s2)
{
    int i =0;

    while (s1[i] != '\0')
    {
        s2[i]= s1[i];
        i++;
    }
    s2[i] = '\0';
    return (s2);
    
}
int main()
{
    char   x[] = "hello";
    char    y[5];
    printf("%s\n", ft_strcpy(x, y));
}