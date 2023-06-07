/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_int_tab.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ymenyoub <ymenyoub@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/03 21:07:44 by ymenyoub          #+#    #+#             */
/*   Updated: 2023/05/27 23:10:17 by ymenyoub         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void sort_int_tab(int *tab, unsigned int size)
{
	int i = 0;
	int j;
	int tmp;

	if (size == 0)
		return ;
	while (i < size)
	{
		j = i + 1;
		while (j < size)
		{
			if ( tab[i] > tab[j])
			{
				tmp = tab[i];
				tab[i] = tab[j];
				tab[j] = tmp;
				i = 0;
			}
			j++;
		}
		i++;
	}	
}

int main()
{
	int tab[] = {2 , 1 , 3};
	sort_int_tab(tab, 5);
	for (int i = 0; i < 5; i++)
	{
		printf("%d\n", tab[i]);
	}
}