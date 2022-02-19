/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   mouse_events.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aabduvak <aabduvak@42ISTANBUL.COM.TR>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/19 16:27:29 by aabduvak          #+#    #+#             */
/*   Updated: 2022/02/19 16:46:32 by aabduvak         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_lib.h"

void	key_zoom(int key, t_fdf *data)
{
	if (key == 4)
		data->zoom += 1;
	else if (key == 5)
		data->zoom -= 1;
}

int	mouse_release(int key, int x, int y, t_fdf *data)
{
	(void)x;
	(void)y;
	if (key == 4 || key == 5)
		key_zoom(key, data);
	mlx_clear_window(data->mlx_ptr, data->win_ptr);
	mlx_destroy_image(data->mlx_ptr, data->img);
	data->img = mlx_new_image(data->mlx_ptr, 1920, 1080);
	data->addr = mlx_get_data_addr(data->img, &data->bits_per_pixel,
			&data->line_length, &data->endian);
	draw(data);
	return (0);
}

int	close_frame(t_fdf *data)
{
	free_data(data);
	exit(0);
}
