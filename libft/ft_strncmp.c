/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ktalbi <ktalbi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/17 21:25:30 by focampo           #+#    #+#             */
/*   Updated: 2021/11/11 18:46:28 by ktalbi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** Elle ne compare que les n(au plus) premieres caracteres de s1 et s2.
** Renvoie un entier -, + ou null, si s1 est respectivement inferieur,
** superieur ou egale a s2.
** Mettre unsigned int car si n = -5 , il renvoie autre qu'une valeur null
** et il va parcourir a l'inverse mais tout en gardant le similutude s1 et
** s2 jusqu'a trouver la difference.
*/

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t			i;
	unsigned char	*str1;
	unsigned char	*str2;

	i = 0;
	str1 = (unsigned char *)s1;
	str2 = (unsigned char *)s2;
	while (n > 0 && str1[i] && str2[i] && str1[i] == str2[i])
	{
		i++;
		n--;
	}
	if (n == 0)
		return (0);
	else
		return (str1[i] - str2[i]);
}
/*
**#include <stdio.h>
**#include <string.h>
**
**int 	main()
**{
**	char str1[] = "Bonjour j'appelle nando";
**	char str2[] = "Bonjour j'appelle nlice";
**	printf("%d\n", ft_strncmp(str1, str2, 19));
**	printf("%d\n", strncmp(str1, str2, 19));
**	return 0;
**}
*/
