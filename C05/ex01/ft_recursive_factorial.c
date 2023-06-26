/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jde-dios <jde-dios@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/20 03:39:03 by jde-dios          #+#    #+#             */
/*   Updated: 2023/06/21 09:29:00 by jde-dios         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
 Escriba una función recursiva que devuelva el factorial de un número pasado
 como parámetro.
• Si el argumento no es válido, la función debe devolver 0.
• No hay que gestionar los “int overflow”, el retorno de la función será
indefinido.
*/

//#include <stdio.h>

int	ft_recursive_factorial(int nb)
{
	if (nb < 0)
	{
		return (0);
	}
	if (nb == 0)
	{
		return (1);
	}
	return (nb * ft_recursive_factorial(nb -1));
}
/*
int	main(void)
{
	int number = 7;
	int factorial = ft_recursive_factorial(number);
	printf("El factoral de %d es: %d", number, factorial);
}
*/
