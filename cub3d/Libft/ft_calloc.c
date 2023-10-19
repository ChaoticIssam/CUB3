/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iszitoun <iszitoun@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/27 20:24:39 by iszitoun          #+#    #+#             */
/*   Updated: 2023/10/19 22:37:46 by iszitoun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	void	*loc;
	size_t	x;

	if (size > SIZE_MAX || count > SIZE_MAX)
		return (0);
	x = count * size;
	loc = malloc(x);
	if (!loc)
		return (0);
	ft_bzero(loc, x);
	return (loc);
}
