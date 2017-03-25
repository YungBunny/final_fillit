/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_numlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rlutt <ausdauerr@gmail.com>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/12/17 00:42:45 by rlutt             #+#    #+#             */
/*   Updated: 2016/12/17 00:43:03 by rlutt            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

size_t		ft_numlen(long long nb, int bse)
{
	size_t		i;

	i = 1;
	if (nb < 0)
		i++;
	while (nb /= bse)
		i++;
	return (i);
}