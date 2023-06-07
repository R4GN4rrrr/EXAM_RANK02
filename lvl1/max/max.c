/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   max.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ymenyoub <ymenyoub@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/04 21:16:01 by ymenyoub          #+#    #+#             */
/*   Updated: 2023/03/15 00:37:30 by ymenyoub         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		max(int* tab, unsigned int len)
{
    int i = 0;
    int max = tab[i];

    if (len <= 0)
        return (0);
    while (i < len)
    {
        if (tab[i] > max)
        {
            max = tab[i];
        }
        i++;
    }
    return (max);
}