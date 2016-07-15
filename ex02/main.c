/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bwaegene <brice.wge@gmail.com>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/07/13 17:30:53 by bwaegene          #+#    #+#             */
/*   Updated: 2016/07/13 20:23:31 by bwaegene         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int		ft_ultimate_range(int **range, int min, int max);
void	ft_putnbr(int nb);

int		main(void)
{
	int		i;
	int	min;
	int max;
	int size;
	int *range;

	i = 0;
	min = 2;
	max = 5;
	size = ft_ultimate_range(&range, min, max);
	printf("%llu\n", (unsigned long long)range);
	printf("%d\n", size);
	while (i < ft_ultimate_range(&range, min, max))
	{
		printf("%d\n", range[i]);
		i++;
	}
}
