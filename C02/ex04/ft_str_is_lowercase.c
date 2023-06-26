/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_lowercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jde-dios <jde-dios@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/14 17:47:45 by jde-dios          #+#    #+#             */
/*   Updated: 2023/06/14 18:42:09 by jde-dios         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
Escriba una función que devuelva 1 si la cadena pasada como parámetro contiene
únicamente caracteres alfabéticos en minúsculas y devuelva 0 si la cadena
contiene otro tipo de caracteres.
*/

//#include <stdio.h>

int	ft_str_is_lowercase(char *str)
{
	if (*str == '\0')
	{
		return (1);
	}
	while (*str != '\0')
	{
		if (*str < 'a' || *str > 'z')
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
	char str[] = "1";
	printf("%d\n", ft_str_is_lowercase(str));
	return (0);
}
*/
