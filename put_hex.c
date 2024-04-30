/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   put_hex.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: otboumeh <otboumeh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/30 14:56:33 by otboumeh          #+#    #+#             */
/*   Updated: 2024/04/30 16:35:26 by otboumeh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	puthexnbr(size_t arg, int count, char x_type)
{
	if (arg >= 16)
	{
		count = puthexnbr(arg / 16, count, x_type);
	}
	if ((x_type == 'x') || (x_type == 'p'))
		count = print_char("0123456789abcdef"[arg % 16], count);
	if (x_type == 'X')
		count = print_char("0123456789ABCDEF"[arg % 16], count);
	return (count);
}
