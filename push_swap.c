/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mchatzip <mchatzip@student.42wolfsburg.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/08 15:09:33 by mchatzip          #+#    #+#             */
/*   Updated: 2021/07/16 10:35:28 by mchatzip         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "push_swap.h"

int	main(int argc, char **argv)
{
	int	*a;
	int	arglen;

	if (argv[1] == NULL)
	{
		write(2, "Error\n", 6);
		return (-1);
	}
	argv = parseargs(argv);
	arglen = ft_strstrlen(argv) - 1;
	if (!errorcheck(argc, argv))
		return (-1);
	else
	{
		a = allaboutalpha(argv, arglen);
		free(a);
	}
	return (1);
}
