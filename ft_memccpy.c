/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jscheuma <jscheuma@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/13 10:23:45 by jscheuma          #+#    #+#             */
/*   Updated: 2021/05/13 10:23:45 by jscheuma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memccpy(void *dest, const void *src, int c, size_t n)
{
	char		*d;
	const char	*s;

	d = dest;
	s = src;
	if (!dest || !src)
		return (NULL);
	while (n)
	{
		n--;
		*d = *s;
		if (*s == (char) c)
			return (d + 1);
		d++;
		s++;
	}
	return (0);
}
