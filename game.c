/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   game.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ktalbi <ktalbi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/08 15:22:42 by ktalbi            #+#    #+#             */
/*   Updated: 2021/11/12 17:31:14 by ktalbi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	insert(t_stack *stack, const char *c)
{
	char	**words;
	int		i;
	t_node	*node;

	words = ft_split(c, ' ');
	i = 0;
	while (words[i])
	{
		node = (t_node *) malloc(sizeof(t_node));
		if (node == NULL)
			exit(1);
		node->value = ft_atoi(words[i]);
		node->marked = 0;
		append(stack, node);
		free(words[i]);
		i++;
	}
	free(words);
}

void	ft_fill_stack(int argc, const char **argv,
	t_stack *stack_a, t_stack *stack_b)
{
	int	i;

	if (argc < 2)
	{
		free(stack_b);
		free(stack_a);
		exit(1);
	}
	else if (argc == 2)
		insert(stack_a, argv[1]);
	else
	{
		i = 1;
		while (i < argc)
		{
			insert(stack_a, argv[i]);
			i++;
		}
	}
}

t_game	*init(int argc, const char **argv)
{
	t_stack	*stack_a;
	t_stack	*stack_b;
	t_game	*game;

	stack_a = (t_stack *) malloc(sizeof(t_stack));
	stack_b = (t_stack *) malloc(sizeof(t_stack));
	if (stack_a == NULL || stack_b == NULL)
		exit(1);
	stack_a->length = 0;
	stack_b->length = 0;
	ft_fill_stack(argc, argv, stack_a, stack_b);
	game = (t_game *) malloc(sizeof(t_game));
	if (game == NULL)
		exit(1);
	game->stack_a = stack_a;
	game->stack_b = stack_b;
	return (game);
}

int	mark(t_node *start)
{
	int		value;
	int		n;
	t_node	*curr;

	value = start->value;
	n = 0;
	curr = start->next;
	start->marked = 1;
	while (curr != start)
	{
		if (curr->value > value)
		{
			n++;
			value = curr->value;
			curr->marked = 1;
		}
		else
			curr->marked = 0;
		curr = curr->next;
	}
	return (n);
}

int	mark_all(t_game *game)
{
	t_node	*curr;
	t_node	*start;
	int		i;
	int		max;
	int		n;

	curr = game->stack_a->head;
	start = NULL;
	i = game->stack_a->length;
	max = -1;
	while (i--)
	{
		n = mark(curr);
		if (n > max)
		{
			start = curr;
			max = n;
		}
		curr = curr->next;
	}
	return (mark(start));
}
