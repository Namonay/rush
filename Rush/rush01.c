/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vvaas <vvaas@students.42angouleme.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/16 15:56:21 by vvaas             #+#    #+#             */
/*   Updated: 2022/07/16 15:56:25 by vvaas            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
	{
	write(1, &c, 1);
}

void	rush(int x, int y)
{
	int	xi;
	int	yi;

	yi = 0;
	while (++yi <= y)
	{
		xi = 0;
		while (++xi <= x)
		{
			if ((yi < y && yi > 1) && (xi < x && xi > 1))
				ft_putchar(' ');
			if (((yi == 1 || yi == y) && (xi > 1 && xi < x))
				|| ((xi == 1 || xi == x) && (yi > 1 && yi < y)))
				ft_putchar('*');
			if ((yi == 1 && xi == 1) || (yi == y && xi == x && y > 1 && x > 1))
				ft_putchar('/');
			if ((yi == 1 && xi == x && x > 1) || (xi == 1 && yi == y && y > 1))
				ft_putchar('\\');
		}
		ft_putchar('\n');
	}
}