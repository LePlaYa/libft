/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jscheuma <jscheuma@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/13 21:47:44 by jscheuma          #+#    #+#             */
/*   Updated: 2021/05/13 21:47:44 by jscheuma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*dest_count(char *d, size_t n)
{
	while (n != 0 && *d)
	{
		d++;
		n--;
	}
	return (d);
}

size_t	ft_strlcat(char *dest, const char *src, size_t dest_size)
{
	char	*d;
	char	*s;
	size_t	d_len;
	size_t	n;

	d = dest;
	s = (char *)src;
	n = dest_size;
	d = dest_count(d, n);
	d_len = d - dest;
	n = dest_size - d_len;
	if (n == 0)
		return (d_len + ft_strlen(s));
	while (*s)
	{
		if (n != 1)
		{
			*d = *s;
			n--;
			d++;
		}
		s++;
	}
	*d = '\0';
	return (d_len + (s - src));
}
