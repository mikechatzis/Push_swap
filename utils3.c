/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils3.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mchatzip <mchatzip@student.42wolfsburg.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/09 16:10:42 by mchatzip          #+#    #+#             */
/*   Updated: 2021/07/15 12:44:48 by mchatzip         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	stackshiftup(int *a, int arglen)
{
	int	i;

	i = 0;
	while (++i < arglen)
	{
		a[i - 1] = a[i];
	}
	a[i - 1] = 0;
}

void	stackshiftdown(int *a, int arglen)
{
	int	i;

	i = arglen;
	while (--i > 0)
	{
		a[i] = a[i - 1];
	}
	a[i] = 0;
}

void	ra(int *a, int arglen, int size)
{
	int	tmp;

	if (size > 1)
	{	
		tmp = a[0];
		stackshiftup(a, arglen);
		a[size - 1] = tmp;
		write(1, "ra\n", 3);
	}
	else
		return ;
}

int	pb(int *a, int *b, int arglen, int sizeA)
{
	stackshiftdown(b, arglen);
	b[0] = a[0];
	stackshiftup(a, arglen);
	sizeA--;
	write(1, "pb\n", 3);
	return (sizeA);
}

int	pa(int *a, int *b, int arglen)
{
	stackshiftdown(a, arglen);
	a[0] = b[0];
	stackshiftup(b, arglen);
	write(1, "pa\n", 3);
	return (arglen);
}
