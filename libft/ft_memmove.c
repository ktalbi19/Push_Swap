/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ktalbi <ktalbi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/16 12:11:35 by focampo           #+#    #+#             */
/*   Updated: 2021/11/11 18:45:33 by ktalbi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** Copie n octets depuis la zone memoire src vers la zone memoire dst
** Les 2 zones peuvent se chevauche: la copie se passe comme si les octets
** de src etaient d'abord copies dans une zone temporaire qui ne chevauche
** ni src ni dst, et les octets sont ensuite copies de la zone temporaire
** vers dst. Renvoie un pointeur sur dst
*/
#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t n)
{
	unsigned char	*tmp;
	unsigned char	*dest;

	tmp = (unsigned char *)src;
	dest = (unsigned char *)dst;
	if ((!dst && !src) || n <= 0)
		return (dst);
	if (tmp < dest)
	{
		tmp = tmp + (n - 1);
		dest = dest + (n - 1);
		while (n-- > 0)
			*dest-- = *tmp--;
		return (dst);
	}
	while (n-- > 0)
		*dest++ = *tmp++;
	return (dst);
}
/*
**#include <string.h>
**#include <stdio.h>
**int	main()
**{
**	unsigned char src[] = "Ceci est -- Mon -- Histoire!!";
**	unsigned char dst[];
**	printf("%s\n", ft_memmove(dst, src, (int)7));
**	printf("%s\n", memmove(dst, src, (int)7));
**	return 0;
**}
*/
