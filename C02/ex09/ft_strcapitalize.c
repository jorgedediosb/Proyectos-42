/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jde-dios <jde-dios@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/15 12:12:13 by jde-dios          #+#    #+#             */
/*   Updated: 2023/06/17 17:19:22 by jde-dios         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
Escriba una función que ponga en mayúscula la primera letra de cada palabra y
el resto de la palabra en minúsculas.
Una palabra es una secuencia de caracteres alfanuméricos.
*/

//#include <stdio.h>

char	*ft_strcapitalize(char *str)
{
	int	index;
	int	start;

	index = 0;
	start = 1;
	while (str[index] != '\0')
	{
		if ((str[index] >= 'a' && str[index] <= 'z')
			|| (str[index] >= 'A' && str[index] <= 'Z'))
		{
			if (start && str[index] >= 'a' && str[index] <= 'z')
				str[index] = str[index] - 32;
			else if (!start && str[index] >= 'A' && str[index] <= 'Z')
				str[index] = str[index] + 32;
			start = 0;
		}
		else if (str[index] >= '0' && str[index] <= '9')
			start = 0;
		else
			start = 1;
		index++;
	}
	return (str);
}
/*
int	main(void)
{
	char	str[] = "salut, coent tu vas ? 42ms nte-deux; cinqte+et+un";
	ft_strcapitalize(str);

	printf("Resultado: %s\n", str);
	return (0);
}
*/
