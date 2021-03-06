/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isstrascii.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rlutt <ausdauerr@gmail.com>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/01/01 16:18:58 by rlutt             #+#    #+#             */
/*   Updated: 2017/01/23 12:56:22 by rlutt            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

int			ft_isstrascii(char *str)
{
	int		i;

	i = 0;
	while (str[i])
	{
		if (ft_isascii(str[i]) == 0)
			return (0);
		i++;
	}
	return (1);
}
