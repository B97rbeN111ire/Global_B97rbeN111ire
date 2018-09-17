/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thugueno <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/17 10:28:37 by thugueno          #+#    #+#             */
/*   Updated: 2018/09/17 10:44:30 by thugueno         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

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

void		ft_sort_integer_table(int argc, char **argv)
{
	int		i;
	char	swap[50];

	i = 2;
	while (i < size)
	{
		if (ft_strcmp(argv[i]) > ft_strcomp(argv[i + 1]))
		{
			swap = ft_strcmp(argv[i + 1]);
			ft_strcmp(argv[i + 1]) = ft_strcmp(argv[i]);
			ft_strcmp(argv[i]) = swap;
			i = 2;
		}
		else
		{
			i++;
		}
	}
}

int		main(int argc, char **argv)
{
	if (argc > 1)
	{
		ft_sort_char_table(argc, argv);
	}
	else
		ft_putchar("\n");
	return (0);
}
