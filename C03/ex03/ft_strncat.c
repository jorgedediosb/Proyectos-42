/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jde-dios <jde-dios@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/18 04:45:29 by jde-dios          #+#    #+#             */
/*   Updated: 2023/06/18 10:24:23 by jde-dios         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
Reproducir de manera idéntica el funcionamiento de la función strncat.
*/

#include <stdio.h>

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	char	*ptr;

	ptr = dest;
	while (*ptr != '\0')
	{
		ptr++;
	}
	while (*src != '\0' && nb > 0)
	{
		*ptr = *src;
		ptr++;
		src++;
		nb--;
	}
	*ptr = '\0';
	return (dest);
}
/*
int	main(void)
{
	char dest[50] = "Papita";
	char src[] = " frita";
	unsigned int nb = 2;
	ft_strncat(dest, src, nb);
	printf("Contatenación: %s\n", dest);
	return (0);
}
*/