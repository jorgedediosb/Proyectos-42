/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jde-dios <jde-dios@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/14 10:27:06 by jde-dios          #+#    #+#             */
/*   Updated: 2023/06/17 18:40:39 by jde-dios         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
Reproducir de manera idéntica el funcionamiento de la función strncpy
*/

#include <stdio.h>

char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	unsigned int	x;

	x = 0;
	while (x < n && src[x] != '\0')
	{
		dest[x] = src[x];
		x++;
	}
	while (x < n)
	{
		dest[x] = '\0';
		x++;
	}
	return (dest);
}

int	main(void)
{
	char	dest[5];
	char	*src = "123456789";
	unsigned int n = 9;
	ft_strncpy(dest, src, n);
	printf("%s\n", dest);
	return (0);
}
