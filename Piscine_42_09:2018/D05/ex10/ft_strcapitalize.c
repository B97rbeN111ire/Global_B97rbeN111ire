/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thugueno <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/12 01:35:17 by thugueno          #+#    #+#             */
/*   Updated: 2018/09/12 14:06:30 by thugueno         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char		*ft_strlowcase(char *str)
{
	int		i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= 'A' && str[i] <= 'Z')
		{
			str[i] += 32;
		}
		i++;
	}
	return (str);
}

char		*ft_strcapitalize(char *str)
{
	int		i;

	i = 0;
	str = ft_strlowcase(str);
	while (str[i] != '\0')
	{
		while (str[i] <= ' ')
			i++;
		if (str[i] >= '0' && str[i] <= '9')
			while (str[i] > ' ')
				i++;
		if (str[i] >= 'a' && str[i] <= 'z')
		{
			str[i] -= 32;
			i++;
			while (str[i] >= 'a' && str[i] <= 'z')
				i++;
		}
		i++;
	}
	return (str);
}
