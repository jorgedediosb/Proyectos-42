/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jde-dios <jde-dios@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/20 04:44:49 by jde-dios          #+#    #+#             */
/*   Updated: 2023/06/21 09:31:03 by jde-dios         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
• Escriba una función recursiva que devuelva una potencia de un número.
• No hay que gestionar los “int overflow”, el retorno de la función será
indefinido.
*/

//#include <stdio.h>

int	ft_recursive_power(int nb, int power)
{
	if (power < 0)
	{
		return (0);
	}
	if (nb == 0 && power == 0)
	{
		return (1);
	}
	if (power == 0)
	{
		return (1);
	}
	return (nb * ft_recursive_power(nb, power -1));
}
/*
int main(void)
{
	int	number = 2;
	int power = 4;
	int result = ft_recursive_power(number, power);
	printf("%d elevado a %d es: %d", number, power, result);
	return 	(0);
}
*/
