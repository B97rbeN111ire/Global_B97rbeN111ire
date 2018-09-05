/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_combn.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thugueno <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/01 04:44:00 by thugueno          #+#    #+#             */
/*   Updated: 2018/09/05 17:22:58 by thugueno         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c);

int		ft_modulo(int n)
{
	int		mod;
	int		i;

	i = 0;
	mod = 1;
	while (i < n)
	{
		mod *= 10;
		i++;
	}
	return (mod);
}

void	ft_send(int i, int n)
{
	int		div;
	int		m;

	m = n;
	div = (ft_modulo(n)) / 10;
	while (n > 0)
	{
		ft_putchar((i / div) % 10 + 48);
		if (div >= 10)
			div /= 10;
		n--;
	}
	if (i != 123456789 % ft_modulo(m))
	{
		ft_putchar(',');
		ft_putchar(' ');
	}
}

int		ft_check(int i, int n)
{
	int		div;

	div = 1;
	while (n > 0)
	{
		if ((i / div) % 10 > (i / (div * 10)) % 10)
		{
			div *= 10;
			n--;
		}
		else
			return (0);
	}
	return (1);
}

void	ft_print_combn(int n)
{
	int		i;
	int		limit;

	i = 0;
	limit = 123456789 % ft_modulo(n);
	while (i <= limit)
	{
		if (ft_check(i, n) != 0)
		{
			ft_send(i, n);
		}
		i++;
	}
}
