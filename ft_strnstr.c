/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jscheuma <jscheuma@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/14 13:00:59 by jscheuma          #+#    #+#             */
/*   Updated: 2021/05/14 13:00:59 by jscheuma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *big, const char *lit, size_t len)
{
	size_t	i;
	size_t	j;

	i = 0;
	j = 0;
	if (*lit == '\0')
		return ((char *)big);
	while (big[i] && len)
	{
		j = 0;
		while (lit[j] && big[j + i] == lit[j] && i + j < len)
		{
			if (lit[j + 1] == '\0')
				return ((char *)big + i);
			j++;
		}			
		i++;
	}
	return (0);
}
