/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaewoo <jaewoo@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/20 17:14:56 by jaewoo            #+#    #+#             */
/*   Updated: 2021/11/22 17:39:35 by jaewoo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlen(const char *str)
{
	size_t	i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}

size_t	ft_strlcat(char *dest, const char *src, size_t destsize)
{
	size_t	i;
	size_t	j;

	i = ft_strlen(dest);
	j = 0;
	while (src[j] != '\0' && i + j + 1 < destsize)
	{
		dest[i + j] = src[j];
		j++;
	}
	dest[i + j] = '\0';
	j = frt_strlen(src);
	if (destsize <= i)
		return (j + destsize);
	else
		return (i + j);
}
