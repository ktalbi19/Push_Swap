/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ktalbi <ktalbi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/16 12:12:10 by focampo           #+#    #+#             */
/*   Updated: 2021/11/11 18:46:46 by ktalbi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
**  Convertit la lettre 'c' en minuscule si c'est possible -> unsigned char
*/

#include "libft.h"

int	ft_tolower(int c)
{
	if (c >= 'A' && c <= 'Z')
		return (c + 32);
	else
		return (c);
}
