/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jde-dios <jde-dios@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/18 05:36:17 by jde-dios          #+#    #+#             */
/*   Updated: 2023/06/18 11:54:22 by jde-dios         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
Reproducir de manera idéntica el funcionamiento de la función strstr.
*/

#include <stdio.h>

char	*ft_strstr(char *str, char *to_find)
{
	char	*ptr_str;
	char	*ptr_to_find;

	if (*to_find == '\0')
	{
		return (str);
	}
	while (*str != '\0')
	{
		ptr_str = str;
		ptr_to_find = to_find;
		while (*ptr_str == *ptr_to_find && *ptr_str != '\0')
		{
			ptr_str++;
			ptr_to_find++;
		}
		if (*ptr_to_find == '\0')
		{
			return (str);
		}
		str++;
	}
	return (0);
}
/*
int main(void)
{
	char str[] = "Jorge de Dios";
	char to_find[] = "Perez";
	char *result = ft_strstr(str, to_find);
	printf("Cadena encontrada: %s\n", result);
	return (0);
}
*/