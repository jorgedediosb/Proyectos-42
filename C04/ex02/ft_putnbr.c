/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jde-dios <jde-dios@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/18 16:22:57 by jde-dios          #+#    #+#             */
/*   Updated: 2023/06/18 17:27:36 by jde-dios         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
Escriba una función que muestre un número pasado como parámetro. La función
deberá ser capaz de mostrar todos los valores posibles en una variable de tipo int.
*/

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putnbr(int nb)
{
	if ((nb >= -2147483648) || (nb <= 2147483647))
	{
		if (nb == -2147483648)
		{
			ft_putchar('-');
			ft_putchar('2');
			ft_putnbr(147483648);
		}
		else if (nb > 9)
		{
			ft_putnbr(nb / 10);
			ft_putnbr(nb % 10);
		}
		else if (nb < 0 && nb > -2147483648)
		{
			ft_putchar('-');
			nb = (-nb);
			ft_putnbr(nb);
		}
		else
		{
			ft_putchar(nb + '0');
		}
	}
}
/*
int	main(void)
{
	ft_putnbr(-2147483648);
	return (0);
}
*/
