/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thugueno <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/11 22:29:46 by thugueno          #+#    #+#             */
/*   Updated: 2018/09/13 19:25:16 by thugueno         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_strcmp(char *s1, char *s2)
{
	int		i;
	int		value;

	i = 0;
	value = 0;
	while (s1[i] == s2[i] && s1[i] != '\0')
		i++;
	if (s1[i] != s2[i])
	{
		value = s1[i] - s2[i];
	}
	return (value);
}