/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   operations.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ktalbi <ktalbi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/10 11:24:02 by ktalbi            #+#    #+#             */
/*   Updated: 2021/11/11 17:15:26 by ktalbi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	op_push(t_stack *a, t_stack *b)
{
	int		value;
	int		marked;
	t_node	*tmp;

	if (a->length == 0)
		return ;
	value = a->head->value;
	marked = a->head->marked;
	tmp = delete(a, value);
	push(b, tmp);
}

void	op_swap(t_stack *stack)
{
	t_node	*first;
	t_node	*second;

	first = delete(stack, stack->head->value);
	second = delete(stack, stack->head->value);
	push(stack, first);
	push(stack, second);
}

void	op_rotate(t_stack *stack)
{
	int		value;
	t_node	*tmp;

	value = stack->head->value;
	tmp = delete(stack, value);
	append(stack, tmp);
}

void	op_reverse_rotate(t_stack *stack)
{
	int		value;
	t_node	*tmp;

	value = last(stack)->value;
	tmp = delete(stack, value);
	push(stack, tmp);
}

void	do_op(t_game *game, void (*op)(t_game *game), int n)
{
	while (n--)
		op(game);
}
