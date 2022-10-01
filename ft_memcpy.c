/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pfuentes <pfuentes@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/09 13:03:09 by pfuentes          #+#    #+#             */
/*   Updated: 2022/09/27 09:57:09 by pfuentes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, void *src, int n)
{
	char		*char_dest;
	const char	*char_src;
	int			c;

	char_dest = (char *)dest;
	char_src = (char *)src;
	c = 0;
	if (dest == NULL)
		return (NULL);
	while (c < n)
	{
		char_dest[c] = char_src[c];
		c++;
	}	
	return (dest);
}
