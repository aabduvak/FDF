/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   initial_data.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aabduvak <aabduvak@42ISTANBUL.COM.TR>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/19 16:52:12 by aabduvak          #+#    #+#             */
/*   Updated: 2022/02/19 17:46:34 by aabduvak         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_lib.h"

void	init_data(t_fdf *data)
{
	data->shift_x = 600;
	data->shift_y = 400;
	data->zoom = 30;
	data->degree = 0.8;
	data->color = 0xffffff;
	data->param_y = 0;
	data->param_x = 0;
	data->param_x1 = 0;
	data->param_y1 = 0;
	data->color_flag = 0;
}
