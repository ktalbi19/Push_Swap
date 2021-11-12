/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   order.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ktalbi <ktalbi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/11 14:49:20 by ktalbi            #+#    #+#             */
/*   Updated: 2021/11/11 17:19:39 by ktalbi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	order(t_game *game)
{
	int	min_a;
	int	idx;

	min_a = min(game->stack_a);
	idx = find_index(game->stack_a, min_a);
	if (idx <= game->stack_a->length / 2 )
	{
		while (game->stack_a->head->value != min_a)
			ra(game);
	}
	else
	{
		while (game->stack_a->head->value != min_a)
			rra(game);
	}
}
