/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ktalbi <ktalbi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/16 12:11:19 by focampo           #+#    #+#             */
/*   Updated: 2021/11/11 18:45:22 by ktalbi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** Compare les n premiers octets(chacun interprete comme unsigned char) des
** zones memoires s1 et s2.
** Renvoie un entier negatif, null ou positif si les n premiers octets de s1
** sont respectivement inferieurs, egaux ou superieurs aux n premiers octes
** de s2
*/

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	unsigned char	*str1;
	unsigned char	*str2;

	str1 = (unsigned char *)s1;
	str2 = (unsigned char *)s2;
	while (n--)
	{
		if (*str1 != *str2)
			return (*str1 - *str2);
		str1++;
		str2++;
	}
	return (0);
}
/*
**#include <stdio.h>
**#include <string.h>
**
**int main()
**{
**	char str1[] = "Ceci est mon hiistoire";
**	char str2[] = "Ceci est mon histoire";
**	printf("%d\n", ft_memcmp(str1, str2, (int)20));
**	printf("%d\n", memcmp(str1, str2, (int)20));
**	return 0;
**}
*/
