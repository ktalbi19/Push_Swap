/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   verif_value_suite.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ktalbi <ktalbi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/10 15:43:48 by ktalbi            #+#    #+#             */
/*   Updated: 2021/11/10 15:44:04 by ktalbi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_free_split(char **split)
{
	int	i;

	i = 0;
	while (split[i])
	{
		free(split[i]);
		i++;
	}
	free(split);
}

int	ft_strcmp(const char *s1, const char *s2)
{
	int	i;

	i = 0;
	while (s1[i] || s2[i])
	{
		if (s1[i] != s2[i])
			return (s1[i] - s2[i]);
		i++;
	}
	return (s1[i] - s2[i]);
}

int	ft_strlen_ptr(char **str)
{
	int	i;
	int	len;

	i = 0;
	len = 0;
	while (str[i])
	{
		i++;
		len++;
	}
	return (len);
}

int	ft_is_nbr(char *str)
{
	int	i;

	i = 0;
	if (str[i] == '-')
		i++;
	while (str[i])
	{
		if (str[i] < '0' || str[i] > '9')
			return (0);
		i++;
	}
	return (1);
}

int	ft_is_int(char *str)
{
	long	nbr;
	int		i;
	int		minus;

	minus = 0;
	i = 0;
	nbr = 0;
	if (str[i] == '-')
	{
		minus = 1;
		i++;
	}
	if (ft_strlen(str) > 11 || ft_strlen(str) < 0)
		return (0);
	while (ft_isdigit(str[i]))
	{
		nbr *= 10;
		nbr += str[i] - '0';
		i++;
	}
	if (minus == 1)
		nbr *= -1;
	if (str[i] != '\0' || nbr > INT_MAX || nbr < INT_MIN)
		return (0);
	return (1);
}
