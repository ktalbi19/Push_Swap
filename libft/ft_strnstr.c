/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ktalbi <ktalbi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/17 01:11:18 by focampo           #+#    #+#             */
/*   Updated: 2021/11/11 18:46:32 by ktalbi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** Cherche la 1er occurrence de la sous-chaine needle(aiguille)au sein de la
** chaine haystack(botte de foin) de longueur(len) limites.
** Les caracteres '\0' de fin ne sont pas compares.
** Renvoie un pointeur sur le debut de la sous-chaine, ou null si celle-ci
** n'est pas trouve.
*/

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	i;
	size_t	j;

	if (!*needle)
		return ((char *)haystack);
	i = 0;
	while (haystack[i] && i < len)
	{
		if (haystack[i] == needle[0])
		{
			j = 0;
			while (haystack[i + j] == needle[j] && i + j < len)
			{
				if (needle[j + 1] == '\0')
					return ((char *)&haystack[i]);
				j++;
			}
		}
		i++;
	}
	return (0);
}
/*
**#include <stdio.h>
**#include <string.h>
**int main()
**{
**	char hay[] = "Bonjour j'appelle nando";
**	char need[] = "'a";
**	printf("%s\n", ft_strnstr(hay, need, 30));
**	printf("%s\n", strnstr(hay, need, 30));
**	return 0;
**}
*/
