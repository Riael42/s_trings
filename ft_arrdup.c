/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_arrdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: riael <Don't quit! | #42gether>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/05 12:07:25 by riael             #+#    #+#             */
/*   Updated: 2023/03/05 12:08:33 by riael            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "s_trings.h"

char	*ft_arrdup(char *src)
{
	char	*final;
	int		len;

	if (src == ((void *)0))
		return ((void *)0);
	len = 0;
	while (src[len])
		len += 1;
	final = (char *)malloc(len * sizeof(char) + 1);
	if (final == (void *)0)
		return ((void *)0);
	len = 0;
	while (src[len] != '\0')
	{
		final[len] = src[len];
		len += 1;
	}
	final[len] = '\0';
	return (final);
}
