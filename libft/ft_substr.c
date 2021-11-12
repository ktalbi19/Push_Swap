/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ktalbi <ktalbi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/18 22:58:02 by focampo           #+#    #+#             */
/*   Updated: 2021/11/11 18:46:43 by ktalbi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** Alloue(avec mallo(3)) et retourne une chaine de caracteres issue de la
** chaine 's'. Cette nouvelle chaine commence a l'index 'start' et a pour
** taille maximale 'len'.
** #1. La chaine de laquelle extraire la nouvelle chaine
** #2. L'index de debut de la nouvelle chaine dans la chaine 's'
** #3. La taille maximale de la nouvelle chaine
** Retourne la nouvelle chaine de caractere.NULL si l'allocation echoue.
*/

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*dst;
	int		i;
	size_t	s_len;

	i = 0;
	if (!s)
		return (0);
	dst = malloc(sizeof(char) * len + 1);
	if (!(dst))
		return (NULL);
	s_len = ft_strlen(s);
	if (s_len < start)
	{
		dst[i] = '\0';
		return (dst);
	}
	while (len > 0 && s[start] != '\0')
	{
		dst[i] = s[start];
		i++;
		start++;
		len--;
	}
	dst[i] = '\0';
	return (dst);
}
/*
**#include <stdio.h>
**
**int		main()
**{
**	char	str[] = "Ceci est mon histoire!!!";
**	printf("%s\n", ft_substr(str, 7, 16));
**	return 0;
**}
*/
