/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thugueno <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/10 10:29:49 by thugueno          #+#    #+#             */
/*   Updated: 2018/09/10 12:21:16 by thugueno         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void		ft_putchar(char c);

void		ft_putnbr(int nb)
{
	unsigned int		nbr;

	if (nb < 0)
	{
		ft_putchar('-');
		nb *= -1;
	}
	nbr = nb;
	if (nbr > 9)
		ft_putnbr(nbr / 10);
	ft_putchar((nbr % 10) + 48);
}
