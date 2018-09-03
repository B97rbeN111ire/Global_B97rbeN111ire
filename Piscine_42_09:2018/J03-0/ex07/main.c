/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thugueno <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/03 05:11:04 by thugueno          #+#    #+#             */
/*   Updated: 2018/09/03 14:03:33 by thugueno         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>


void	ft_putchar(char c)
{
	write(1, &c, 1);
}

char *ft_strrev(char *str);

void	ft_putstr(char *str);

int		main(void)
{
	char	str[] = "dyvwr";

	ft_putstr(str);
	ft_putchar('\n');
	ft_strrev(str);
//	str[0] = 'A';
	ft_putstr(str);
	ft_putchar('\n');
}
