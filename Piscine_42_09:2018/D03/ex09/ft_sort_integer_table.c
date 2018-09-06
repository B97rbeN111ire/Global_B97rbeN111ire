/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_integer_table.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thugueno <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/06 02:26:14 by thugueno          #+#    #+#             */
/*   Updated: 2018/09/06 03:26:23 by thugueno         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void		ft_sort_integer_table(int *tab, int size)
{
	int		i;
	int 	j;
	int		swap;

	i = 1;
	j = 0;
	swap = 0;
	while (i < size)
	{
		if (tab[j] > tab[i])
		{
			swap = tab[j];
			tab[j] = tab [i];
			tab[i] = swap;
			i = 1;
			j = 0;
		}
		else 
		{
			i++;
			j++;
		}
	}
}
