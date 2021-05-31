/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jscheuma <jscheuma@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/17 10:41:34 by jscheuma          #+#    #+#             */
/*   Updated: 2021/05/17 10:41:34 by jscheuma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*dest;
	size_t	len;

	len = ft_strlen(s1) + ft_strlen(s2) + 1;
	dest = malloc(sizeof(char) * (len + 1));
	ft_strlcpy(dest, s1, len);
	ft_strlcat(dest, s2, len);
	return (dest);
}
