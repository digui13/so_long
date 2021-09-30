/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   error_reading.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dpestana <dpestana@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/27 12:53:07 by dpestana          #+#    #+#             */
/*   Updated: 2021/09/30 10:47:36 by dpestana         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../src/so_long.h"

// [reading.c] 
int	alloc_mem_error(int *fd, t_game *g)
{
	close(*fd);
	free(g->map.matrix);
	write(1, "Error\n", 7);
	write(1, "Memory allocation failed\n", 26);
	exit(1);
	return (1);
}

// [reading.c] 
int	open_file_error(int *fd, t_game *g)
{
	close(*fd);
	free(g->map.matrix);
	write(1, "Error\n", 7);
	write(1, "Open file failed\n", 18);
	exit(1);
	return (1);
}

// [reading.c] 
int	square_error(t_game *g)
{
	if (g->map.max_x == g->map.max_y)
	{
		free(g->map.matrix);
		write(1, "Error\n", 7);
		write(1, "Square map not valid\n", 22);
		exit(1);
		return (1);
	}
	return (0);
}
