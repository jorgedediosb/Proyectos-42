/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jde-dios <jde-dios@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/18 04:10:07 by jde-dios          #+#    #+#             */
/*   Updated: 2023/06/18 10:21:40 by jde-dios         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
Reproducir de manera idéntica el funcionamiento de la función strcat.
*/

//#include <stdio.h>

char	*ft_strcat(char *dest, char *src)
{
	char	*ptr;

	ptr = dest;
	while (*ptr != '\0')
	{
		ptr++;
	}
	while (*src != '\0')
	{
		*ptr = *src;
		ptr++;
		src++;
	}
	*ptr = '\0';
	return (dest);
}
/*
int	main(void)
{
	char	dest[50] = "Hello";
	char	src[] = " World!";
	ft_strcat(dest, src);
	printf("Concatenación: %s\n", dest);
	return (0);
}
*/
