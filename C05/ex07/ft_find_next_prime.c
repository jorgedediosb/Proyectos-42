/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_next_prime.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jde-dios <jde-dios@student.42.madrid>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/20 06:51:06 by jde-dios          #+#    #+#             */
/*   Updated: 2023/06/20 07:17:44 by jde-dios         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
Escriba una función que devuelva el número primo inmediatamente superior
o igual al número pasado como parámetro.
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
	while (divisor * divisor <= nb)
	{
		if (nb % divisor == 0)
		{
			return (0);
		}
		divisor++;
	}
	return (1);
}

int	ft_find_next_prime(int nb)
{
	if (nb == 2)
	{
		return (2);
	}
	while (!ft_is_prime(nb))
	{
		nb++;
	}
	return (nb);
}
/*
int main(void)
{
	int number = 67;
	int nextprime = ft_find_next_prime(number);
	printf("El siguiente nº primo suerior o igual a %d es: %d", number, nextprime);
	return (0);
}
*/
