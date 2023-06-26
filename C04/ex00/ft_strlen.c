/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jde-dios <jde-diosn@student.42madrid.com>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/18 13:20:12 by jde-dios          #+#    #+#             */
/*   Updated: 2023/06/18 13:31:15 by jde-dios         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
Escriba una función que cuente el número de caracteres de una cadena de
caracteres y que devuelva el número encontrado.
*/

//#include <stdio.h>

int	ft_strlen(char *str)
{
	int	counter;

	counter = 0;
	while (*str != '\0')
	{
		counter++;
		str++;
	}
	return (counter);
}
/*
int	main(void)
{
	char *str = "Hola";
	int	counter;
	counter = ft_strlen(str);
	printf("Longitud str: %d\n", counter);
	return (0);
}
*/
