/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_takes_place.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thugueno <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/06 18:02:13 by thugueno          #+#    #+#             */
/*   Updated: 2018/09/06 21:16:14 by thugueno         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>

void		ft_24_11(int h, int h2)
{
	if (h == 24)
		h -= h;
	h2 = h + 1;
	printf(" %d.00 A.M. AND %d.00 A.M.\n", h, h2);
}

void		ft_13_22(int h, int h2)
{
	h -= 12;
	h2 = h + 1;
	printf(" %d.00 P.M. AND %d.00 P.M.\n", h, h2);
}

void		ft_23_00(int h, int h2)
{
	h2 = h - h;
	h = h - 12;
	printf(" %d.00 P.M. AND %d.00 A.M.\n", h, h2);
}

void		ft_12_13(int h, int h2)
{
	h2 = h - 11;
	printf(" %d.00 A.M. AND %d.00 P.M.\n", h, h2);
}

void		ft_takes_place(int hour)
{
	int		h2;
	int		h;

	h = hour;
	h2 = h + 1;
	write(1, "THE FOLLOWING TAKES PLACE BETEWEEN", 34);
	if (hour == 12)
		ft_12_13(h, h2);
	if (hour == 23)
		ft_23_00(h, h2);
	if (hour <= 11 || hour == 24)
		ft_24_11(h, h2);
	if (hour >= 13 && hour <= 22)
		ft_13_22(h, h2);
}
