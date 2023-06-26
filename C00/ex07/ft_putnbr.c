/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jde-dios <jde-dios@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/08 18:09:33 by jde-dios          #+#    #+#             */
/*   Updated: 2023/06/12 15:48:57 by jde-dios         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
Escriba una función que muestre un número pasado como parámetro. La función
deberá ser capaz de mostrar todos los valores posibles en una variable de tipo
int.
*/

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putnbr(int n)
{
	if ((n >= -2147483648) || (n <= 2147483647))
	{
		if (n == -2147483648)
		{
			ft_putchar('-');
			ft_putchar('2');
			ft_putnbr(147483648);
		}
		else if (n > 9)
		{
			ft_putnbr(n / 10);
			ft_putnbr(n % 10);
		}
		else if (n < 0 && n > -2147483648)
		{
			ft_putchar('-');
			n = (-n);
			ft_putnbr(n);
		}
		else
		{
			ft_putchar(n + '0');
		}
	}	
}
/*
int	main(void)
{
	ft_putnbr(2147483647);
	return (0);
}
*/
