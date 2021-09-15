/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pakucera <pakucera@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/14 22:13:55 by pakucera          #+#    #+#             */
/*   Updated: 2021/09/15 10:49:10 by pakucera         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_str_is_alpha(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if (str[i] < 'a' && str[i] > 'z' || str[i] < 'A' && str[i] > 'Z')
		{
			return (0);
			printf("imprimer avant return 1 :%s", str);
		}
		else
		{
			return (1);
		}
	}
}

/* int main(void)
{
	char str[] = "abcd";
	printf("Doit retourner 1 : %s\n", ft_str_is_alpha);
	ft_str_is_alpha(str);
	return (0);
} */