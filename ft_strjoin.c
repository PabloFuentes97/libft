/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pfuentes <pfuentes@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/09 13:03:09 by pfuentes          #+#    #+#             */
/*   Updated: 2022/10/14 10:51:06 by pfuentes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static char	*fill_array(char	const *s1, char	const *s2, char	*array)
{
	int	cont_s;
	int	cont_join;

	cont_s = 0;
	cont_join = 0;
	while (s1[cont_s] != '\0')
	{
		array[cont_join] = s1[cont_s];
		cont_join++;
		cont_s++;
	}
	cont_s = 0;
	while (s2[cont_s] != '\0')
	{
		array[cont_join] = s2[cont_s];
		cont_join++;
		cont_s++;
	}
	array[cont_join] = '\0';
	return (array);
}

char	*ft_strjoin(char	const *s1, char	const *s2)
{
	char	*str_join;
	int		s1_len;
	int		s2_len;

	s1_len = ft_strlen(s1);
	s2_len = ft_strlen(s2);
	str_join = (char *)malloc(sizeof(char) * (s1_len + s2_len + 1));
	if (str_join == NULL)
		return (NULL);
	str_join = fill_array(s1, s2, str_join);
	return (str_join);
}
