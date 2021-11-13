/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   linked_list.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ktalbi <ktalbi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/09 18:08:13 by ktalbi            #+#    #+#             */
/*   Updated: 2021/11/13 13:16:38 by ktalbi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	push(t_stack *stack, t_node *new)
{
	t_node	*last_node;

	if (stack->length == 0)
	{
		stack->head = new;
		stack->head->next = stack->head;
	}
	else
	{
		last_node = last(stack);
		new->next = stack->head;
		stack->head = new;
		last_node->next = stack->head;
	}
	stack->length++;
}

void	append(t_stack *stack, t_node *new)
{
	t_node	*last_node;

	if (stack->length == 0)
	{
		push(stack, new);
		return ;
	}
	new->next = stack->head;
	last_node = last(stack);
	last_node->next = new;
	stack->length++;
}

t_node	*delete_1(t_node *tmp, t_stack *stack)
{
	t_node	*last_node;

	last_node = last(stack);
	if (tmp->next == tmp)
	{
		stack->head = NULL;
		tmp->next = NULL;
		stack->length--;
		return (tmp);
	}
	else
	{
		last_node->next = tmp->next;
		stack->head = tmp->next;
		tmp->next = NULL;
		stack->length--;
		return (tmp);
	}
}

t_node	*delete(t_stack *stack, int value)
{
	t_node	*tmp;
	t_node	*prev;

	tmp = stack->head;
	prev = stack->head;
	if (tmp->value == value)
		delete_1(tmp, stack);
	else
	{
		while (tmp->value != value)
		{
			prev = tmp;
			tmp = tmp->next;
		}
		prev->next = tmp->next;
		tmp->next = NULL;
		stack->length--;
	}
	return (tmp);
}

t_node	*last(t_stack *stack)
{
	t_node	*curr;

	curr = stack->head;
	while (curr->next != stack->head)
		curr = curr->next;
	return (curr);
}

// void print_list(t_stack *stack) {
//     if (stack->length == 0) {
//         printf("Empty list\n");
//         return;
//     }
//     printf("[%d] ", stack->length);
//     t_node *curr = stack->head;
//     if (curr == NULL) {
//         return;
//     }
//     printf("%d(%d)", curr->value, curr->marked);
//     curr = curr->next;
//     while (curr != stack->head) {
//         printf(" -> %d(%d)", curr->value, curr->marked);
//         curr = curr->next;
//     }
//     printf("\n");
// }