/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seantoni <seantoni@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/30 00:45:17 by seantoni          #+#    #+#             */
/*   Updated: 2024/01/30 00:59:19 by seantoni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_lstsize(t_list *lst)
{
	int	lng;

	if (!lst)
		return (0);
	lng = 0;
	while (lst)
	{
		lst = lst->next;
		lng++;
	}
	return (lng);
}
