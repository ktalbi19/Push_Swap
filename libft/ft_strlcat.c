/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ktalbi <ktalbi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/17 01:11:04 by focampo           #+#    #+#             */
/*   Updated: 2021/11/11 18:46:11 by ktalbi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** Concatene les caracteres de src dans dst tant qu'il y a des places pour
** copier dans la chaine dst.
** Renvoie la longueur de la chaine qu'ils ont cree. Si tout src a ete
** concatene dans dst, alors la valeur de retour sera inferieur a size.
** Si dst ne termine pas par '\0', alors strlcat considere que dst est la
** size et retournera la size + la longueur de src.
** Size est la taille de la chaine de dst + le '\0'. strlcat n'examine que
** la taille de la chaine dst.
*/

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	i;
	size_t	j;
	size_t	lg;

	lg = ft_strlen(dst);
	if (size > 0 && size > lg)
	{
		i = lg;
		j = 0;
		while (src[j] && i < size - 1)
		{
			dst[i] = src[j];
			i++;
			j++;
		}
		dst[i] = '\0';
		return (lg + ft_strlen(src));
	}
	return (size + ft_strlen(src));
}
/*
**#include <stdio.h>
**
**int 	main()
**{
**	char dst[40] = "hgjgsdjfvdgsvfjdvsdvgcvdzgvfdv hello";
**	char src[] = "Bonjour j'appelle nando";
**	printf("%d\n", ft_strlcat(dst, src, 20));
**	return 0;
**}
*/
