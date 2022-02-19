/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   keyboard_events.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aabduvak <aabduvak@42ISTANBUL.COM.TR>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/19 14:51:02 by aabduvak          #+#    #+#             */
/*   Updated: 2022/02/19 18:57:43 by aabduvak         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_lib.h"

void	key_shift(int key, t_fdf *data)
{
	if (key == 13)
		data->shift_y += 10;
	else if (key == 1)
		data->shift_y -= 10;
	else if (key == 0)
		data->shift_x += 10;
	else if (key == 2)
		data->shift_x -= 10;
}

void	key_degree(int key, t_fdf *data)
{
	if (key == 124)
		data->degree += 0.1;
	else if (key == 123)
		data->degree -= 0.1;
}

void	key_color(int key, t_fdf *data)
{
	if (key == 8)
		data->color_flag = 1;
	else if (key == 9)
		data->color_flag = 0;
	else if (key == 17)
		data->color_flag = 2;
}
