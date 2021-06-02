/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jscheuma <jscheuma@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/17 12:25:32 by jscheuma          #+#    #+#             */
/*   Updated: 2021/05/17 12:25:32 by jscheuma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	count_sub_strings(char *str, int size)
{
	int		i;
	int		count;
	int		in;

	count = 0;
	i = 0;
	in = 0;
	while (i < size)
	{
		if (str[i] && in == 0)
		{
			count++;
			in = 1;
		}
		else if (str[i] == '\0' && in == 1)
			in = 0;
		i++;
	}
	return (count);
}

char	*c_to_zero(char *str, char c, int size)
{
	int		i;

	i = 0;
	while (i < size)
	{
		if (str[i] == c)
			str[i] = '\0';
		i++;
	}
	return (str);
}

void	write_result(char **result, char *str, int size)
{
	char	**tmp;
	int		i;

	tmp = result;
	i = 0;
	while (i < size)
	{
		if (*str)
		{
			*tmp = ft_strdup(str);
			tmp++;
			while (*str)
			{
				str++;
				i++;
			}
		}
		i++;
		str++;
	}
	*tmp = NULL;
}

char	**ft_split(char const *s, char c)
{
	char	**result;
	char	*str;
	int		size;
	int		sub_count;

	if (s == NULL)
		return (NULL);
	str = ft_strdup(s);
	size = ft_strlen(str);
	str = c_to_zero(str, c, size);
	sub_count = count_sub_strings(str, size);
	result = (char **)malloc(sizeof(char *) * (sub_count + 1));
	if (result == NULL)
		return (NULL);
	write_result(result, str, size);
	free(str);
	return (result);
}
