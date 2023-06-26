/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_prime.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jde-dios <jde-dios@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/20 06:35:22 by jde-dios          #+#    #+#             */
/*   Updated: 2023/06/21 10:31:18 by jde-dios         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
Escriba una función que devuelva 1 si el número es primo
y 0 si el número no lo es.
*/

//#include <stdio.h>

int	ft_is_prime(int nb)
{
	int	divisor;

	if (nb <= 1)
	{
		return (0);
	}
	divisor = 2;
	while (divisor <= nb / 2)
	{
		if (nb % divisor == 0)
		{
			return (0);
		}
		divisor++;
	}
	return (1);
}
/*
int main(void)
{
	int number = 7;
	int result = ft_is_prime(number);
	if (result == 1)
	{
		printf("%d es primo", number);
	}
	else
	{
		printf("%d no es primo", number);
	}
	return (0);
}
*/
