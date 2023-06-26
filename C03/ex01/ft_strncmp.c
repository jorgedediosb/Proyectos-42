/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jde-dios <jde-dios@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/18 03:11:20 by jde-dios          #+#    #+#             */
/*   Updated: 2023/06/20 02:14:42 by jde-dios         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
Reproducir de manera idéntica el funcionamiento de la función strncmp.
*/

//#include <stdio.h>

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int	x;

	x = 0;
	while (x < n)
	{
		if (s1[x] != s2[x])
		{
			return (s1[x] - s2[x]);
		}
		else if (s1[x] == '\0')
		{
			return (0);
		}
		x++;
	}
	return (0);
}
/*
int	main(void)
{
	char str1[] = "pepa";
	char str2[] = "pep";
	int	result = ft_strncmp(str1, str2, 4);
	printf("Resultado: %d\n", result);
	return (0);
}
*/
