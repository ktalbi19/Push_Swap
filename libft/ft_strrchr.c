/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ktalbi <ktalbi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/17 21:25:44 by focampo           #+#    #+#             */
/*   Updated: 2021/11/11 18:46:35 by ktalbi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** Renvoie un pointeur sur la derniere occurrence du caractere 'c' dans la
** chaine 's', ou null si le caractere n'a pas ete trouve.
*/

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	char	*str;
	int		i;

	i = 0;
	str = (char *)s;
	while (str[i] != '\0')
		i++;
	while (i >= 0)
	{
		if (str[i] == c)
			return (&str[i]);
		i--;
	}
	return (0);
}
/*
**#include <stdio.h>
**#include <string.h>
**
**int		main()
**{
**	char str[] = "Patate";
**	printf("%s\n", ft_strrchr(str, 'P'));
**	printf("%s\n", strrchr(str, 'P'));
**	return 0;
**}
*/
