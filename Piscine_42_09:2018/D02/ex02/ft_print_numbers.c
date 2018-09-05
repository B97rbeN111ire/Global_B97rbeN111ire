/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_numbers.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thugueno <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/30 23:31:26 by thugueno          #+#    #+#             */
/*   Updated: 2018/08/31 16:46:50 by thugueno         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_putchar(char c);

void	ft_print_numbers(void)
{
	char numbr;

	numbr = '0';
	while (numbr <= '9')
	{
		ft_putchar(numbr);
		numbr++;
	}
}
