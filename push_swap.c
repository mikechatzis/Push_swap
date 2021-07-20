/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mchatzip <mchatzip@student.42wolfsburg.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/08 15:09:33 by mchatzip          #+#    #+#             */
/*   Updated: 2021/07/20 15:23:02 by mchatzip         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "push_swap.h"

int	main(int argc, char **argv)
{
	int		arglen;
	char	**alargv;

	if (argv[1] == NULL)
		return (-1);
	alargv = parseargs(argv);
	arglen = ft_strstrlen(argv) - 1;
	if (!errorcheck(argc, alargv))
	{
		if (!argv[2] && ft_strchr(argv[1], ' '))
			free(alargv);
		return (-1);
	}	
	else
		allaboutalpha(alargv, arglen);
	if (!argv[2] && ft_strchr(argv[1], ' '))
		free(alargv);
	return (1);
}
