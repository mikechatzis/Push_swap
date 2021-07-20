/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checkargs.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mchatzip <mchatzip@student.42wolfsburg.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/07 13:38:50 by mchatzip          #+#    #+#             */
/*   Updated: 2021/07/20 15:19:31 by mchatzip         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"
#include <stdio.h>

int	checkdoubles(char **s)
{
	int	i;
	int	k;

	i = -1;
	k = 0;
	while (s[++i] != NULL)
	{
		while (s[++k] != NULL)
		{
			if (!ft_strcmp(s[i], s[k]))
			{
				write(2, "Error\n", 6);
				return (0);
			}
		}
		k = i + 1;
	}
	return (1);
}

int	checkinvalidarg(char **s)
{
	int	i;
	int	k;

	i = -1;
	k = 0;
	while (s[++k])
	{
		while (s[k][++i] || (!s[k][++i] && s[k][i + 1]))
		{
			if (s[k][i] == '-' && ft_isdigit(s[k][i - 1]))
			{
				write(2, "Error\n", 6);
				return (0);
			}
			if (!findchr(s[k][i], "-0123456789") || ((!s[k][i]) && s[k][i + 1]))
			{
				write(2, "Error\n", 6);
				return (0);
			}
		}
		i = -1;
	}	
	return (1);
}

int	checkifintmaxmin(char **s)
{
	int		i;
	long	num;

	i = 0;
	while (s[++i])
	{
		num = ft_atol(s[i]);
		if (num < INT_MIN || num > INT_MAX)
		{
			write(2, "Error\n", 6);
			return (0);
		}
	}
	return (1);
}

char	**parseargs(char **s)
{
	char	**p;
	char	*cat;
	char	*temp;

	temp = ft_strjoin(s[0], " ");
	cat = ft_strjoin(temp, s[1]);
	free(temp);
	if (s[2])
	{
		free(cat);
		return (s);
	}
	else if (ft_strchr(s[1], ' '))
	{
		p = ft_split(cat, ' ');
		free(cat);
		return (p);
	}
	free(cat);
	return (s);
}

int	errorcheck(int argc, char **s)
{
	if (argc == 1)
	{
		write(2, "Error\n", 6);
		return (0);
	}
	if (!checkinvalidarg(s))
		return (0);
	if (!checkifintmaxmin(s))
		return (0);
	if (!checkdoubles(s))
		return (0);
	while (*s)
	{
		if (!s[0])
		{
			write(2, "Error\n", 6);
			return (0);
		}
		s++;
	}
	return (1);
}
