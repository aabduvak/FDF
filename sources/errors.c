/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   errors.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aabduvak <aabduvak@42ISTANBUL.COM.TR>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/19 16:42:20 by aabduvak          #+#    #+#             */
/*   Updated: 2022/02/19 23:56:57 by aabduvak         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_lib.h"

void	free_data(t_fdf *data)
{
	int	y;

	y = 0;
	while (y < data->height)
	{
		free(data->z_matrix[y++]);
	}
	mlx_destroy_image(data->mlx_ptr, data->img);
	mlx_destroy_window(data->mlx_ptr, data->win_ptr);
	free(data->z_matrix);
	free(data);
}

void	error_permission(int fd, char *file_name, t_fdf *data)
{
	if (fd == -1)
	{
		ft_printf("Something went wrong while trying to open %s.", file_name);
		ft_printf("\nPlease, check file and try again.");
		close(fd);
		free(data);
		exit(1);
	}
}

void	error_input(void)
{
	ft_printf("Invalid input!");
	ft_printf("\nPlease, check file and try again.");
	exit(1);
}

void	data_error_handler(t_fdf *data)
{
	if (!data->z_matrix)
		error_input();
}
