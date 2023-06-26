/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jde-dios <jde-dios@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/19 11:06:43 by jde-dios          #+#    #+#             */
/*   Updated: 2023/06/19 22:36:36 by jde-dios         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
Atoi!
Escriba una función que convierta el principio de la cadena apuntada por str en un entero de tipo int
• str puede empezar con un número arbitrario de espacios (tal y como lo define isspace(3))
• A continuación, str puede ir seguida de un número arbitrario de signos + y de signos -. El signo - hará cambiar el signo del entero devuelto en función del número de signos - y si este es par o impar.
• Para terminar, str tendrá que estar compuesta por dígitos en base 10
• Su función tendrá que leer str, siempre que esta última cumpla con las reglas mencionadas
anteriormente, y tendrá que devolver el número encontrado hasta entonces.
• No debería tener en cuenta los desbordamientos (overflows y underflows), en estos casos el resultado se considera indefinido.
• Puede comparar su función con la verdadera función atoi, quitando la parte de los signos y del overflow.
• He aquí el ejemplo de un programa que muestra el valor devuelto por atoi:
• El prototipo de la función deberá ser el siguiente:
Ejercicio : 03
$>./a.out " ---+--+1234ab567"
-1234
*/

//#include <stdio.h>

int	space(char *str, int *ptr_i)
{
	int	count;
	int	i;

	i = 0;
	count = 1;
	while ((str[i] >= 9 && str[i] <= 13) || str[i] == 32)
		i++;
	while (str[i] && (str[i] == 43 || str[i] == 45))
	{
		if (str[i] == 45)
				count = count * -1;
			i++;
	}
	*ptr_i = i;
	return (count);
}

int	ft_atoi(char *str)
{
	int	i;
	int	result;
	int	count;
	int	sign;

	i = 0;
	result = 0;
	count = 0;
	sign = space(str, &i);
	while (str[i] == ' ')
		i++;
	while (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
			count++;
		i++;
	}
	if (count % 2 != 0)
		sign = -1;
	while (str[i] >= '0' && str[i] <= '9')
	{
		result = result * 10 + (str[i] - '0');
		i++;
	}
	return (result * sign);
}
/*
int	main(void)
{
	char	str[] = " 23";
	int	atoi;
	atoi = ft_atoi(str);
	printf("%d", atoi);
	return (0);
}
*/
