/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jde-dios <jde-dios@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/08 12:39:01 by jde-dios          #+#    #+#             */
/*   Updated: 2023/06/11 21:01:39 by jde-dios         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// Escriba una función que muestre el carácter pasado como parámetro.

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}
/*
int	main(void)
{
	ft_putchar('c');
	return (0);
}
*/
