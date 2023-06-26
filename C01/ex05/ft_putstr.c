/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jde-dios <jde-dios@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/12 11:37:11 by jde-dios          #+#    #+#             */
/*   Updated: 2023/06/14 09:29:15 by jde-dios         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
Escriba una función que muestre uno a uno en la pantalla los caracteres de una
cadena.
La dirección del primer carácter de la cadena está incluida en el puntero
pasado como parámetro a la función.
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
	char *ejemplo = "jorge";
	ft_putstr(ejemplo);
	return (0);
}
*/
