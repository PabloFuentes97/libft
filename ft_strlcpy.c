/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pfuentes <pfuentes@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/09 13:03:09 by pfuentes          #+#    #+#             */
/*   Updated: 2022/10/01 17:17:52 by pfuentes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dest, char *src, size_t size)
{
	size_t	cont;

	cont = 0;
	if (ft_strlen(dest) == 0 || size == 0)
		return (ft_strlen(src));
	while (src[cont] != '\0' && cont < (size - 1))
	{
		dest[cont] = src[cont];
		cont++;
	}
	dest[cont] = '\0';
	return (ft_strlen(src));
}
