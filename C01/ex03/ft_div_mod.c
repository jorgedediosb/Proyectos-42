/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_div_mod.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jde-dios <jde-dios@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/11 21:17:57 by jde-dios          #+#    #+#             */
/*   Updated: 2023/06/13 17:11:52 by jde-dios         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
Esta función divide los dos parámetros a y b y almacena el resultado en el int apuntado por div.
También almacena el resto de la división de a y b en el int apuntado por mod.
*/

//#include <stdio.h>

void	ft_div_mod(int a, int b, int *div, int *mod)
{
	*div = a / b;
	*mod = a % b;
}
/*
int	main(void)
{
	int	a;
	int	b;
	int	div;
	int	mod;

	a = 20;
	b = 5;
	div = 0;
	mod = 0;

	printf("Antes de fn: \nDiv: %d\nMod: %d\n", a, b);

	ft_div_mod(a, b, &div, &mod);

	printf("Después de fn: \nDiv: %d\nMod: %d\n", div, mod);

}
*/
