/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thugueno <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/02 00:57:30 by thugueno          #+#    #+#             */
/*   Updated: 2018/09/03 16:03:29 by thugueno         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	ft_whilenmbr(long n)
{
	int		i;

	i = 1000000000;
	while (n / i % 10 == 0)
		i = i / 10;
	while (i >= 1)
	{
		ft_putchar((n / i % 10) + '0');
		i = i / 10;
	}
}

void	ft_putnbr(int nb)
{
	long	s_nb;

	s_nb = nb;
	if (s_nb == 0)
		ft_putchar('0');
	else
	{
		if (s_nb < 0)
		{
			ft_putchar('-');
			s_nb = s_nb * -1;
		}
		ft_whilenmbr(s_nb);
	}
}
