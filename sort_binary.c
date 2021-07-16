/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_binary.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mchatzip <mchatzip@student.42wolfsburg.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/12 13:53:54 by mchatzip          #+#    #+#             */
/*   Updated: 2021/07/15 14:17:31 by mchatzip         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	freeall(int *asi, int *aso)
{
	free(asi);
	free(aso);
}

int	findmaxbits(int max)
{
	int	max_bits;

	max_bits = 0;
	while (max >> max_bits)
		max_bits++;
	return (max_bits);
}

void	sortsmallstack(int *a, int *b, int arglen)
{
	if (arglen == 2)
		sort2(a);
	else if (arglen == 3)
		sort3(a);
	else if (arglen == 4)
		sort4(a, b);
}

void	sortlargestack(int *a, int *b, int arglen, int maxbits)
{
	int	sizeA;
	int	countpb;
	int	bitval;
	int	len;
	int	bitpos;

	sizeA = arglen;
	len = arglen;
	bitpos = -1;
	while (++bitpos < maxbits)
	{
		while (len-- > 0)
		{
			bitval = *a & (1 << bitpos);
			if (!bitval)
				sizeA = pb(a, b, arglen, sizeA);
			else
				ra(a, arglen, sizeA);
		}
		countpb = arglen - sizeA;
		while (countpb-- > 0)
			sizeA = pa(a, b, arglen);
		len = arglen;
		countpb = 0;
	}
}

void	sort(int *a, int arglen, int maxbits)
{
	int	*b;

	b = malloc(arglen * sizeof(int));
	if (arglen < 5)
		sortsmallstack(a, b, arglen);
	else
		sortlargestack(a, b, arglen, maxbits);
	free (b);
}
