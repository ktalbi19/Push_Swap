/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ktalbi <ktalbi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/08 15:18:51 by ktalbi            #+#    #+#             */
/*   Updated: 2021/11/12 17:48:21 by ktalbi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_main_reduc(t_game *game)
{
	while (contains_not_marked(game->stack_a))
	{
		if (game->stack_a->head->marked)
			ra(game);
		else
			pb(game);
	}
}

int	contains_not_marked(t_stack *stack)
{
	t_node	*curr;
	int		i;

	curr = stack->head;
	i = stack->length;
	while (i--)
	{
		if (!curr->marked)
			return (1);
		curr = curr->next;
	}
	return (0);
}

int	main(int argc, const char **argv)
{
	t_game	*game;
	int		max;

	if (ft_verif_value(argc, argv) == 0)
	{
		write(1, "Error\n", 6);
		return (0);
	}
	game = init(argc, argv);
	if (game->stack_a->length == 3)
	{
		ft_len_3(game);
		ft_free_final(game);
		return (0);
	}
	if (ft_len_5(game) == 1)
		return (0);
	max = mark_all(game);
	ft_main_reduc(game);
	while (game->stack_b->length)
		push_back(game);
	order(game);
	ft_free_final(game);
	return (0);
}
