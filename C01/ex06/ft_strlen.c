/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jde-dios <jde-dios@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/12 13:21:02 by jde-dios          #+#    #+#             */
/*   Updated: 2023/06/14 09:35:15 by jde-dios         ###   ########.fr       */
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
	char *str = "Veo luz al final del tuneqql";
	printf("%s\n", str);
	
	int	length;
	length = ft_strlen(str);
	printf("Longitud: %d\n", length);
	
	return 0;
}
*/
