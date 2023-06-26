/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jde-dios <jde-dios@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/18 16:10:19 by jde-dios          #+#    #+#             */
/*   Updated: 2023/06/18 16:22:25 by jde-dios         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
Escriba una función que muestre uno a uno en la pantalla los caracteres de
una cadena.
La dirección del primer carácter de la cadena está incluida en el puntero pasado como parámetro a la función.
*/

#include <unistd.h>

void	ft_putstr(char *str)
{
	while (*str != '\0')
	{
		write(1, str, 1);
		str++;
	}
}
/*
int	main(void)
{
	char *example = "Jorge";
	write(1, example, 5);
	return (0);
}
*/
