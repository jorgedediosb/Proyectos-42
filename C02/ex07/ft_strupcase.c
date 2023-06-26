/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strupcase.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jde-dios <jde-dios@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/14 20:57:03 by jde-dios          #+#    #+#             */
/*   Updated: 2023/06/17 18:51:31 by jde-dios         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
Escriba una función que ponga cada letra en mayúscula.
*/

//#include <stdio.h>

char	*ft_strupcase(char *str)
{
	int	x;

	x = 0;
	while (str[x] != '\0')
	{
		if (str[x] >= 'a' && str[x] <= 'z')
		{
			str[x] = str [x] - 'a' + 'A';
		}
		x++;
	}
	return (str);
}
/*
int	main(void)
{
	char str[] = "Me muero de sueño!";
	printf("Original: %s\n", str);
	printf("Mayúsculas: %s\n", ft_strupcase(str));
	return (0);
}
*/
