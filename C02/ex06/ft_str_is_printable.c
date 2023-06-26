/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jde-dios <jde-dios@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/14 20:09:53 by jde-dios          #+#    #+#             */
/*   Updated: 2023/06/14 20:34:06 by jde-dios         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
Escriba una función que devuelva 1 si la cadena pasada como parámetro contiene
únicamente caracteres imprimibles y devuelva 0 si la cadena contiene otro tipo
de caracteres.
*/

//#include <stdio.h>

int	ft_str_is_printable(char *str)
{
	if (*str == '\0')
	{
		return (1);
	}
	while (*str != '\0')
	{
		if (*str < 32 || *str > 126)
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
	char str[] = "Tengo ~~~ hambre";
	printf("%d\n", ft_str_is_printable(str));
	return (0);
}
*/
