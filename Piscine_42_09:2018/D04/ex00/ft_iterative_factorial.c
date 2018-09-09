/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thugueno <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/06 11:11:21 by thugueno          #+#    #+#             */
/*   Updated: 2018/09/08 11:42:17 by thugueno         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_iterative_factorial(int nb)
{
	int		result;

	result = 1;
	if (nb == 0)
		return (1);
	if (nb > 12)
		return (0);
	while (nb > 0)
	{
		if (nb <= 12)
		{
			result = result * nb;
			nb--;
		}
	}
	return (result);
}
