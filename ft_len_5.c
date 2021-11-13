/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_len_5.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ktalbi <ktalbi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/12 17:47:43 by ktalbi            #+#    #+#             */
/*   Updated: 2021/11/13 13:16:10 by ktalbi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_sort_len_5_1(t_game *game)
{
	do_op(game, &pb, 2);
	do_op(game, &ra, 1);
	do_op(game, &sa, 1);
	do_op(game, &rb, 1);
	do_op(game, &pa, 2);
	do_op(game, &ra, 1);
	ft_free_final(game);
}

void	ft_sort_len_5_2(t_game *game)
{
	do_op(game, &pb, 2);
	do_op(game, &ra, 1);
	do_op(game, &sa, 1);
	do_op(game, &pa, 1);
	do_op(game, &ra, 1);
	do_op(game, &pa, 1);
	do_op(game, &ra, 1);
	ft_free_final(game);
}

int	ft_len_5(t_game *game)
{
	int	nbr1;
	int	nbr2;
	int	nbr3;
	int	nbr4;
	int	nbr5;

	nbr1 = game->stack_a->head->value;
	nbr2 = game->stack_a->head->next->value;
	nbr3 = game->stack_a->head->next->next->value;
	nbr4 = game->stack_a->head->next->next->next->value;
	nbr5 = game->stack_a->head->next->next->next->next->value;
	if (game->stack_a->length == 5 && nbr1 < nbr2 && nbr2 > nbr3 && nbr3 > nbr4
		&& nbr4 > nbr5 && nbr5 > nbr1)
	{
		ft_sort_len_5_1(game);
		return (1);
	}
	if (game->stack_a->length == 5 && nbr1 > nbr2 && nbr2 > nbr3
		&& nbr3 > nbr4 && nbr4 > nbr5)
	{
		ft_sort_len_5_2(game);
		return (1);
	}
	return (0);
}
