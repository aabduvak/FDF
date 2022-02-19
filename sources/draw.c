/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   draw.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aabduvak <aabduvak@42ISTANBUL.COM.TR>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/16 11:11:11 by aabduvak          #+#    #+#             */
/*   Updated: 2022/02/19 15:57:21 by aabduvak         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_lib.h"

void	my_mlx_pixel_put(t_fdf *data, int x, int y, int color)
{
	char	*dst;

	if (x >= 0 && x < 1920 && y >= 0 && y < 1080)
	{
		dst = data->addr + (y * data->line_length + \
				x * (data->bits_per_pixel / 8));
		*(unsigned int *) dst = color;
	}
}

void	bresenham(t_fdf *data)
{
	float	x_step;
	float	y_step;
	int		max;
	int		z;
	int		z1;

	z = data->z_matrix[(int)data->param_y][(int)data->param_x];
	z1 = data->z_matrix[(int)data->param_y1][(int)data->param_x1];
	zoom(data);
	color(data, z, z1, data->color_flag);
	isometric(data, z, z1);
	shift(data);
	x_step = data->param_x1 - data->param_x;
	y_step = data->param_y1 - data->param_y;
	max = maximum(module(x_step), module(y_step));
	x_step /= max;
	y_step /= max;
	while ((int)(data->param_y - data->param_y1) ||
		(int)(data->param_x - data->param_x1))
	{
		my_mlx_pixel_put(data, data->param_x, data->param_y, data->color);
		data->param_x += x_step;
		data->param_y += y_step;
	}
}

void	draw(t_fdf *data)
{
	int	x;
	int	y;

	y = 0;
	while (y < data->height)
	{
		x = 0;
		while (x < data->width)
		{
			if (x < data->width - 1)
			{
				set_coordinates(data, x, y, 0);
				bresenham(data);
			}
			if (y < data->height - 1)
			{
				set_coordinates(data, x, y, 1);
				bresenham(data);
			}
			x++;
		}
		y++;
	}
	mlx_put_image_to_window(data->mlx_ptr, data->win_ptr, data->img, 0, 0);
}
