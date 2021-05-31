/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jscheuma <jscheuma@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/17 08:45:52 by jscheuma          #+#    #+#             */
/*   Updated: 2021/05/17 08:45:52 by jscheuma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *str)
{
	char	*s;
	char	*dest;
	char	*d;
	size_t	len;

	s = (char *)str;
	len = ft_strlen(str);
	dest = malloc((len + 1) * sizeof(char));
	d = dest;
	if (dest == NULL)
		return (NULL);
	while (*s)
	{
		*dest = *s;
		dest++;
		s++;
	}
	*dest = '\0';
	return (d);
}
