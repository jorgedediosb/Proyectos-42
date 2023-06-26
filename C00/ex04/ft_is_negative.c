/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_negative.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jde-dios <jde-dios@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/07 12:48:23 by jde-dios          #+#    #+#             */
/*   Updated: 2023/06/09 12:32:37 by jde-dios         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
Escriba una función que muestre ’N’ o ’P’ en función del signo del entero que
se haya pasado como parámetro. Si n es negativo mostrar ’N’. Si n es positivo
o nulo mostrar ’P’.
*/

#include <unistd.h>

void	ft_is_negative(int n)
{
	if (n >= 0)
	{
		write(1, "P", 1);
	}
	else
	{
		write(1, "N", 1);
	}
}
/*
int	main(void)
{
	ft_is_negative(0);
	return (0);
}
*/
