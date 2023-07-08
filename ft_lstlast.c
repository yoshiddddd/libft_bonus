/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstlast.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yoshidakazushi <yoshidakazushi@student.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/04 23:21:45 by yoshidakazu       #+#    #+#             */
/*   Updated: 2023/07/05 13:51:49 by yoshidakazu      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list *ft_lstlast(t_list *lst)
{
    if(!lst)
    return NULL;
    while(lst->next!=NULL)
        lst=lst->next;
    return lst;
}
