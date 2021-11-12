/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ktalbi <ktalbi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/17 21:24:55 by focampo           #+#    #+#             */
/*   Updated: 2021/11/11 18:44:15 by ktalbi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** Alloue la memoire necessaire pour un tableau de nmemb(=c'est le nombre d'
** elements , chacun ayant une taille d'octets(=byte)) elements de taille
** size octets, et renvoie un pointeur vers la memoire alloue. Cette zone est
** remplie avec des zeros. Si nmemb ou size vaut 0, calloc() renvoie soit
** NULL, soit un pointeur unique qui pourra etre passe ulterieurement a free()
** avec succes.
** calloc() renvoie un pointeur sur la memoire alloue, qui est correctement
** alignee pour n'importe quel type de variable. Si il echoue, il renvoie
** NULL. NULL peut egalement etre renvoye par un appel reussi a malloc()
** avec un argument size egal a zero.
** On va utiliser la fonction bzero car elle met a 0('\0') la taille( du
** tableau cree dans la fonction calloc()
*/

#include "libft.h"

void	*ft_calloc(size_t nmemb, size_t size)
{
	char	*tab;

	tab = malloc(size * nmemb);
	if (!(tab))
		return (NULL);
	ft_bzero(tab, nmemb * size);
	return (tab);
}
