/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   processargs.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mchatzip <mchatzip@student.42wolfsburg.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/08 15:18:24 by mchatzip          #+#    #+#             */
/*   Updated: 2021/07/20 15:14:42 by mchatzip         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	setalpha(char **s, int *a)
{
	int	i;

	i = 0;
	while (s[++i])
		a[i - 1] = ft_atoi(s[i]);
	return ;
}

int	*sortalpha(int *a, int arglen)
{
	int	*as;

	as = malloc(arglen * sizeof(int));
	if (as == NULL)
		return (NULL);
	as = ft_memcpyint(as, a, arglen);
	as = sortintarr(as, arglen);
	return (as);
}

int	*matchalpha(int arglen)
{
	int	*as;
	int	i;

	i = 0;
	as = malloc(arglen * sizeof(int));
	if (as == NULL)
		return (NULL);
	while (arglen-- > 0)
	{	
		as[i] = i;
		i++;
	}
	return (as);
}

void	asignalpha(int *a, int *aso, int *asi, int arglen)
{
	int	i;
	int	k;
	int	*af;

	i = 0;
	k = 0;
	af = malloc(arglen * sizeof(int));
	while (i < arglen)
	{
		while (k < arglen)
		{
			if (a[i] == aso[k])
				af[i] = asi[k];
			k++;
		}
		k = 0;
		i++;
	}
	i = -1;
	while (++i < arglen)
		a[i] = af[i];
	free(af);
	return ;
}

int	alphaissorted(int *a, int arglen)
{
	int	i;
	int	k;

	i = 0;
	k = 0;
	while (i < arglen)
	{
		while (++k < arglen)
		{
			if (a[i] > a[k])
				return (0);
		}
		i++;
		k = i;
	}
	return (1);
}
