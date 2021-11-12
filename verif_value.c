/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   verif_value.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ktalbi <ktalbi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/10 15:46:57 by ktalbi            #+#    #+#             */
/*   Updated: 2021/11/11 18:48:01 by ktalbi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	ft_verif_value(int argc, const char **argv)
{
	if (argc == 2)
	{
		if (verif_2_argc(argv) == 0)
			return (0);
		if (verif_2_double(argv) == 0)
			return (0);
	}
	else
	{
		if (verif_more_argc(argv) == 0)
			return (0);
		if (verif_more_double(argc, argv) == 0)
			return (0);
	}
	return (1);
}
