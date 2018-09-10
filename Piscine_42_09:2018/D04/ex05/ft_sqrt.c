/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thugueno <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/08 14:21:09 by thugueno          #+#    #+#             */
/*   Updated: 2018/09/08 15:04:18 by thugueno         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_sqrt(int nb)
{
	int		i;

	i = 1;
	if (nb < 0)
		return (0);
	if (nb > 2147395600)
		return (0);
	while (i * i < nb)
	{
		i++;
	}
	if (i * i > nb)
		return (0);
	return (i);
}