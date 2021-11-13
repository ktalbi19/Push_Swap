/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   linked_list.h                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ktalbi <ktalbi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/08 15:49:15 by ktalbi            #+#    #+#             */
/*   Updated: 2021/11/12 15:37:38 by ktalbi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LINKED_LIST_H
# define LINKED_LIST_H

# include <stdio.h>
# include <stdlib.h>
# include "push_swap.h"

typedef struct node
{
	int			value;
	int			marked;
	struct node	*next;
}				t_node;

typedef struct s_stack
{
	int		length;
	t_node	*head;
}				t_stack;

t_node	*last(t_stack *stack);
void	append(t_stack *stack, t_node *new);
void	push(t_stack *stack, t_node *new);
t_node	*delete_1(t_node *tmp, t_stack *stack);
t_node	*delete(t_stack *stack, int value);
void	destroy(t_stack *stack);
int		max(t_stack *stack);
int		min(t_stack *stack);
int		find_index(t_stack *stack, int value);
void	print_list(t_stack *stack);

#endif