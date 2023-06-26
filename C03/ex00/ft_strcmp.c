/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jde-dios <jde-dios@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/17 21:25:34 by jde-dios          #+#    #+#             */
/*   Updated: 2023/06/18 09:33:10 by jde-dios         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
Reproducir de manera idéntica el funcionamiento de la función strcmp.
*/

//#include <stdio.h>

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
	unsigned int nb = 6;
	ft_strncat(dest, src, nb);
	printf("Contatenación: %s\n", dest);
	return (0);
}
*/
