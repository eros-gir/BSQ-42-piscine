/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_map.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jventura <jventura@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/21 12:08:36 by jventura          #+#    #+#             */
/*   Updated: 2021/12/21 14:07:34 by gpujol-r         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "functions.h"

void	print_map(t_map map)
{
	int	i;
	int	j;
	i = 0;
    while (i < map.rows)
    {
        j = 0;
        while (j < map.cols)
        {
            if ((i >= map.start_x && i < (map.start_x + map.max))
                && (j >= map.start_y && j < (map.start_y + map.max)))
            {
                ft_putchar(map.full);
            }
            else
                ft_putchar(map.map[i][j]);
            j++;
        }
        ft_putchar('\n');
        i++;
    }
}
void    free_map(t_map *map)
{
    int i;
    i = 0;
    while (i < map->rows)
    {
        free(map->map[i]);
        i++;
    }
    free(map->map);
}
