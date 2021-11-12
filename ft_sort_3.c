/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_3.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ktalbi <ktalbi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/10 16:17:36 by ktalbi            #+#    #+#             */
/*   Updated: 2021/11/12 14:52:55 by ktalbi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_len_3(t_game *game)
{
	int	nbr1;
	int	nbr2;
	int	nbr3;

	nbr1 = game->stack_a->head->value;
	nbr2 = game->stack_a->head->next->value;
	nbr3 = game->stack_a->head->next->next->value;
	if (nbr1 > nbr2 && nbr2 < nbr3 && nbr3 > nbr1)
		do_op(game, &sa, 1);
	if (nbr1 > nbr2 && nbr2 < nbr3 && nbr3 < nbr1)
		do_op(game, &ra, 1);
	if (nbr1 < nbr2 && nbr2 > nbr3 && nbr3 < nbr1)
		do_op(game, &rra, 1);
	if (nbr1 < nbr2 && nbr2 > nbr3 && nbr3 > nbr1)
	{
		do_op(game, &rra, 1);
		do_op(game, &sa, 1);
	}
	if (nbr1 > nbr2 && nbr2 > nbr3)
	{
		do_op(game, &ra, 1);
		do_op(game, &sa, 1);
	}
}
