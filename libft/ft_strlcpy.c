/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ktalbi <ktalbi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/16 16:52:29 by focampo           #+#    #+#             */
/*   Updated: 2021/11/11 18:46:15 by ktalbi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** Renvoie la longueur de src.Il faut que dst soit plus grand ou egal dstsize.
** Le caracter dstsize correspond au '\0'.C'est pour cela qu'on fait dstsize-1
*/

#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t dstsize)
{
	size_t	nb;
	size_t	i;

	nb = 0;
	if (!src || !dst)
		return (0);
	while (src[nb])
		nb++;
	if (dstsize < 1)
		return (nb);
	i = 0;
	while (src[i] && i < dstsize - 1)
	{
		dst[i] = src[i];
		i++;
	}
	dst[i] = '\0';
	return (nb);
}
/*
**#include <stdio.h>
**#include <string.h>
**int main()
**{
**	char src[] = "Bonjour je m'appelle nando";
**	char dst[] = "dbvbdkvbdshbvkdddfssdds";
**	printf("%d\n", ft_strlcpy(dst, src, 20));
**	printf("%s\n", dst);
**	char dst1[] = "dsvdsvdsbdsbfsbdsvdsvdd";
**	printf("%lu\n", strlcpy(dst1, src, 20));
**	printf("%s\n", dst1);
**	return 0;
**}
*/
