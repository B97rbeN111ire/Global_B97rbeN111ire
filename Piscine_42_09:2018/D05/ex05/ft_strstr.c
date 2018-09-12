/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thugueno <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/10 19:46:22 by thugueno          #+#    #+#             */
/*   Updated: 2018/09/11 23:43:35 by thugueno         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char		*ft_strstr(char *str, char *to_find)
{
	int		i;
	int		j;

	i = 0;
	if (to_find[i] == '\0')
		return (str);
	while (str[i] != '\0')
	{
		j = 0;
		while (str[i] != to_find[j])
		{
			i++;
		}
		while ((str[i] == to_find[j]) || (to_find[j] == '\0'))
		{
			if (to_find[j] != '\0')
			{
				i++;
				j++;
			}
			else
				return (str + (i - j));
		}
	}
	return ("(null)");
}
