/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa_uns.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ktalbi <ktalbi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/31 19:02:38 by focampo           #+#    #+#             */
/*   Updated: 2021/11/11 18:44:31 by ktalbi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_lg_uns(unsigned int n)
{
	int	len;

	if (n == 0)
		return (len = 1);
	len = 0;
	while (n > 0)
	{
		n = n / 10;
		len++;
	}
	return (len);
}

char	*ft_itoa_uns(unsigned int n)
{
	char	*str;
	size_t	i;

	i = ft_lg_uns(n);
	str = malloc(sizeof(char) * i + 1);
	if (!(str))
		return (NULL);
	str[i] = '\0';
	i--;
	if (n == 0)
		str[0] = '0';
	while (n > 0)
	{
		str[i] = (n % 10) + 48;
		n = n / 10;
		i--;
	}
	return (str);
}
