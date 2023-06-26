/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jde-dios <jde-dios@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/20 06:18:49 by jde-dios          #+#    #+#             */
/*   Updated: 2023/06/21 13:24:33 by jde-dios         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
Escriba una función que devuelva la raíz cuadrada entera de un número,
si existe, o 0 si la raíz cuadrada no es entera.
*/

#include <stdio.h>

int	ft_sqrt(int nb)
{
	long	index;
	long	b;

	b = nb;
	if (b <= 0)
	{
		return (0);
	}
	if (b == 1)
	{
		return (1);
	}
	index = 2;
	if (b >= 2)
	{
		while (index * index <= b)
		{
			if (index * index == b)
			{
				return (index);
			}
			index++;
		}
	}
	return (0);
}
/*
int	ft_sqrt(int nb)
{
	int	i;
	int	j;
	int	nb_ret;

	i = 0;
	j = 1;
	nb_ret = 0;
	if (nb < 0)
		return (0);
	while (j <= nb && i < 46340)
	{
		i++;
		j = i * i;
	}
	nb_ret = (i - 1);
	if (nb_ret * nb_ret == nb)
		return (nb_ret);
	else
		return (0);
}
*/
/*
int	ft_sqrt(int nb)
{
	int	sqrt;
	int	previous_sqrt;

	if (nb < 0)
		return (0);
	if (nb == 0 || nb == 1)
		return (nb);
	sqrt = 1;
	previous_sqrt = 0;
	while (sqrt != previous_sqrt)
	{
		previous_sqrt = sqrt;
		sqrt = (sqrt + nb / sqrt) / 2;
	}
	if (sqrt * sqrt == nb)
		return (sqrt);
	else
		return (0);
}
*/
int main(void)
{
	long	number = 250;
	long sqrt = ft_sqrt(number);
	printf("La raiz cuadrada de %ld es: %ld\n", number, sqrt);
	return (0);
}
