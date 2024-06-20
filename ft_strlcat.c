/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seantoni <seantoni@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/10 23:14:10 by seantoni          #+#    #+#             */
/*   Updated: 2024/01/21 01:09:18 by seantoni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *str, size_t size)
{
	size_t	i;
	size_t	len_dst;
	size_t	len_str;

	i = 0;
	len_dst = ft_strlen(dst);
	len_str = ft_strlen(str);
	if (size <= len_dst)
		return (size + len_str);
	while (str[i] && (len_dst + i) < size - 1)
	{
		dst[len_dst + i] = str[i];
		i++;
	}
	dst[len_dst + i] = 0;
	return (len_dst + len_str);
}
