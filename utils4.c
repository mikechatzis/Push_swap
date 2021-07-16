/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils4.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mchatzip <mchatzip@student.42wolfsburg.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/15 10:15:18 by mchatzip          #+#    #+#             */
/*   Updated: 2021/07/16 10:29:15 by mchatzip         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	sa(int *a)
{
	int	tmp;

	tmp = a[0];
	a[0] = a[1];
	a[1] = tmp;
	write(1, "sa\n", 3);
}

void	rra(int *a, int arglen, int size)
{
	int	tmp;

	if (size > 1)
	{	
		tmp = a[size - 1];
		stackshiftdown(a, arglen);
		a[0] = tmp;
		write(1, "rra\n", 4);
	}
	else
		return ;
}

void	sort2(int *a)
{
	if (a[0] > a[1])
		sa(a);
	else
		return ;
}

void	sort3(int *a)
{
	if (a[0] > a[1] && a[1] > a[2])
	{
		sa(a);
		rra(a, 3, 3);
	}
	else if (a[0] < a[1] && a[1] > a[2] && a[0] < a[2])
	{
		rra(a, 3, 3);
		sa(a);
	}
	else if (a[0] < a[1] && a[1] > a[2] && a[0] > a[2])
		rra(a, 3, 3);
	else if (a[0] > a[1] && a[1] < a[2] && a[0] > a[2])
		ra(a, 3, 3);
	else if (a[0] > a[1] && a[1] < a[2] && a[0] < a[2])
		sa(a);
}

void	sort4(int *a, int *b)
{
	setmin(a);
	setmax(a);
	if (a[1] > a[2])
	{
		pb(a, b, 4, 4);
		pb(a, b, 4, 4);
		pb(a, b, 4, 4);
		sb(b);
		pa(a, b, 4);
		pa(a, b, 4);
		pa(a, b, 4);
	}
}
