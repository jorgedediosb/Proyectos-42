/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jde-dios <jde-dios@student.42madridcom>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/18 12:15:10 by jde-dios          #+#    #+#             */
/*   Updated: 2023/06/18 13:17:28 by jde-dios         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
Reproducir de manera idéntica el funcionamiento de la función strlcat
*/

//#include <stdio.h>

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	x;

	x = 0;
	while (*ptr != '\0')
	{
		ptr++;
	}
	while (*src != '\0' && size > 0)
	{
		*ptr = *src;
		ptr++;
		src++;
		size--;
	}
	*ptr = '\0';
	return (0);
}
