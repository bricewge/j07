/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bwaegene <brice.wge@gmail.com>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/07/13 17:00:48 by bwaegene          #+#    #+#             */
/*   Updated: 2016/07/13 18:23:09 by bwaegene         ###   ########.fr       */
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
