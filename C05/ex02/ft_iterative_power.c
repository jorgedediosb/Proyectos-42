/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jde-dios <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/20 03:57:54 by jde-dios          #+#    #+#             */
/*   Updated: 2023/06/21 09:30:19 by jde-dios         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
Escriba una función iterativa que devuelva una potencia de un número.
Una poten- cia inferior a 0 devolverá 0.
• No hay que gestionar los “int overflow”, el retorno de la función será
indefinido.
*/

//#include <stdio.h>

int	ft_iterative_power(int nb, int power)
{
	int	result;

	if (power < 0)
	{
		return (0);
	}
	result = 1;
	while (power > 0)
	{
		result = result * nb;
		power--;
	}
	return (result);
}
/*
int main(void)
{
	int	number = 2;
	int	power = 0;
	int	result = ft_iterative_power(number, power);
	printf("%d elevado a %d es: %d", number, power, result);
	return (0);
}
*/
