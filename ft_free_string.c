/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_free_string.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: riael <Don't quit! | #42gether>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/05 12:06:37 by riael             #+#    #+#             */
/*   Updated: 2023/03/05 12:09:32 by riael            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "s_trings.h"

t_string	*ft_free_string(t_string *src)
{
	if (src == ((void *)0))
		return ((void *)0);
	if (src->data != ((void *)0))
	{
		free(src->data);
		src->data = ((void *)0);
	}
	if (src->len != 0)
		src->len = 0;
	free (src);
	return ((void *)0);
}
