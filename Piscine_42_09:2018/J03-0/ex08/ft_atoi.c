/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thugueno <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/03 14:10:36 by thugueno          #+#    #+#             */
/*   Updated: 2018/09/03 20:42:57 by thugueno         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_atoi(char *str)
{
	int		i;
	int		char_int;

	i = 0;
	char_int = 0;
	if (str[0] == '-')
		i++;
	while (str[i] != '\0')
	{	
		while (str[i] >= '\t' && str[i] <= '\r')
			i++;
		while (str[i] == ' ')
			i++;
		while (str[i] >= '0' && str[i] <= '9')
		{
			char_int = char_int * 10 + (str[i] - '0');
			i++;
		}
		i++;
	}
	if (str[0] == '-')
		char_int *= -1;
	return (char_int);
}
