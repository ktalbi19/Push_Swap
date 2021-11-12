/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ktalbi <ktalbi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/16 12:11:01 by focampo           #+#    #+#             */
/*   Updated: 2021/11/11 18:45:13 by ktalbi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** Copie au plus n octet de la zone memoire src vers la zone memoire dst
** s'arretant des qu'elle rencontre le caractere c
** Renvoie un pointeur sur le caractere immediatement apres c dans la zone dst,
** ou null si c n'a pas ete trouve dans n premiers caracteres de src
*/
#include "libft.h"

void	*ft_memccpy(void *dst, const void *src, int c, size_t n)
{
	unsigned char	*source;
	unsigned char	*destination;
	size_t			i;

	source = (unsigned char *)src;
	destination = (unsigned char *)dst;
	i = 0;
	while (i < n)
	{
		destination[i] = source[i];
		if (source[i] == (unsigned char)c)
			return (dst + i + 1);
		i++;
	}
	return (0);
}
/*
**#include <stdio.h>
**#include <string.h>
**
**int		main()
**{
**	char string[] = "Ceci est mon histoire !!";
**	char dest[50] = "dsdfbfdbfdbndbdsgds";
**	printf("%s\n", ft_memccpy(dest, string, 'n', 20));
**	printf("%s\n", memccpy(dest, string, 'n', 20));
**	return 0;
**}
*/
