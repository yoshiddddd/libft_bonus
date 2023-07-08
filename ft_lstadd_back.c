/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yoshidakazushi <yoshidakazushi@student.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/04 23:26:06 by yoshidakazu       #+#    #+#             */
/*   Updated: 2023/07/05 00:45:22 by yoshidakazu      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void ft_lstadd_back(t_list **lst, t_list *new)
{
    t_list *tmp;
    if(!*lst)
    {
    *lst = new;
    return ;        
    }
    tmp = ft_lstlast(*lst);
    tmp->next = new;
   
}