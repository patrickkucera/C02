/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pakucera <pakucera@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/18 19:28:02 by pakucera          #+#    #+#             */
/*   Updated: 2021/09/18 20:16:50 by pakucera         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strcapitalize(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= 'A' && str[i] <= 'Z')
		{
			str[i] += 32;
		}
		i++;
	}
	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] < 48 || str[i] > 122)
		{
			str[i] -= 32;
		}
	}
	i++;
	return (str);
}

/*int	main(void)
{
	char str1[] = "Bonjour Comment";	
	char str2[] = "42lausanne lausanne";
	char str3[] = "abcddgfdkjk;jkrejh";
	char str4[] = "Murilo Dutra Alvesz";

	printf("str1: %s\n", str1);
	printf("str2: %s\n", str2);
	printf("str3: %s\n", str3);
	printf("str4: %s\n", str4);
	ft_strcapitalize(str1);
	ft_strcapitalize(str2);
	ft_strcapitalize(str3);
	ft_strcapitalize(str4);
	printf("\n");
	printf("str1: %s\n", str1);
	printf("str2: %s\n", str2);
	printf("str3: %s\n", str3); 
	printf("str4: %s\n", str4);
	return (0);
}
*/