/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaewoo <jaewoo@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/17 21:15:34 by jaewoo            #+#    #+#             */
/*   Updated: 2021/12/17 16:31:02 by jaewoo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(const char *nptr)
{
	int	i;
	int	ret;
	int	sign;

	i = 0;
	ret = 0;
	while ((*nptr >= 9 && *nptr <= 13) || *nptr == ' ')
		nptr++;
	sign = 1;
	if (nptr[i] == '-' || nptr[i] == '+')
	{	
		if (nptr[i++] == '-')
			sign *= -1;
	}
	while (nptr[i] >= '0' && nptr[i] <= '9')
		ret = (ret * 10) + (nptr[i++] - '0');
	return (ret * sign);
}
