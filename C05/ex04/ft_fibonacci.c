/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_fibonacci.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jde-dios <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/20 05:06:49 by jde-dios          #+#    #+#             */
/*   Updated: 2023/06/21 09:33:45 by jde-dios         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
Escriba una función ft_fibonacci que devuelva el n-ésimo elemento de la
sucesión de Fibonacci; el primer elemento de la serie está en el índice 0.
Consideraremos que la sucesión de Fibonacci comienza por 0, 1, 1, 2.
• No se tendrán que gestionar los overflows.
*/

//#include <stdio.h>

int	ft_fibonacci(int index)
{
	if (index < 0)
	{
		return (-1);
	}
	if (index == 0)
	{
		return (0);
	}
	else if (index == 1)
	{
		return (1);
	}
	return (ft_fibonacci(index -1) + ft_fibonacci(index -2));
}
/*
int	main(void)
{
	int	index = 8;
	int fibonacci = ft_fibonacci(index);
	printf("El %d nº fibonacci es: %d", index, fibonacci);
	return (0);
}
*/
