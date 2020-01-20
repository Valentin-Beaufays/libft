/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vbeaufay <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/11 14:06:18 by vbeaufay          #+#    #+#             */
/*   Updated: 2019/10/24 20:21:29 by vbeaufay         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_isspace(char c)
{
	if ((c >= 9 && c <= 13) || c == 32)
		return (1);
	return (0);
}

int			ft_atoi(const char *str)
{
	int		sign;
	int		result;
	size_t	i;

	i = 0;
	sign = -1;
	result = 0;
	while (ft_isspace(str[i]))
		i++;
	if (str[i] == '-' || str[i] == '+')
		if (str[i++] == '-')
			sign *= -1;
	while (ft_isdigit((int)str[i]))
	{
		result = (result * 10) - (str[i++] - 48);
		if (result > 0)
		{
			if (sign > 0)
				return (0);
			else
				return (-1);
		}
	}
	return (result * sign);
}
