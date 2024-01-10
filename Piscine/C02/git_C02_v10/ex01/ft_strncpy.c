/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ppenuela <ppenuela@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/17 09:36:09 by ppenuela          #+#    #+#             */
/*   Updated: 2023/12/21 14:24:46 by ppenuela         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
//#include <stdio.h>

char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	unsigned int	i;

	i = 0;
	while (i < n && src[i] != '\0')
	{
		dest[i] = src[i];
		++i;
	}
	while (i < n)
	{
		dest[i] = '\0';
		++i;
	}
	return (dest);
}
/*
int	main(void)
{
	char Cadena[]="mensajemaximo";
	char destino[]="*****";
	unsigned int tamano = 6;

	char resultado;

	resultado=*ft_strncpy(destino,Cadena,tamano);

	printf("**********\n");
	//printf("\n%s",resultado);
	printf("\n%p",&destino);
 printf("\n%p",&resultado);	
}*/
