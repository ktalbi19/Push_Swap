/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ktalbi <ktalbi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/11 18:43:10 by ktalbi            #+#    #+#             */
/*   Updated: 2021/11/11 18:43:17 by ktalbi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** Convertit le debut de la chaine par str en entier de type int.
** Dans str il doit y avoir de chiffres et pas de lettres.
** Caracteres non-graphiques:
** '\t' = une tabulation
** '\n' = saut de ligne
** '\v' = une tabulation verticale
** '\f' = saut au debut de la page
** '\r' = un retour de chariot
** ' ' = un espace
*/

#include "libft.h"
#include <limits.h>

int	ft_atoi(const char *str)
{
	long int	res;
	long int	sign;

	res = 0;
	sign = 1;
	while (*str == '\t' || *str == '\n' || *str == '\v'
		|| *str == '\f' || *str == '\r' || *str == ' ')
		str++;
	if (*str == '+' || *str == '-')
	{
		if (*str == '-')
			sign *= -1;
		str++;
	}
	while (*str >= '0' && *str <= '9')
	{
		res = (res * 10) + (*str - 48);
		if (res * sign > INT_MAX)
			return (-1);
		if (res * sign < INT_MIN)
			return (0);
		str++;
	}
	return (res * sign);
}
/*
**#include <stdio.h>
**
**int main()
**{
**	printf("%d\n", ft_atoi("+++-45879621357"));
**	return 0;
**}
*/
