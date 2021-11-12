/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   op_4.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ktalbi <ktalbi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/10 17:48:23 by ktalbi            #+#    #+#             */
/*   Updated: 2021/11/10 17:48:35 by ktalbi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	rrr(t_game *game)
{
	op_reverse_rotate(game->stack_a);
	op_reverse_rotate(game->stack_b);
	if (write(1, "rrr\n", 4) < 0)
		exit(1);
}
