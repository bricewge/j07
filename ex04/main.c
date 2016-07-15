/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bwaegene <brice.wge@gmail.com>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/07/13 16:45:56 by bwaegene          #+#    #+#             */
/*   Updated: 2016/07/13 16:58:00 by bwaegene         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

/* char	**ft_split_whitespaces(char *str); */
void	ft_putstr(char *str);

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int		main(int argc, char **argv);
{
	int		i;

	i = 1;
	if (argc >= 2)
	{
		while (i < n)
		{
			ft_putstr(*argv[i]);
			i++;
		}
	}
}
