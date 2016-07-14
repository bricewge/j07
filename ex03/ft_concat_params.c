/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_concat_params.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bwaegene <brice.wge@gmail.com>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/07/13 20:36:38 by bwaegene          #+#    #+#             */
/*   Updated: 2016/07/14 15:59:04 by bwaegene         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		ft_strlen(char *str)
{
	int		i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

char	*ft_strcat_n(char *dest, char *src)
{
	int		dest_len;
	int		src_len;

	dest_len = ft_strlen(dest);
	src_len = 0;
	while (src[src_len])
	{
		dest[dest_len + src_len + 1] = src[src_len];
		src_len++;
	}
	dest[dest_len] = '\n';
	return (dest);
}

char	*ft_concat_params(int argc, char **argv)
{
	int		i;
	int		len;
	char	*result;

	i = 1;
	len = 0;
	while (i < argc)
	{
		len += ft_strlen(argv[i]) + 1;
		i++;
	}
	i = 2;
	result = (char*)malloc(sizeof(*result) * len + 1);
	if (argc > 1)
		result = argv[1];
	while (i < argc)
	{
		result = ft_strcat_n(result, argv[i]);
		i++;
	}
	result[len] = '\0';
	return (result);
}
