/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ktalbi <ktalbi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/13 12:32:13 by focampo           #+#    #+#             */
/*   Updated: 2021/11/11 18:45:56 by ktalbi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** Alloue(malloc(3)) et retourne un tableau de chaines de caracteres obtenu
** en separant 's' a l'aide du caractere 'c', utilise comme delimiteur.
** Le tableau doit etre termine par NULL.
** #1. La chaine de caracteres a decouper
** #2. Le caractere delimitant
** Renvoie le tableau de nouvelles chaines de caracteres, resultant du
** decoupage. NULL si l'allocation eschoue.
*/

#include "libft.h"

static size_t	ft_nb_mots(const char *str, char c)
{
	size_t	i;
	size_t	mot;

	i = 0;
	mot = 0;
	if (!str)
		return (0);
	while (str[i] != '\0')
	{
		while (str[i] == c && str[i] != '\0')
			i++;
		while (str[i] != c && str[i] != '\0')
			i++;
		mot++;
	}
	if (str[i - 1] == c)
		mot--;
	return (mot);
}

static size_t	ft_lg_mot(const char *str, char c)
{
	size_t	lg;

	lg = 0;
	while (*str != c && *str)
	{
		str++;
		lg++;
	}
	return (lg);
}

static void	*ft_free(char **tab)
{
	size_t	i;

	i = 0;
	while (tab[i])
	{
		free(tab[i]);
		i++;
	}
	free(tab);
	return (NULL);
}

static char	**ft_copie_mots(char **tab, const char *s, char c)
{
	size_t	i;
	size_t	j;

	i = 0;
	while (*s)
	{
		while (*s == c && *s)
			s++;
		if (*s != c && *s)
		{
			tab[i] = malloc(sizeof(char *) * ft_lg_mot(s, c) + 1);
			if (!(tab[i]))
				return (ft_free(tab));
			j = 0;
			while (*s != c && *s)
			{
				tab[i][j++] = *s;
				s++;
			}
			tab[i][j] = '\0';
			i++;
		}
	}
	tab[i] = NULL;
	return (tab);
}

char	**ft_split(char const *s, char c)
{
	char	**tab;

	if (!s)
		return (NULL);
	tab = malloc(sizeof(char *) * (ft_nb_mots(s, c) + 1));
	if (!tab)
		return (NULL);
	ft_copie_mots(tab, s, c);
	return (tab);
}
/*
**int			main()
**{
**	char **str;
**	int i;
**	i = 0;
**	str = ft_split("Split      moi    ca ", ' ');
**	while (str[i])
**	{
**		printf("%s\n", str[i]);
**		i++;
**	}
**	return (0);
**}
*/
