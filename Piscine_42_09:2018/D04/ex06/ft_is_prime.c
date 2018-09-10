/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_prime.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thugueno <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/08 15:13:03 by thugueno          #+#    #+#             */
/*   Updated: 2018/09/10 11:33:45 by thugueno         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_is_prime(int nb)
{
	int		i;

	i = 1;
	if (nb <= 1)
		return (0);
	if (nb == 2)
		return (1);
	if (nb % 2 == 0)
		return (0);
	if (nb < 2147395600)
	{
		while (i * i < nb)
			i++;
	}
	else
		i = 46342;
	while (i >= 3)
	{
		if (nb % i > 0)
			i--;
		else
			return (0);
	}
	return (1);
}
