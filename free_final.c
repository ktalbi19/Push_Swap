/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   free_final.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ktalbi <ktalbi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/10 17:09:45 by ktalbi            #+#    #+#             */
/*   Updated: 2021/11/11 15:13:03 by ktalbi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_free_final(t_game *game)
{	
	destroy(game->stack_a);
	destroy(game->stack_b);
	free(game->stack_a);
	free(game->stack_b);
	free(game);
}
