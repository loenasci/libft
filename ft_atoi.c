/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: loena <loena@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/02 17:35:03 by loena             #+#    #+#             */
/*   Updated: 2025/08/03 22:17:22 by loena            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	skip_whitespace(const char **nptr)
{
	while ((**nptr >= 9 && **nptr <= 13) || **nptr == 32)
		(*nptr)++;
}

int	check_sign(const char **nptr)
{
	int	sign;

	sign = 1;
	if (**nptr == '+' || **nptr == '-')
	{
		if (**nptr == '-')
			sign = -1;
		(*nptr)++;
		if (**nptr == '+' || **nptr == '-')
			return (0);
	}
	return (sign);
}

int	ft_atoi(const char *nptr)
{
	unsigned int	nbr;
	int				sign;

	nbr = 0;
	skip_whitespace(&nptr);
	sign = check_sign(&nptr);
	if (sign == 0)
		return (0);
	while (ft_isdigit(*nptr))
	{
		nbr *= 10;
		nbr += *nptr - 48;
		nptr++;
	}
	return (sign * (int)nbr);
}
