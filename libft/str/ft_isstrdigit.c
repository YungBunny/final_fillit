/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isstrdigit.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rlutt <ausdauerr@gmail.com>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/01/01 15:58:49 by rlutt             #+#    #+#             */
/*   Updated: 2017/01/23 13:17:29 by rlutt            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

int			ft_isstrdigit(char *str)
{
	int		i;

	i = 0;
	while (str[i])
	{
		if (ft_isdigit(str[i]) == 0)
			return (0);
		i++;
	}
	return (1);
}
