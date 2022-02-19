/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   math.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aabduvak <aabduvak@42ISTANBUL.COM.TR>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/18 15:32:10 by aabduvak          #+#    #+#             */
/*   Updated: 2022/02/18 19:19:49 by aabduvak         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_lib.h"

float	maximum(float a, float b)
{
	if (a > b)
		return (a);
	return (b);
}

float	module(float num)
{
	if (num < 0)
		return (-num);
	return (num);
}

void	isometric(t_fdf *data, int z, int z1)
{
	data->param_x = (data->param_x - data->param_y) * cos(data->degree);
	data->param_y = (data->param_x + data->param_y) * sin(data->degree) - z;
	data->param_x1 = (data->param_x1 - data->param_y1) * cos(data->degree);
	data->param_y1 = (data->param_x1 + data->param_y1) * sin(data->degree) - z1;
}

void	zoom(t_fdf *data)
{
	data->param_x = data->param_x * data->zoom;
	data->param_y = data->param_y * data->zoom;
	data->param_x1 = data->param_x1 * data->zoom;
	data->param_y1 = data->param_y1 * data->zoom;
}

void	shift(t_fdf *data)
{
	data->param_x += data->shift_x;
	data->param_y += data->shift_y;
	data->param_x1 += data->shift_x;
	data->param_y1 += data->shift_y;
}
