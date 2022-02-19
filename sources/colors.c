/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   colors.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aabduvak <aabduvak@42ISTANBUL.COM.TR>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/18 15:40:21 by aabduvak          #+#    #+#             */
/*   Updated: 2022/02/19 18:59:25 by aabduvak         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_lib.h"

void	color(t_fdf *data, int z, int z1, int flag)
{
	if ((z1 || z) && flag == 1)
		data->color = 0x4E4AD5;
	else if ((z1 || z) && !flag)
		data->color = 0xDEC039;
	else if ((z1 || z) && flag == 2)
		data->color = 0xFFFFFF;
	else if (!(z || z1) && flag == 2)
		data->color = 0xE30A17;
	else if (flag != 2)
		data->color = 0xFFFFFF;
}
