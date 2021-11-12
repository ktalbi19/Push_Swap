/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_math.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ktalbi <ktalbi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/11 13:23:54 by ktalbi            #+#    #+#             */
/*   Updated: 2021/11/11 13:29:05 by ktalbi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	ft_max(int a, int b)
{
	if (a >= b)
		return (a);
	else
		return (b);
}

int	ft_min3(int a, int b, int c)
{
	if ((a <= b) && (a <= c))
		return (a);
	else if (b <= c)
		return (b);
	else
		return (c);
}

int	ft_min(int a, int b)
{
	if (a <= b)
		return (a);
	else
		return (b);
}

int	ft_abs(int a)
{
	if (a < 0)
		return (a * -1);
	else
		return (a);
}
