/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_params.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jde-dios <jde-dios@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/21 11:25:12 by jde-dios          #+#    #+#             */
/*   Updated: 2023/06/21 20:04:28 by jde-dios         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
Escriba un programa que muestre los argumentos recibidos en la línea de comandos,
clasificados según el orden ASCII.
• Debe mostrar todos los argumentos, salvo argv[0].
• Un argumento por línea.
*/

#include <unistd.h>

int	main(int argc, char **argv)
{
	int	c;
	int	d;

	c = argc -1;
	d = 0;
	if (argc > 1)
	{
		while (c > 0)
		{
			d = 0;
			while (argv[c][d] != '\0')
			{
				write(1, &argv[c][d], 1);
				d++;
			}
			write(1, "\n", 1);
			c--;
		}
	}
	return (0);
}
