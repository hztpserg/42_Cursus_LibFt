/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seantoni <seantoni@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/11 20:23:20 by seantoni          #+#    #+#             */
/*   Updated: 2024/01/16 01:38:07 by seantoni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	char	*last_c;

	last_c = NULL;
	while (*s != 0)
	{
		if (*s == (char)c)
			last_c = (char *)s;
		s++;
	}
	if (*s == (char)c)
		return ((char *)s);
	return (last_c);
}
