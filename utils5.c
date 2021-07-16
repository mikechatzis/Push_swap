/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils5.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mchatzip <mchatzip@student.42wolfsburg.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/15 10:15:18 by mchatzip          #+#    #+#             */
/*   Updated: 2021/07/15 12:37:59 by mchatzip         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	rb(int *b, int arglen, int size)
{
	int	tmp;

	if (size > 1)
	{	
		tmp = b[0];
		stackshiftup(b, arglen);
		b[size - 1] = tmp;
		write(1, "rb\n", 3);
	}
	else
		return ;
}

void	sb(int *b)
{
	int	tmp;

	tmp = b[0];
	b[0] = b[1];
	b[1] = tmp;
	write(1, "sb\n", 3);
}

void	setmin(int *a)
{
	int	i;

	i = 1;
	while (++i < 4)
	{
		if (a[0] > a[1])
		{
			sa(a);
			i = 1;
		}
		if (a[0] > a[i])
		{
			ra(a, 4, 4);
			i = 1;
		}
	}
}

void	setmax(int *a)
{
	int	i;

	i = 3;
	while (--i >= 0)
	{
		if (a[3] < a[i])
		{
			rra(a, 4, 4);
			sa(a);
			i = 3;
		}
	}
}
