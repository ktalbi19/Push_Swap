/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa_pointer.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ktalbi <ktalbi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/31 19:02:26 by focampo           #+#    #+#             */
/*   Updated: 2021/11/11 18:44:11 by ktalbi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_itoa_pointer(unsigned long int nb, int base)
{
	char				*str;
	unsigned long int	tmp;
	int					len;

	tmp = nb;
	len = 1;
	while (tmp / base > 0)
	{
		tmp = tmp / base;
		len++;
	}
	str = malloc(sizeof(char) * len + 1);
	if (!(str))
		return (NULL);
	str[len] = '\0';
	while (len--)
	{
		if (nb % base < 10)
			str[len] = nb % base + '0';
		else
			str[len] = nb % base + 'a' - 10;
		nb = nb / base;
	}
	return (str);
}
