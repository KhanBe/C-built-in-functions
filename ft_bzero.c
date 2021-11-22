/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaewoo <jaewoo@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/17 21:05:04 by jaewoo            #+#    #+#             */
/*   Updated: 2021/11/17 23:54:01 by jaewoo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *dest, int value, size_t count)
{
	size_t			i;
	unsigned char	*temp;

	temp = (unsigned char *)dest;
	i = 0;
	while (i < count)
		temp[i++] = (unsigned char)value;
	return (temp);
}

void	*ft_bzero(void *dest, size_t len)
{
	ft_memset(dest, 0, len);
}
