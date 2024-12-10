/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   events.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oalqubai <oalqubai@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/10 18:04:38 by oalqubai          #+#    #+#             */
/*   Updated: 2024/12/10 18:04:39 by oalqubai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fractol.h"

int	close_handler(t_fractal *fractal)
{
	mlx_destroy_image(fractal->mlx_connection, fractal->img.img_ptr);
	mlx_destroy_window(fractal->mlx_connection, fractal->mlx_window);
	free(fractal->mlx_connection);
	exit(0);
}

int	key_handler(int keysym, t_fractal *fractal)
{
	if (keysym == ESC_KEY)
		close_handler(fractal);
	else if (keysym == RIGHT_ARROW)
		fractal->shift_x += (0.5 * fractal->zoom);
	else if (keysym == LEFT_ARROW)
		fractal->shift_x -= (0.5 * fractal->zoom);
	else if (keysym == UP_ARROW)
		fractal->shift_y += (0.5 * fractal->zoom);
	else if (keysym == DOWN_ARROW)
		fractal->shift_y -= (0.5 * fractal->zoom);
	else if (keysym == PLUS)
		fractal->iterations_defintion += 10;
	else if (keysym == MINUS)
		fractal->iterations_defintion -= 10;
	fractal_render(fractal);
	return (0);
}

int	mouse_handler(int button, int x, int y, t_fractal *fractal)
{
	(void)x;
	(void)y;
	if (button == 5)
		fractal->zoom *= 0.95;
	else if (button == 4)
		fractal->zoom *= 1.05;
	fractal_render(fractal);
	return (0);
}
