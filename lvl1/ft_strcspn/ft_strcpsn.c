/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpsn.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ymenyoub <ymenyoub@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/26 17:02:05 by ymenyoub          #+#    #+#             */
/*   Updated: 2023/02/26 17:02:10 by ymenyoub         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

size_t	ft_strcspn(const char *s, const char *reject)
{
    int i = 0;
    int j;

    while (s[i])
    {
        j = 0;
        while (reject[j])
        {
            if (s[i] == reject[j])
                return(i);
            j++;
        }
        i++;
    }
    return (i);
}