/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jde-dios <jde-dios@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/20 02:27:06 by jde-dios          #+#    #+#             */
/*   Updated: 2023/06/21 10:09:15 by jde-dios         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
Escriba una función iterativa que devuelva un número. Este número será el
resultado de la operación factorial a partir del número pasado como parámetro.
• Si el argumento no es válido, la función debe devolver 0.
• No hay que gestionar los “int overflow”, el retorno de la función será
indefinido.
*/

//#include <stdio.h>

int	ft_iterative_factorial(int nb)
{
	int	factorial;
	int	i;

	if (nb < 0)
	{
		return (0);
	}
	factorial = 1;
	i = 1;
	while (i <= nb)
	{
		factorial = factorial * i;
		i++;
	}
	return (factorial);
}
/*
int	main(void)
{
	int	number;
	number = 7;

	int result = ft_iterative_factorial(number);
	printf("El factorial de %d es: %d", number, result);
	return (0);
}
*/
