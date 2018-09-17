/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thugueno <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/12 23:22:30 by thugueno          #+#    #+#             */
/*   Updated: 2018/09/17 13:29:35 by thugueno         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int		i;
	unsigned int		j;
	unsigned int		size_c;

	i = 0;
	j = 0;
	while (dest[i] != '\0')
		i++;
	size_c = i;
	while (src[j] != '\0')
		j++;
	size_c += j;
	j = 0;
	while (i < (size - 1))
	{
		dest[i] = src[j];
		i++;
		j++;
	}
	dest[i] = '\0';
	return (size_c);
}
