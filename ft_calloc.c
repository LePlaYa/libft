/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jscheuma <jscheuma@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/15 12:03:15 by jscheuma          #+#    #+#             */
/*   Updated: 2021/05/15 12:03:15 by jscheuma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(int nitems, int size)
{
	void	*array;

	array = (void *)malloc(nitems * size);
	if (array == 0)
		return (0);
	ft_bzero(array, nitems * size);
	return (array);
}
