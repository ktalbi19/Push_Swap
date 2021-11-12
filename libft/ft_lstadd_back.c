/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ktalbi <ktalbi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/22 11:29:39 by focampo           #+#    #+#             */
/*   Updated: 2021/11/11 18:44:39 by ktalbi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_back(t_list **alst, t_list *new)
{
	t_list	*fin_elem;

	if (!alst)
		return ;
	if (!*alst)
	{
		*alst = new;
		return ;
	}
	else
	{
		fin_elem = *alst;
		while (fin_elem->next)
			fin_elem = fin_elem->next;
		fin_elem->next = new;
	}
}
