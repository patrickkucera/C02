/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pakucera <pakucera@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/14 22:13:55 by pakucera          #+#    #+#             */
/*   Updated: 2021/09/14 23:31:05 by pakucera         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* char	*mystrcpy( char *destination, const char *source )
{
	char	*returnValue = destination;
    while( *destination++ = *source++);
    return returnValue;
}
 */
#include <stdio.h>

char	*ft_strcpy(char *dest, char *src)
{
	int	i;
	i = 0;

	while(src[i] != '\0') 
	{
		//dest = src;
		printf("%c\n", src[i]);
		printf("%c\n", dest[i]);
		i++;
	}
	return (dest);
}

int	main(void)
{
	char dest[255] = "Un long texte";
	char src[255] = "Bla autre texte";
	
	printf("Avant dest = %s\n", dest);
	ft_strcpy(dest, src);
	printf("Apres dest = %s\n", dest);
	
}