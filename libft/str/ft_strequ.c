/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strequ.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rlutt <rlutt@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/28 15:44:11 by rlutt             #+#    #+#             */
/*   Updated: 2016/12/07 19:26:13 by rlutt            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

int		ft_strequ(const char *s1, const char *s2)
{
	int i;

	i = 0;
	if (s1 && s2)
	{
		while (s1[i] && s2[i])
		{
			if (s1[i] != s2[i])
				return (0);
			i++;
		}
		if (s1[i] != s2[i])
			return (0);
	}
	return (1);
}
