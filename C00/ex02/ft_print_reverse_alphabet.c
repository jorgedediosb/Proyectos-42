/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_reverse_alphabet.c                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jde-dios <jde-dios@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/07 12:23:29 by jde-dios          #+#    #+#             */
/*   Updated: 2023/06/09 12:10:57 by jde-dios         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
Escriba una función que muestre el alfabeto en minúsculas sobre una sola línea,
en orden decreciente, a partir de la letra ’z’.
*/

#include <unistd.h>

void	ft_print_reverse_alphabet(void)
{
	char	i;

	i = 'z';
	while (i >= 'a')
	{
		write(1, &i, 1);
		i--;
	}
}
/*
int	main(void)
{
	ft_print_reverse_alphabet();
	return(0);
}
*/
