/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ktalbi <ktalbi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/17 21:25:13 by focampo           #+#    #+#             */
/*   Updated: 2021/11/11 18:45:59 by ktalbi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** Renvoie un pointeur sur la 1er occurrence du caractere 'c' dans la chaine
** 's', ou null si le caractere n'a pas ete trouve.
*/

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	char	*str;

	str = (char *)s;
	while (*str != c)
	{
		if (*str == '\0')
			return (0);
		str++;
	}
	return (str);
}
/*
**#include <stdio.h>
**#include <string.h>
**
**int		main()
**{
**	char str[] = "Patate";
**	printf("%s\n", ft_strchr(str, 'z'));
**	printf("%s\n", strchr(str, 't'));
**	return 0;
**}
*/
