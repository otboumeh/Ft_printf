/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: otboumeh <otboumeh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/30 18:55:15 by otboumeh          #+#    #+#             */
/*   Updated: 2024/05/01 15:12:38 by otboumeh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include <stdio.h>

int main(void)
{
	// Solo text
/* 	 ft_printf("Hello ana Otmane");
	printf("\n");
	printf("Hello ana Otmane");
	printf("\n");  */
 
	//%c
	/* char c = 'K';
	ft_printf("Hello ana Otmane%c",c);
	printf("\n");
	printf("Hello ana Otmane%c",c);
	printf("\n");  */


	// %%
	/* ft_printf("%%");
	printf("\n");
	printf("%%"); 
	printf("\n"); */

    //%s
  /*   char s[] = "";
	ft_printf("%s",s);
	printf("\n");
	printf("%s",s);
	printf("\n"); */
	
	//%i
/* 	int i = -55;
	ft_printf("%i",i);
	printf("\n");
	printf("%i",i);
	printf("\n");  */

	//%d
	/* int i = 2147483647;
	ft_printf("%d",i);
	printf("\n");
	printf("%d",i);
	printf("\n");  */
	
	//%u
	/* int i = -552255;
	ft_printf("%u",i);
	printf("\n");
	printf("%u",i);
	printf("\n");  */
	
		//%x && %X
	/*  int i = 5555;
	ft_printf("%X",i);
	printf("\n");
	printf("%X",i);
	printf("\n");    */
	 
	 //%p
	void *p = "17";
	int str = 17;
	ft_printf("OUR ft_printf  %p\n", p);
	printf("\n");
	printf("ORIGINAL printf  %p\n", p); 
}