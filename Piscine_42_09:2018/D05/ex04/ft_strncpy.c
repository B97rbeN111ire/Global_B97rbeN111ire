/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thugueno <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/10 15:15:06 by thugueno          #+#    #+#             */
/*   Updated: 2018/09/13 15:09:18 by thugueno         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char		*ft_strncpy(char *dest, char *src, unsigned int n)
{
	unsigned int	i;

	i = 0;
	while (src[i] != '\0')
	{
		if (i <= (n - 1))
			dest[i] = src[i];
		i++;
	}
	while (i <= (n - 1))
	{
		dest[i] = '\0';
		i++;
	}
	return (dest);
}
