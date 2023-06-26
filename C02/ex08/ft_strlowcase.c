/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlowcase.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jde-dios <jde-dios@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/14 21:09:24 by jde-dios          #+#    #+#             */
/*   Updated: 2023/06/15 11:26:22 by jde-dios         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
Escriba una función que ponga cada letra en minúscula.
*/

//#include <stdio.h>

char	*ft_strlowcase(char *str)
{
	int	x;

	x = 0;
	while (str[x] != '\0')
	{		
		if (str[x] >= 'A' && str[x] <= 'Z')
		{
			str[x] = str[x] + 32;
		}
		x++;
	}
	return (str);
}
/*
int	main(void)
{
	char str[] = "ME DUERMO";
	printf("Original: %s\n", str);
	printf("Minúsculas: %s\n", ft_strlowcase(str));
	return (0);
}
*/
