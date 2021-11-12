/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ktalbi <ktalbi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/13 19:32:23 by focampo           #+#    #+#             */
/*   Updated: 2021/11/11 18:46:24 by ktalbi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** Applique la fonction 'f' a chaque caractere de la chaine de caractere
** passee en argument pour creer une nouvelle chaine de caractere resultant
** des applications successives de 'f'
*/

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	unsigned int	i;
	char			*str;

	i = 0;
	if (!s || !f)
		return (NULL);
	str = malloc(sizeof(char) + (ft_strlen(s) + 1));
	if (!(str))
		return (NULL);
	while (s[i])
	{
		str[i] = f(i, s[i]);
		i++;
	}
	str[i] = '\0';
	return (str);
}
