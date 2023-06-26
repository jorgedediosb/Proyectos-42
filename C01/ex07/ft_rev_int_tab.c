/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jde-dios <jde-dios@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/12 16:39:49 by jde-dios          #+#    #+#             */
/*   Updated: 2023/06/14 09:42:38 by jde-dios         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
Escriba una función que invierta el orden de los elementos de una tabla de
enteros.
Los parámetros son un puntero a entero y el número de enteros de la tabla.
*/

//#include <stdio.h>

void	changeposition(int *a, int *b)
{
	int	c;

	c = *a;
	*a = *b;
	*b = c;
}

void	ft_rev_int_tab(int *tab, int size)
{
	int	x;
	int	y;

	x = 0;
	y = size - 1;
	while (x < size / 2)
	{
		changeposition(&tab[x], &tab[y]);
		x++;
		y--;
	}
}
/*
int	main(void)
{
    int tab[] = {0,1,2,3,4,5};
	int size = 6;
	
	ft_rev_int_tab(tab, size);

	printf("Array invertido:\n");

	int	i;
	i = 0;
	while (i < size)
	{
		printf("%d", tab[i]);
		i++;
	}
	return 0;
}
*/
