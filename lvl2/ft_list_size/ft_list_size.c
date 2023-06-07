/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_size.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ymenyoub <ymenyoub@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/12 21:34:37 by ymenyoub          #+#    #+#             */
/*   Updated: 2023/03/17 23:07:05 by ymenyoub         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

typedef struct    s_list
{
    struct s_list *next;
    void          *data;
}   t_list;

int	ft_list_size(t_list *begin_list)
{
    int size = 0;
    while (begin_list)
    {
        size++;
        begin_list = begin_list->next;
    }
    return (size);
}

#include <stdio.h>
#include <stdlib.h>
int main()
{
    t_list *node1 = malloc(sizeof(t_list));
    t_list *node2 = malloc(sizeof(t_list));
    t_list *node3 = malloc(sizeof(t_list));

    node1->data = "Hello";
    node1->next = node2;
    node2->data = "World";
    node2->next = node3;
    node3->data = "!";
    node3->next = NULL;
    int size = ft_list_size(node1);
    printf("The linked list has %d nodes.\n", size);
}