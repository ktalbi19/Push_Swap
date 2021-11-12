/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ktalbi <ktalbi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/16 12:11:42 by focampo           #+#    #+#             */
/*   Updated: 2021/11/11 18:45:37 by ktalbi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** Remplit les n premiers n(len) octet de la zone memoire pointee par b
** avec l'octet c. Renvoie un pointeur sur la zone memoire b
*/

#include "libft.h"

void	*ft_memset(void *b, int c, size_t len)
{
	unsigned char	*string;

	string = (unsigned char *)b;
	while (len--)
		*(string++) = (unsigned char)c;
	return (b);
}
/*
**#include <stdio.h>
**#include <string.h>
**
**int main()
**{
**	char str[] = "Hello to you!!!";
**	printf("%s\n", ft_memset(str, '+', 5));
**	return 0;
**}
*/
