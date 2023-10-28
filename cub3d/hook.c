/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   hook.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mokhalil <mokhalil@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/18 16:50:35 by mokhalil          #+#    #+#             */
/*   Updated: 2023/10/20 03:02:49 by mokhalil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "cub3d.h"

int	update_map(t_map *map_v)
{
	update_player_position(map_v);
	mlx_destroy_image(map_v->mlx->mlx, map_v->img->img);
	mlx_clear_window(map_v->mlx->mlx, map_v->mlx->win);
	map_v->img->img = mlx_new_image(map_v->mlx->mlx,
			map_v->windows_width, map_v->windows_height);
	map_v->img->addr = mlx_get_data_addr(map_v->img->img,
			&map_v->img->bits_per_pixel, &map_v->img->line_length,
			&map_v->img->endian);
	map_v->x = 0;
	map_v->y = 0;
	render_all_component(map_v);
	mlx_put_image_to_window(map_v->mlx->mlx,
		map_v->mlx->win, map_v->img->img, 0, 0);
	return (0);
}

int	key_reales(int keycode, t_map *map_v)
{
	if (keycode == 13)
		map_v->move_up = 0;
	else if (keycode == 1)
		map_v->move_down = 0;
	else if (keycode == 2)
		map_v->move_right = 0;
	else if (keycode == 0)
		map_v->move_left = 0;
	else if (keycode == 123)
		map_v->turn_left = 0;
	else if (keycode == 124)
		map_v->turn_right = 0;
	return (0);
}

int	key_hook(int keycode, t_map *map_v)
{
	if (keycode == 53)
		exit(1);
	if (keycode == 13)
		map_v->move_up = 1;
	else if (keycode == 1)
		map_v->move_down = 1;
	else if (keycode == 2)
		map_v->move_right = 1;
	else if (keycode == 0)
		map_v->move_left = 1;
	else if (keycode == 123)
		map_v->turn_left = 1;
	else if (keycode == 124)
		map_v->turn_right = 1;
	return (0);
}
