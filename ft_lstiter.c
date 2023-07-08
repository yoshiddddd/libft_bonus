/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstiter.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yoshidakazushi <yoshidakazushi@student.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/05 11:14:28 by yoshidakazu       #+#    #+#             */
/*   Updated: 2023/07/05 11:22:50 by yoshidakazu      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void ft_lstiter(t_list *lst, void (*f)(void *))
{
    if(!lst || !f)
    return ;
    while(lst)
    {
        (*f)(lst->content);
        lst = lst->next;
    }
}
