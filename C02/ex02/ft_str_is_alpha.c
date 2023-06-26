/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jde-dios <jde-dios@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/14 15:37:17 by jde-dios          #+#    #+#             */
/*   Updated: 2023/06/17 18:47:48 by jde-dios         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
Escriba una función que devuelva 1 si la cadena pasada como parámetro contiene
únicamente caracteres alfabéticos y devuelva 0 si la cadena contiene otro tipo
de caracteres.
*/

//#include <stdio.h>

int	ft_str_is_alpha(char *str)
{
	if (*str == '\0')
	{
		return (1);
	}
	while (*str != '\0')
	{
		if ((*str < 'a' || *str > 'z') && (*str < 'A' || *str > 'Z'))
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
	char	str[] = "Tengohambre";
	int	isalpha = ft_str_is_alpha(str);
	printf("Resultado: %d\n", isalpha);
	return (0);
}
*/
