/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_atoi.c                                          :+:    :+:            */
/*                                                     +:+                    */
/*   By: dbasting <marvin@codam.nl>                   +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/10/03 17:22:39 by dbasting      #+#    #+#                 */
/*   Updated: 2023/03/28 11:54:58 by dbasting      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "ft_stdio.h"
#include "ft_ctype.h"

int	ft_atoi(const char *str)
{
	int	number;
	int	neg;
	int	index;

	number = 0;
	neg = 1;
	index = 0;
	while (ft_isspace(str[index]))
		index++;
	if (str[index] == '-' || str[index] == '+')
	{
		if (str[index] == '-')
			neg = -1;
		index++;
	}
	while (ft_isdigit(str[index]))
	{
		number *= 10;
		number += str[index] - '0';
		index++;
	}
	return (number * neg);
}
