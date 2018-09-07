/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thugueno <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/06 22:58:08 by thugueno          #+#    #+#             */
/*   Updated: 2018/09/06 23:26:00 by thugueno         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int		ft_recursive_power(int nb, int power)
{
	int		nbr;

	nbr = nb;
	if (power < 0)
		return (0);
	if (power == 0)
		return (1);
	if (power > 1)
	{
		nb = ft_recursive_power(nb, power - 1);
		return (nb * nbr);
	}
	return (nb);
}

int		main(void)
{
	int		nb;
	int		power;

	nb = 2;
	power = 16;
	printf("%d", ft_recursive_power(nb, power));
	return (0);
}
