/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_params.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jde-dios <jde-dios@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/21 11:18:40 by jde-dios          #+#    #+#             */
/*   Updated: 2023/06/22 10:33:24 by jde-dios         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
Escriba un programa que muestre los argumentos recibidos en la línea de comandos.
• Uno por línea, en orden inverso al de la línea de comandos.
• Debe mostrar todos los argumentos, salvo argv[0].
*/

#include <unistd.h>

int	main(int argc, char **argv)
{
	int	c;
	int	d;

	c = 1;
	d = 0;
	if (argc > 1)
	{
		while (c < argc)
		{
			d = 0;
			while (argv[c][d] != '\0')
			{
				write(1, &argv[c][d], 1);
				d++;
			}
			write(1, "\n", 1);
			c++;
		}
	}
	return (0);
}
