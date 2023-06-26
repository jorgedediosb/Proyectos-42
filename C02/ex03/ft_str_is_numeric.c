/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jde-dios <jde-dios@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/14 16:33:39 by jde-dios          #+#    #+#             */
/*   Updated: 2023/06/14 17:25:32 by jde-dios         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
Escriba una función que devuelva 1 si la cadena pasada como parámetro contiene
únicamente dígitos y devuelva 0 si la cadena contiene otro tipo de caracteres.
*/

//#include <stdio.h>

int	ft_str_is_numeric(char *str)
{
	if (*str == '\0')
	{
		return (1);
	}
	while (*str != '\0')
	{
		if ((*str < '0') || (*str > '9'))
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
	char	str[] = "1,2,3,4";
	int	isnumber = ft_str_is_numeric(str);
	printf("Resultado: %d\n", isnumber);
	return (0);
}
*/
