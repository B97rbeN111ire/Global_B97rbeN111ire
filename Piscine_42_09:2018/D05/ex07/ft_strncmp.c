/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thugueno <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/11 23:49:11 by thugueno          #+#    #+#             */
/*   Updated: 2018/09/12 00:20:00 by thugueno         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int		i;
	int					value;

	i = 0;
	value = 0;
	while (s1[i] == s2[i] && i < (n - 1))
	{
		value += (s1[i] - s2[i]);
		i++;
	}
	value += (s1[i] - s2[i]);
	return (value);
}
