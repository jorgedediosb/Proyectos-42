/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_div_mod.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jde-dios <jde-dios@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/12 09:32:27 by jde-dios          #+#    #+#             */
/*   Updated: 2023/06/13 17:17:51 by jde-dios         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
Esta función divide los int apuntados por a y b.
El resultado de la división se almacena en el int apuntado por a.
El resultado del resto de la división se almacena en el int apuntado por b
*/

//#include <stdio.h>

void	ft_ultimate_div_mod(int *a, int *b)
{
	int	div;
	int	mod;

	div = *a / *b;
	mod = *a % *b;
	*a = div;
	*b = mod;
}
/*
int	main(void)
{
	int a;
	int b;
	a = 20;
	b = 5;

	printf("Valores división:\n%d, %d\n", a, b);
	ft_ultimate_div_mod(&a, &b);
	printf("El resultado es:\ndiv:%d\nmod:%d", a, b);
}
*/
