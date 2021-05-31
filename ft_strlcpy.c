/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jscheuma <jscheuma@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/13 17:45:02 by jscheuma          #+#    #+#             */
/*   Updated: 2021/05/13 17:45:02 by jscheuma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dest, const char *src, size_t dest_size)
{
	size_t	src_size;

	src_size = 0;
	if (dest_size == 0)
	{
		while (src[src_size])
		{
			src_size++;
		}
		return (src_size);
	}
	while (src_size < dest_size - 1 && src[src_size] != '\0')
	{
		dest[src_size] = src[src_size];
		src_size++;
	}
	if (src_size < dest_size)
		dest[src_size] = '\0';
	while (src[src_size] != '\0')
		src_size++;
	return (src_size);
}
