/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jde-dios <jde-dios@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/11 21:04:12 by jde-dios          #+#    #+#             */
/*   Updated: 2023/06/13 16:54:52 by jde-dios         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
Escriba una función que intercambie el contenido de dos enteros cuyas
direcciones se pasan como parámetro.
*/

//#include <stdio.h>

void	ft_swap(int *a, int *b)
{
	int	c;

	c = *a;
	*a = *b;
	*b = c;
}
/*
int main(void)
{
	int x = 10;
	int y = 20;

	printf("Antes de ft_swap: x = %d, y = %d\n", x, y);

	ft_swap(&x, &y);

	printf("Después de ft_swap: x = %d, y = %d\n", x, y);

	return 0;
}
*/
