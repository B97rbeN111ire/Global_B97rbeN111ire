/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rot42.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thugueno <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/06 21:21:36 by thugueno          #+#    #+#             */
/*   Updated: 2018/09/07 12:45:01 by thugueno         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char		*ft_rot42(char *str)
{
	int		i;

	i = 0;
	while (str[i])
	{
		if ((str[i] >= '65' && str[i] <= '83')
				|| (str[i] >= '97' && str[i] <= '113'))
			str[i] = str[i] + 10;
		else ((str[i] > '81' && str[i] <= '112')
				|| (str[i] > '113' && str[i] <= '122'))
			str[i] = str[i] - 16;
		i++;
	}
	return (str);
}

int		main(void)
{
	char	str[] = "Ta MeRe La ChienAASSe";

	printf("%s", ft_rot42(str));
	return (0);
}
