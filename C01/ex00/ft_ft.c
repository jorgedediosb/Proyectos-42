/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ft.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jde-dios <jde-dios@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/11 20:41:12 by jde-dios          #+#    #+#             */
/*   Updated: 2023/06/13 16:06:29 by jde-dios         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
Escriba una función que reciba como parámetro un puntero a un int y dé al int
el valor 42.
*/

//#include <stdio.h>

void	ft_ft(int *nbr)
{
	*nbr = 42;
}
/*
int main(void)
{
	int x = 0;
	printf("Antes de llamar a ft_ft: %d\n", x);

	ft_ft(&x);

	printf("Después de llamar a ft_ft: %d\n", x);

	return 0;
}
*/
