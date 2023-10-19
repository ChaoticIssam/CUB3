/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   cub3d.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iszitoun <iszitoun@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/02 18:18:00 by iszitoun          #+#    #+#             */
/*   Updated: 2023/10/19 23:04:18 by iszitoun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "cub3d.h"

int	quit(void)
{
	exit(0);
	return (0);
}

int	main(int ac, char **av)
{
	t_main	*m;

	(void)ac;
	if (ac <= 1)
		exit(1);
	check_name(av[1]);
	m = my_malloc(sizeof(t_main));
	m->count = 1;
	m->fd = open(av[1], O_RDWR);
	check_check(m);
	new_line_inside(m);
	if (!m->str)
		return (0);
	create_map(m);
	items_check(m);
	while (1){}
}
