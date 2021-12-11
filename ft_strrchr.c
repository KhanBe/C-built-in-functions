/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaewoo <jaewoo@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/22 18:06:06 by jaewoo            #+#    #+#             */
/*   Updated: 2021/12/09 17:25:52 by jaewoo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *str, int ch)
{
	const char	*temp;

	temp = str;
	str = str + ft_strlen(str);
	while (*str != *temp && (char)ch != *str)
		str--;
	if (ch == *str)
		return ((char *)str);
	return (0);
}
