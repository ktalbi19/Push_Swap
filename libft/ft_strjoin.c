/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ktalbi <ktalbi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/18 22:57:33 by focampo           #+#    #+#             */
/*   Updated: 2021/11/11 18:46:07 by ktalbi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** Alloue(avec malloc(3)) et retourne une nouvelle chaine, resultat de la
** cancatenationse s1 et s2.
** #1. La chaine de caracteres prefixe
** #2. La chaine de caracteres suffixe
** Retourne la nouvelle chaine de caracteres. NULL si l'allocation echoue.
*/

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*str;
	int		i;
	int		j;

	i = 0;
	j = 0;
	if (!s1 || !s2)
		return (NULL);
	str = malloc(sizeof(char) * ft_strlen(s1) + ft_strlen(s2) + 1);
	if (!(str))
		return (NULL);
	while (s1[i])
	{
		str[i] = s1[i];
		i++;
	}
	while (s2[j])
	{
		str[i] = s2[j];
		i++;
		j++;
	}
	str[i] = '\0';
	return (str);
}
/*
**#include <stdio.h>
**int		main()
**{
**	char s1[] = "Ceci est mon";
**	char s2[] = "histoire !!!";
**	printf("%s\n", ft_strjoin(s1, 0));
**	return 0;
**}
*/
