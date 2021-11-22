/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaewoo <jaewoo@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/17 21:15:34 by jaewoo            #+#    #+#             */
/*   Updated: 2021/11/17 22:41:06 by jaewoo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_isdigit(int number)
{
	if ('0' <= number && number <= '9')
		return (1);
	else
		return (0);
}

int	ft_isspace(const char *str)
{
	int	i;

	i = 0;
	while ((9 <= str[i] && str[i] <= 13) || (str[i] == 32))
		i++;
	return (i);
}

int	ft_atoi(const char *str)
{
	int	sign;
	int	i;
	int	result;

	sign = 1;
	i = ft_isspace(str);
	result = 0;
	if (str[i] == '-')
		sign = -1;
	while (ft_isdigit(str[i]))
	{
		result = (result * 10) + (str[i] - '0');
		i++;
	}
	return (sign * result);
}
