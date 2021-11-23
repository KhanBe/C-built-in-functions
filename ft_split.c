/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaewoo <jaewoo@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/23 13:24:16 by jaewoo            #+#    #+#             */
/*   Updated: 2021/11/23 13:54:39 by jaewoo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	is_charset(char c, char *charset)
{
	int	i;

	i = 0;
	while (charset[i] != '\0')
	{
		if (charset[i] == c)
			return (1);
		i++;
	}
	return (0);
}

unsigned int	count_words(char *str, char *charset)
{
	int	i;
	int	count;

	count = 0;
	i = 0;
	if (str[i] != '\0' && is_charset(str[i], charset) == 0)
	{
		i++;
		count++;
	}
	while (str[i] != '\0')
	{
		if (is_charset(str[i], charset) == 1 && str[i + 1] != '\0'
			&& is_charset(str[i + 1], charset) == 0)
			count++;
		i++;
	}
	return (count);
}

char	*ft_strncpy(char *str, unsigned int n)
{
	unsigned int	i;
	char			*result;

	result = (char *)malloc(sizeof(char) * (n + 1));
	if (!result)
		return (NULL);
	result[n] = '\0';
	i = 0;
	while (i < n)
	{
		result[i] = str[i];
		i++;
	}
	return (result);
}

void	fill_strs(char *str, char *charset, char **result)
{
	int	i;
	int	offset;
	int	count;

	i = 0;
	offset = 1;
	count = 0;
	if (str[i] != '\0' && is_charset(str[i], charset) == 0)
		offset = i++;
	while (str[i] != '\0')
	{
		if (is_charset(str[i], charset) == 1)
		{
			if (offset < i)
				result[count++] = ft_strncpy(str + offset, i - offset);
			offset = i + 1;
		}
		i++;
	}
	if (offset < i)
		result[count] = ft_strncpy(str + offset, i - offset);
}

char	**ft_split(const char *str, char *charset)
{
	char			**result;
	unsigned int	count;
	unsigned int	len;

	if (charset[0] == '\0')
	{
		result = (char **)malloc(1 * sizeof(char *));
		len = 0;
		while (str[len] != '\0')
			len++;
		result[0] = ft_strncpy(str, len);
		result[1] = 0;
		return (result);
	}
	count = count_words(str, charset);
	result = (char **)malloc((count + 1) * sizeof(char *));
	result[count] = 0;
	fill_strs(str, charset, result);
	return (result);
}
