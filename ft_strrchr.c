/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaewoo <jaewoo@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/22 18:06:06 by jaewoo            #+#    #+#             */
/*   Updated: 2021/12/17 17:09:49 by jaewoo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *str, int ch)
{
	int	i;

	i = ft_strlen(str);
	while (0 <= i)
	{
		if (str[i] == (unsigned char)ch)
			return ((char *)str + i);
		i--;
	}
	return (NULL);
}
