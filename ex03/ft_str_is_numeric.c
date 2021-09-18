/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pakucera <pakucera@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/14 22:13:55 by pakucera          #+#    #+#             */
/*   Updated: 2021/09/18 18:20:10 by pakucera         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_str_is_numeric(char *str)
{
	int	i;

	i = 0;
	while (str[i] >= '0' && str[i] <= '9')
	{
		i++;
	}
	printf("%c", ft_str_is_numeric(str));
	if (str[i] == '\0')
	{
		return (1);
	}
	else
	{
		return (0);
	}
	printf("%c", ft_str_is_numeric(str));
}

/*int	main(void)
{
	int	str;

	str = '5';
	printf("%c", ft_str_is_numeric(str));
	return (0);
}*/
