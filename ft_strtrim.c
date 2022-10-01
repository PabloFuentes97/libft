/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pfuentes <pfuentes@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/09 13:03:09 by pfuentes          #+#    #+#             */
/*   Updated: 2022/09/30 12:45:29 by pfuentes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	pos_left(char const *s1, char const *set)
{
	int		pos_left;
	int		cont;

	pos_left = 0;
	cont = 0;
	while (set[cont])
	{
		if (s1[pos_left] == set[cont])
		{
			pos_left++;
			cont = 0;
		}
		else
			cont++;
	}
	return (pos_left);
}

int	pos_right(char const *s1, char const *set)
{
	int		pos_right;
	int		cont;

	pos_right = ft_strlen(s1) - 1;
	cont = 0;
	while (set[cont])
	{
		if (s1[pos_right] == set[cont])
		{
			pos_right--;
			cont = 0;
		}
		else
			cont++;
	}
	return (pos_right);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	int		cont;
	char	*string;
	int		p_left;
	int		p_right;

	p_left = pos_left(s1, set);
	p_right = pos_right(s1, set);
	cont = 0;
	string = (char *)malloc(sizeof(char) * (pos_right - pos_left) + 1);
	if (string == NULL)
		return (NULL);
	while (p_left <= p_right)
	{
		string[cont] = s1[p_left];
		cont++;
		p_left++;
	}
	string[cont] = '\0';
	return (string);
}
