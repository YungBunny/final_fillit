/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striter.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rlutt <rlutt@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/30 13:42:03 by rlutt             #+#    #+#             */
/*   Updated: 2016/12/23 00:57:14 by rlutt            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

void		ft_striter(char *s, void (*f)(char *))
{
	int i;
	int z;

	i = 0;
	z = 0;
	if (s && f)
	{
		z = ft_strlen(s);
		while (i < z)
		{
			(f)(s);
			s++;
			i++;
		}
	}
}
