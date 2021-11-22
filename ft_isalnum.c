/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaewoo <jaewoo@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/17 21:05:19 by jaewoo            #+#    #+#             */
/*   Updated: 2021/11/17 22:56:16 by jaewoo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	isalnum(int alnum)
{
	if ('0' <= alnum && alnum <= '9')
		return (1);
	else if ('a' <= alnum && alnum <= 'z')
		return (1);
	else if ('A' <= alnum && alnum <= 'Z')
		return (1);
	else
		return (0);
}
