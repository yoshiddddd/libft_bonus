/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yoshidakazushi <yoshidakazushi@student.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/05 10:38:50 by yoshidakazu       #+#    #+#             */
/*   Updated: 2023/07/05 11:17:59 by yoshidakazu      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void ft_lstclear(t_lst **lst, void (*del)(void*))
{
    t_list   *next_lst;
    if(!*lst || !del)
        return ;
    while(*lst)
    {
        next_lst = *lst->next;
        ft_lstdelone(*lst ,del);
        *lst = next_lst;
    }
}
