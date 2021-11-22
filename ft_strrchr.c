/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaewoo <jaewoo@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/22 18:06:06 by jaewoo            #+#    #+#             */
/*   Updated: 2021/11/22 18:11:16 by jaewoo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlen(const char *str)
{
	size_t	i;

	i = 0;
	while (str[i] != 0)
		i++;
	return (i);
}

char	*ft_strrchr(const char *str, int ch)
{
	int     i;
	char    temp;
	char    *stemp;

	i = ft_strlen(str);
	temp = (char)ch;
	stemp = (char *)str;
	while (stemp[i] != temp)
	{
		if (stemp[i] == '\0')
			return (NULL);
		i--;
	}
	return (&stemp[i]);
}
