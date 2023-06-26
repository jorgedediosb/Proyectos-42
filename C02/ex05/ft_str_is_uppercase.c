/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_uppercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jde-dios <jde-dios@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/14 19:52:43 by jde-dios          #+#    #+#             */
/*   Updated: 2023/06/14 20:18:16 by jde-dios         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
Escriba una función que devuelva 1 si la cadena pasada como parámetro contiene
únicamente caracteres alfabéticos en mayúsculas y devuelva 0 si la cadena
contiene otro tipo de caracteres.
*/

//#include <stdio.h>

int	ft_str_is_uppercase(char *str)
{
	if (*str == '\0')
	{
		return (1);
	}
	while (*str != '\0')
	{
		if (*str < 'A' || *str > 'Z')
		{
			return (0);
		}
		str++;
	}
	return (1);
}
/*
int	main(void)
{
	char str[] = "ABCD";
	printf("%d\n", ft_str_is_uppercase(str));
	return (0);
}
*/
