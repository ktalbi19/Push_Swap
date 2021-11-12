/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   linked_list_2.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ktalbi <ktalbi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/10 18:11:09 by ktalbi            #+#    #+#             */
/*   Updated: 2021/11/11 17:06:22 by ktalbi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	destroy(t_stack *stack)
{
	t_node	*node;

	while (stack->length != 0)
	{
		node = delete(stack, stack->head->value);
		free(node);
	}
}

int	max(t_stack *stack)
{
	t_node	*curr;
	int		max;

	curr = stack->head;
	max = -2147483648;
	if (curr->value > max)
		max = curr->value;
	curr = curr->next;
	while (curr != stack->head)
	{
		if (curr->value > max)
			max = curr->value;
		curr = curr->next;
	}
	return (max);
}

int	min(t_stack *stack)
{
	t_node	*curr;
	int		min;

	curr = stack->head;
	min = +2147483647;
	if (curr->value < min)
		min = curr->value;
	curr = curr->next;
	while (curr != stack->head)
	{
		if (curr->value < min)
			min = curr->value;
		curr = curr->next;
	}
	return (min);
}

int	find_index(t_stack *stack, int value)
{
	t_node	*curr;
	int		index;

	curr = stack->head;
	index = 0;
	while (curr->next != stack->head)
	{
		if (curr->value == value)
			return (index);
		curr = curr->next;
		index++;
	}
	return (index);
}
