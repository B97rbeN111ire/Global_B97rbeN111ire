/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thugueno <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/06 22:35:53 by thugueno          #+#    #+#             */
/*   Updated: 2018/09/06 22:56:33 by thugueno         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_iterative_power(int nb, int power)
{
	int		nbr;

	nbr = nb;
	if (power < 0)
		return (0);
	if (power == 0)
		return (0);
	while (power > 1)
	{
		nbr = nbr * nb;
		power--;
	}
	return (nbr);
}
