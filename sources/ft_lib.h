/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lib.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aabduvak <aabduvak@42ISTANBUL.COM.TR>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/15 17:27:49 by aabduvak          #+#    #+#             */
/*   Updated: 2022/02/19 23:32:47 by aabduvak         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_LIB_H
# define FT_LIB_H

# include <unistd.h>
# include <stdlib.h>
# include <fcntl.h>
# include "mlx.h"
# include "get_next_line.h"
# include "ft_printf.h"
# include "libft.h"
# include <math.h>

typedef struct s_fdf
{
	float	param_x;
	float	param_y;
	float	param_x1;
	float	param_y1;
	int		width;
	int		height;
	int		**z_matrix;
	float	zoom;
	int		color;
	int		shift_x;
	int		shift_y;
	double	degree;
	void	*mlx_ptr;
	void	*win_ptr;
	void	*img;
	char	*addr;
	int		bits_per_pixel;
	int		line_length;
	int		endian;
	int		color_flag;
}			t_fdf;

void	read_file(char *file_name, t_fdf *data);
void	bresenham(t_fdf *data);
void	draw(t_fdf *data);
int		keyboard_handler(int key, t_fdf *data);
void	mouse_handler(t_fdf *data);
float	maximum(float a, float b);
float	module(float num);
void	isometric(t_fdf *data, int z, int z1);
void	shift(t_fdf *data);
void	zoom(t_fdf *data);
void	set_coordinates(t_fdf *data, int x, int y, int flag);
void	color(t_fdf *data, int z, int z1, int flag);
void	my_mlx_pixel_put(t_fdf *data, int x, int y, int color);
void	key_zoom(int key, t_fdf *data);
void	key_shift(int key, t_fdf *data);
void	key_degree(int key, t_fdf *data);
void	key_color(int key, t_fdf *data);
int		close_frame(t_fdf *data);
void	free_data(t_fdf *data);
int		mouse_release(int key, int x, int y, t_fdf *data);
void	init_data(t_fdf *data);
void	error_permission(int fd, char *file_name, t_fdf *data);
void	error_input(void);
void	data_error_handler(t_fdf *data);


#endif