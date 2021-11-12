/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ktalbi <ktalbi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/16 12:11:27 by focampo           #+#    #+#             */
/*   Updated: 2021/11/11 18:45:27 by ktalbi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** Copie n octets depuis la zone memoire src vers la zone memoire dst.
** Renvoie un pointeur sur dst.
*/
#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	char	*source;
	char	*destination;

	source = (char *)src;
	destination = (char *)dst;
	if ((!dst && !src) || !n)
		return (dst);
	while (n--)
		*destination++ = *source++;
	return (dst);
}
