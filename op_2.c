/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   op_2.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ktalbi <ktalbi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/10 17:40:30 by ktalbi            #+#    #+#             */
/*   Updated: 2021/11/12 18:40:06 by ktalbi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	sa(t_game *game)
{
	op_swap(game->stack_a);
	if (write(1, "sa\n", 3) < 0)
		exit(1);
}

void	sb(t_game *game)
{
	op_swap(game->stack_b);
	if (write(1, "sb\n", 3) < 0)
		exit(1);
}

void	ss(t_game *game)
{
	op_swap(game->stack_a);
	op_swap(game->stack_b);
	if (write(1, "ss\n", 3) < 0)
		exit(1);
}

void	pa(t_game *game)
{
	op_push(game->stack_b, game->stack_a);
	if (write(1, "pa\n", 3) < 0)
		exit(1);
}

void	pb(t_game *game)
{
	op_push(game->stack_a, game->stack_b);
	if (write(1, "pb\n", 3) < 0)
		exit(1);
}
