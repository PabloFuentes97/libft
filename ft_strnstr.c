/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pfuentes <pfuentes@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/09 13:03:09 by pfuentes          #+#    #+#             */
/*   Updated: 2022/09/26 11:47:32 by pfuentes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strnstr(char *str, char *to_find, size_t len)
{
	unsigned long int		c1;
	unsigned long int		c2;

	if (to_find[0] == '\0')
		return (str);
	c1 = 0;
	while (c1 < len)
	{
		c2 = 0;
		if (str[c1 + c2] == to_find[c2])
		{
			while ((str[c1 + c2] == to_find[c2]) && (c1 + c2) < len)
			{
				c2++;
				if (to_find[c2] == '\0')
					return (&str[c1]);
			}
		}
	c1++;
	}
	return (0);
}
