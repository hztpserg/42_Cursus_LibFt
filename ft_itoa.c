/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seantoni <seantoni@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/25 19:27:30 by seantoni          #+#    #+#             */
/*   Updated: 2024/01/26 00:47:54 by seantoni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	ft_numlen(int n)
{
	size_t	len;

	len = 0;
	if (n <= 0)
		len = 1;
	while (n != 0)
	{
		n = n / 10;
		len++;
	}
	return (len);
}

static void	ft_recursive_itoa(char *str, int n, size_t len)
{
	if (n < 0)
	{
		str[0] = '-';
		n = -n;
	}
	if (n >= 10)
		ft_recursive_itoa(str, n / 10, len - 1);
	str[len - 1] = (n % 10) + '0';
}

char	*ft_itoa(int n)
{
	size_t	len;
	char	*result;

	len = ft_numlen(n);
	result = (char *)malloc((len + 1) * sizeof(char));
	if (!result)
		return (NULL);
	if (n == INT_MIN)
		ft_strlcpy(result, "-2147483648", len + 1);
	else
	{
		ft_recursive_itoa(result, n, len);
		result[len] = 0;
	}
	return (result);
}
