/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ppenuela <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/17 10:41:53 by ppenuela          #+#    #+#             */
/*   Updated: 2023/12/18 12:24:06 by ppenuela         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>
#include <unistd.h>

int	ft_define_flag(int bandera, int contador)
{
	if (bandera == contador)
		bandera = 1;
	else
		bandera = 0;
	if (contador == 0)
		bandera = 1;
	return (bandera);
}

int	ft_str_is_printable(char *str)
{
	int	i;
	int	k;
	int	printable;
	int	flag;

	i = 0;
	flag = 0;
	while (str[i] != '\0')
	{
		k = 0;
		printable = 32;
		while (k < 97)
		{
			if (str[i] == printable)
				++flag;
			++printable;
			++k;
		}
		++i;
	}
	return (ft_define_flag(flag, i));
}
/*
int	main(void)
{
	char  prueba[] = {32};
	char  prueba2[] = {125};
	char  prueba3[] = {127};
	char  prueba4[] = {128};
	int salida;
	salida = ft_str_is_printable(prueba);
	printf("%s %d \n", prueba, salida);
	salida = ft_str_is_printable(prueba2);
	printf("%s %d \n", prueba2, salida);
	salida = ft_str_is_printable(prueba3);
        printf("%d \n",  salida);
	salida = ft_str_is_printable(prueba4);
        printf("%d \n", salida);
}*/
