/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seantoni <seantoni@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/29 22:26:32 by seantoni          #+#    #+#             */
/*   Updated: 2024/01/29 22:49:19 by seantoni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstnew(void *content)
{
	t_list	*new_nod;

	new_nod = (t_list *)malloc(sizeof(t_list));
	if (!new_nod)
		return (NULL);
	new_nod->content = content;
	new_nod->next = NULL;
	return (new_nod);
}
