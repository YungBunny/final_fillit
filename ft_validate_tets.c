/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_validate_tets.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cfu <cfu@student.42.us.org>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/03/01 18:05:17 by cfu               #+#    #+#             */
/*   Updated: 2017/03/01 18:05:21 by cfu              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

int			ft_validate_tets(char *str)
{
	int		i;
	char	*tmp;

	i = 0;
	tmp = ft_strdup(str);
	if (ft_checklines(str, '\n') == 0)
		return (-1);
	if (ft_ifnotfound(str, '#') == 0)
		return (-1);
	ft_repchar(tmp, '\n', '.', BUFF_SIZE);
	while (i < 19)
	{
		if (ft_strequ(tmp, g_vtets[i]) == 1)
			return (i);
		i++;
	}
	ft_strdel(&tmp);
	return (-1);
}

void		ft_repchar(char *str, char o, char n, int max)
{
	int		i;

	i = 0;
	while (i <= max)
	{
		if ((i == 4 || i == 9 || i == 14 || i >= 19) && str[i] == o)
			str[i] = n;
		i++;
	}
	ft_trim_tet(str, '#', 0, 0);
}

char		*ft_trim_tet(char *str, char c, int src, int dst)
{
	int		end;
	size_t	len;

	end = (int)(ft_strlen(str) - 1);
	len = end;
	while (str[src] == '.')
		src++;
	if (src != dst)
	{
		while (str[src])
		{
			str[dst] = str[src];
			if (str[src] == '#')
				str[src] = '.';
			src++;
			dst++;
		}
	}
	while (str[end] != c)
		end--;
	end++;
	ft_memset(&str[end], '\0', len - end);
	return (str);
}

int			ft_checklines(char *str, char c)
{
	int		i;
	int		count;
	int		chars;

	i = 0;
	count = 0;
	if (str)
	{
		while (str[i])
		{
			chars = 0;
			while (str[i] && str[i++] != c)
				chars++;
			if ((chars != 4 && str[i]) || i > 20)
				return (0);
			if (chars == 4 && str[i - 1] == '\n')
				count++;
			if (count == 4 && (str[20] == '\n' || str[20] == '\0'))
				return (1);
		}
	}
	return (0);
}

size_t		ft_ifnotfound(char const *s, char c)
{
	int		i;

	i = 0;
	while (s[i] && s[i] != c)
		i++;
	if (s[i] == '\0')
		return (0);
	return (1);
}
