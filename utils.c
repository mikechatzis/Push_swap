/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mchatzip <mchatzip@student.42wolfsburg.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/08 14:41:25 by mchatzip          #+#    #+#             */
/*   Updated: 2021/07/09 16:07:57 by mchatzip         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	ft_strcmp(char *s1, char *s2)
{
	int	i;

	i = 0;
	while (s1[i] == s2[i] && s1[i] != '\0' && s2[i] != '\0')
		i++;
	return (s1[i] - s2[i]);
}

long	ft_atol(const char *str)
{
	long	num;
	long	sign;

	num = 0;
	sign = 1;
	while (*str == ' ' || *str == '\t' || *str == '\n'
		|| *str == '\v' || *str == '\f' || *str == '\r')
		str++;
	if (*str == '-' || *str == '+')
	{
		sign = 1 - 2 * (*str++ == '-');
	}
	while (*str >= '0' && *str <= '9')
		num = 10 * num + (*str++ - '0');
	return (num * sign);
}

size_t	ft_strstrlen(char **c)
{
	size_t	len;
	int		i;

	len = 0;
	i = -1;
	while (c[++i])
		len++;
	return (len);
}

int	*ft_memcpyint(int *str, const int *c, size_t n)
{
	int	k;

	k = 0;
	while (n > 0)
	{
		str[k] = c[k];
		k++;
		n--;
	}
	return (str);
}

int	*sortintarr(int *as, int arglen)
{
	int	i;
	int	tmp;
	int	k;

	i = 0;
	k = 0;
	while (i < arglen)
	{
		while (++k < arglen)
		{
			if (as[i] > as[k])
			{
				tmp = as[i];
				as[i] = as[k];
				as[k] = tmp;
			}
		}
		i++;
		k = i;
	}
	return (as);
}
