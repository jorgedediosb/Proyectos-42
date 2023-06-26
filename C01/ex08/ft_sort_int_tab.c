/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jde-dios <jde-dios@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/14 09:57:31 by jde-dios          #+#    #+#             */
/*   Updated: 2023/06/14 10:17:42 by jde-dios         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
Escriba una función que ordene una tabla de enteros en orden creciente.
Los parámetros son un puntero a entero y el número de enteros de la tabla.
*/

#include <unistd.h>

void	change(int *a, int *b)
{
	int	c;

	c = *a;
	*a = *b;
	*b = c;
}

void	ft_sort_int_tab(int *tab, int size)
{
	int	x;
	int	y;

	x = 0;
	y = 0;
	while (x < size)
	{
		while (y <= size + 1)
		{
			if (y < size - 1)
			{
				if (tab[y] > tab[y - 1])
				{
					change (&tab[y], &tab[y - 1]);
				}
			}
			y++;
		}
		x++;
	}
}
