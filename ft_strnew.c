/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: riael <Don't quit! | #42gether>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/05 12:05:09 by riael             #+#    #+#             */
/*   Updated: 2023/03/05 12:10:31 by riael            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "s_trings.h"

t_string	*ft_strnew(char *s)
{
	int			letter;
	t_string	*string;

	string = malloc(sizeof(struct s_tring) * 1);
	if (s == ((void *)0))
	{
		string->data = "(null)";
		string->len = 0;
		return (string);
	}
	letter = 0;
	string->data = ft_arrdup(s);
	string->len = ft_arrlen(string->data);
	return (string);
}
