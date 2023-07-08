/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yoshidakazushi <yoshidakazushi@student.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/05 11:23:05 by yoshidakazu       #+#    #+#             */
/*   Updated: 2023/07/05 14:04:49 by yoshidakazu      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list *ft_lstmap(t_list *lst, void *(*f)(void *),void (*del)(void *))
{
    t_list new_lst;
    
    if(!lst)
    return NULL;
    if(!new_lst)
        return NULL;
    while(lst)
    {
        new_lst = ft_lstnew((*f)(lst->content));
        if(!new_lst)
        {
            ft_lstclear()
        }
        lst = lst->next;
        new_lst = new_lst->next;
    }
    
    new_lst->next->content = NULL;
    
    return new_lst;
}
