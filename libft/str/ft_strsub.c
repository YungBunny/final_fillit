/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsub.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rlutt <rlutt@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/29 22:06:46 by rlutt             #+#    #+#             */
/*   Updated: 2017/01/05 23:56:44 by rlutt            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

char		*ft_strsub(char const *s, unsigned int start, size_t len)
{
	char	*sub;
	int		i;

	i = 0;
	sub = (char *)ft_memalloc(sizeof(char) * len + 1);
	if (sub == NULL)
		return (NULL);
	if (s != NULL)
	{
		while (len)
		{
			sub[i] = s[start];
			i++;
			start++;
			len--;
		}
	}
	sub[i] = '\0';
	return (sub);
}
