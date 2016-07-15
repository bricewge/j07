/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bwaegene <brice.wge@gmail.com>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/07/13 17:30:53 by bwaegene          #+#    #+#             */
/*   Updated: 2016/07/13 18:50:09 by bwaegene         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int		*ft_range(int min, int max);
void	ft_putnbr(int nb);

int		main(void)
{
	int		i;
	int	min;
	int max;
	int *result;

	i = 0;
	min = 6;
	max = 5;
	result = ft_range(min, max);
	printf("%llu", (unsigned long long)result);
	while (i < (max - min))
	{
		printf("%d\n", result[i]);
		i++;
	}
}
