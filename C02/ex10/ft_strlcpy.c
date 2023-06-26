/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jde-dios <jde-dios@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/15 21:23:24 by jde-dios          #+#    #+#             */
/*   Updated: 2023/06/17 20:27:08 by jde-dios         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
Reproducir de manera idéntica el funcionamiento de la función strlcpy.
*/

#include <stdio.h>

unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size)
{
	unsigned int	lensrc;
	unsigned int	lendest;

	lensrc = 0;
	lendest = 0;
	while (src[lensrc] != '\0')
	{
		lensrc++;
	}
	lendest = 0;
	if (size > 0)
	{
		while (lendest < size - 1 && src[lendest] != '\0')
		{
			dest[lendest] = src[lendest];
			lendest++;
		}
		dest[lendest] = '\0';
	}
	return (lensrc);
}

int	main(void)
{
	char	src[] = "hola mundo";
	char	dest[20];
	unsigned int	size;

	size = ft_strlcpy(dest, src, sizeof(dest));
	
	printf("Cadena original: %s\n", src);
	printf("Cadena destino: %s\n", dest);
	printf("Longitud: %d\n", size);
	return (0);
}
