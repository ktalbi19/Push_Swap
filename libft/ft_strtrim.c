/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ktalbi <ktalbi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/18 22:57:50 by focampo           #+#    #+#             */
/*   Updated: 2021/11/11 18:46:39 by ktalbi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** Alloue(avec malloc(3)) et retourne une copie de la chaine 's1', sans les
** caracteres specifies dans le 'set' au debut et la fin de la chaine de
** caracteres.
** #1. La chaine de caracteres a trimmer
** #2. Le set de reference de caracteres a trimmer
** Retourne la chaine de caracteres trimmee. NULL si l'allocation echoue.
** "static" = ce mot cle permet de n'utiliser une fonction que dans le fichier
** dans lequel elle est ecrite(elle est consideree comme non-definie dans les
** autres fonctions)
** strtrim permet de supprimer le caractere dans la chaine qu'il soit au debut
** ou au final tant qu'il soit dans 'set' et il s'arrete des qu'il differe.
*/

#include "libft.h"

/*
** Cette fonction verifie si c'est possible de trimmer
*/

static int	ft_possible_trimmer(char c, char const *set)
{
	int	i;
	int	set_len;

	i = 0;
	set_len = ft_strlen(set);
	while (i < set_len)
	{
		if (c == set[i])
			return (1);
		i++;
	}
	return (0);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	i;
	size_t	debut;
	size_t	fin;
	char	*str;

	i = 0;
	debut = 0;
	if (!s1 || !set)
		return (NULL);
	fin = ft_strlen(s1);
	while (ft_possible_trimmer(s1[debut], set))
		debut++;
	while (fin > 0 && ft_possible_trimmer(s1[fin - 1], set))
		fin--;
	if (fin < debut)
		fin = debut;
	str = malloc(sizeof(char) * (fin - debut + 1));
	if (!(str))
		return (NULL);
	while (debut < fin)
		str[i++] = s1[debut++];
	str[i] = '\0';
	return (str);
}
/*
**#include <stdio.h>
**
**int		main()
**{
**	char s1[20]= "Bonjour moi nandi";
**	char set[20] = "Bondi";
**	printf("%s\n", ft_strtrim(s1, set));
**	return 0;
**}
*/
