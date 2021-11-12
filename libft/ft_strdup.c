/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ktalbi <ktalbi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/16 12:11:49 by focampo           #+#    #+#             */
/*   Updated: 2021/11/11 18:46:03 by ktalbi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** Renvoie un pointeur sur une nouvelle chaine de caracteres qui est
** dupliquee depuis s.La memoire occupee par cette nouvelle chaine est
** obtenu en appelant malloc.
** Renvoie un pointeur sur la chaine dupliquee, ou null s'il n'y a pas assez
** de memoire.
** (i + 1) => ici le 1 represente le '\0'
*/

#include "libft.h"

char	*ft_strdup(const char *s)
{
	int		i;
	char	*str;

	i = 0;
	while (s[i])
		i++;
	str = malloc(sizeof(char) * (i + 1));
	if (!(str))
		return (NULL);
	i = 0;
	while (s[i] != '\0')
	{
		str[i] = s[i];
		i++;
	}
	str[i] = '\0';
	return (str);
}
/*
**include <stdio.h>
**
**int		main()
**{
**	char str[50] = "Hello tout Le Monde";
**	printf("%s\n", ft_strdup(str));
**	return 0;
**}
*/
