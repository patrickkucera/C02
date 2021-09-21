/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pakucera <pakucera@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/18 19:28:02 by pakucera          #+#    #+#             */
/*   Updated: 2021/09/21 03:57:51 by pakucera         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strlowcase(char *str)
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
	return (str);
}

char	*ft_strcapitalize(char *str)
{
	int	i;
	int	start;

	i = 0;
	start = 1;
	ft_strlowcase(str);
	while (str[i] != '\0')
	{
		if (str[i] >= 'a' && str[i] <= 'z')
		{
			if (start == 1)
				str[i] -= 32;
			start = 0;
		}
		else if (str[i] >= '0' && str[i] <= '9')
			start = 0;
		else if (str[i] >= 97 && str[i] <= 122)
			start = 0;
		else
			start = 1;
		i++;
	}
	return (str);
}

/*int	main(void)
{
	char str[] = "asdf qWeRtY ZXCV 100TIS\n";
	printf("%s", ft_strcapitalize(str));
	char str2[] = "asdf-qWeRtY ZXCV 100TIS";
	printf("%s", ft_strcapitalize(str2));

}
*/