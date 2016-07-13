/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bwaegene <brice.wge@gmail.com>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/07/13 17:00:48 by bwaegene          #+#    #+#             */
/*   Updated: 2016/07/13 20:23:45 by bwaegene         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		*ft_range(int min, int max)
{
	int		i;
	int		*result;
	int		infill;

	i = 0;
	infill = min;
	if (min >= max)
		return (0);
	else
		result = (int*)malloc(sizeof(*result) * (max - min));
	while (i < (max - min))
	{
		result[i] = infill;
		infill++;
		i++;
	}
	return (result);
}

int		ft_ultimate_range(int **range, int min, int max)
{
	*range = ft_range(min, max);
	return (min >= max ? 0 : max - min);
}
