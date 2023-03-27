/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_isspace.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: dbasting <marvin@codam.nl>                   +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/03/27 11:34:27 by dbasting      #+#    #+#                 */
/*   Updated: 2023/03/27 11:35:07 by dbasting      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

int	ft_isspace(int *c)
{
	return (c == ' ' || (c >= '\t' && c <= '\r'));
}