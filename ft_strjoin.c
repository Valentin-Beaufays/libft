/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vbeaufay <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/11 15:27:22 by vbeaufay          #+#    #+#             */
/*   Updated: 2019/11/04 17:56:41 by vbeaufay         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static char	*ft_strncat(char *s1, const char *s2, size_t n)
{
	size_t	i;
	size_t	s1_len;

	i = 0;
	s1_len = ft_strlen(s1);
	while (i < n)
	{
		s1[i + s1_len] = s2[i];
		i++;
	}
	s1[i + s1_len] = 0;
	return (s1);
}

char		*ft_strjoin(char const *s1, char const *s2)
{
	size_t	s1_len;
	size_t	s2_len;
	char	*res;

	if (!s1 || !s2)
		return (0);
	s1_len = ft_strlen(s1);
	s2_len = ft_strlen(s2);
	if (!(res = malloc(sizeof(*res) * (s1_len + s2_len + 1))))
		return (0);
	res[0] = 0;
	ft_strncat(res, s1, s1_len);
	ft_strncat(res, s2, s2_len);
	return (res);
}
