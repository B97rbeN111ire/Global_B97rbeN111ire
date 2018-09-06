/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thugueno <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/06 14:27:57 by thugueno          #+#    #+#             */
/*   Updated: 2018/09/06 15:06:24 by thugueno         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void		ft_putchar(char c);

void		ft_print_comb2(void)
{
	int		i;

	i = 0;
	while (i <= 9899)
	{
		while (i % 100 > i / 100)
		{
			ft_putchar((i / 1000) + 48);
			ft_putchar((i / 100 % 10) + 48);
			ft_putchar(' ');
			ft_putchar((i / 10 % 10) + 48);
			ft_putchar((i % 10) + 48);
			if (i != 9899)
			{
				ft_putchar(',');
				ft_putchar(' ');
			}
			i++;
		}
		i++;
	}
}
