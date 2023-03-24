/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_abs.c                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: dbasting <marvin@codam.nl>                   +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/03/24 15:07:30 by dbasting      #+#    #+#                 */
/*   Updated: 2023/03/24 15:07:32 by dbasting      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "ft_math.h"

int	ft_abs(int n)
{
	if (n < 0)
		return (-n);
	return (n);
}
