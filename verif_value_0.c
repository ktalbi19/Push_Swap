/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   verif_value_0.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ktalbi <ktalbi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/10 15:47:54 by ktalbi            #+#    #+#             */
/*   Updated: 2021/11/10 15:48:11 by ktalbi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	verif_2_double_suite(int i, int j, char **str, int len)
{
	while (i < len)
	{
		j = i + 1;
		while (j < len)
		{
			if (ft_strcmp(str[i], str[j]) == 0)
			{
				ft_free_split(str);
				return (0);
			}
			j++;
		}
		i++;
	}
	return (1);
}

int	verif_2_double(const char **argv)
{
	char	**str;
	int		len;
	int		i;
	int		j;

	str = ft_split(argv[1], ' ');
	if (str == NULL)
		return (0);
	len = ft_strlen_ptr(str);
	i = 0;
	j = 0;
	if (verif_2_double_suite(i, j, str, len) == 0)
		return (0);
	ft_free_split(str);
	return (1);
}

int	verif_2_argc(const char **argv)
{
	char	**str;
	int		i;

	i = 0;
	str = ft_split(argv[1], ' ');
	if (str == NULL)
		return (0);
	while (str[i])
	{
		if (ft_is_nbr(str[i]) == 0)
		{
			ft_free_split(str);
			return (0);
		}
		if (ft_is_int(str[i]) == 0)
		{
			ft_free_split(str);
			return (0);
		}
		i++;
	}
	return (1);
}

int	verif_more_argc(const char **argv)
{
	int	i;

	i = 1;
	while (argv[i])
	{
		if (ft_is_nbr((char *)argv[i]) == 0)
			return (0);
		if (ft_is_int((char *)(argv[i])) == 0)
			return (0);
		i++;
	}
	return (1);
}

int	verif_more_double(int argc, const char **argv)
{
	int	i;
	int	j;

	i = 1;
	while (i < argc)
	{
		j = i + 1;
		while (j < argc)
		{
			if (ft_strcmp(argv[i], argv[j]) == 0)
				return (0);
			j++;
		}
		i++;
	}
	return (1);
}
