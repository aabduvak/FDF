/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aabduvak <aabduvak@42ISTANBUL.COM.TR>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/18 15:41:39 by aabduvak          #+#    #+#             */
/*   Updated: 2022/02/19 14:52:27 by aabduvak         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_lib.h"

void	set_coordinates(t_fdf *data, int x, int y, int flag)
{
	data->param_x = x;
	data->param_y = y;
	if (flag == 0)
	{
		data->param_y1 = y;
		data->param_x1 = x + 1;
	}
	else
	{
		data->param_y1 = y + 1;
		data->param_x1 = x;
	}
}
