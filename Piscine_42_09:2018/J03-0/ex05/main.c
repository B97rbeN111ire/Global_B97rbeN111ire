/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thugueno <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/03 00:48:43 by thugueno          #+#    #+#             */
/*   Updated: 2018/09/03 01:04:17 by thugueno         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void		ft_putstr(char *str);

void		ft_putchar(char c)
{
	write(1, &c, 1);
}

int		main(void)
{
	char	*str;

	str = "GROSSE BITE                          b";
	ft_putstr(str);
	return(0);
}
