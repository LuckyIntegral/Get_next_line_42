/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_utils.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vfrants <vfrants@student.42vienna.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/09 00:59:45 by vfrants           #+#    #+#             */
/*   Updated: 2023/09/11 01:47:19 by vfrants          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

int	ft_contains(char *set, char c)
{
	if (!set)
		return (0);
	while (*set)
	{
		if (*set == c)
			return (1);
		set++;
	}
	return (0);
}

size_t	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

static char	*ft_strdup(char *str)
{
	size_t	len;
	char	*new;

	len = ft_strlen(str);
	new = (char *)malloc(sizeof (char) * (len + 1));
	if (!new)
		return (NULL);
	new[len] = '\0';
	while (len--)
		new[len] = str[len];
	return (new);
}

char	*ft_strjoin(char *buffer, char *str)
{
	size_t	size;
	char	*res;
	char	*response;
	char	*buf_free;

	if (!buffer)
		return (ft_strdup(str));
	if (!buffer && !ft_strlen(str))
		return (NULL);
	size = ft_strlen(buffer) + ft_strlen(str);
	res = (char *)malloc(sizeof (char) * (size + 1));
	if (!res)
		return (free(buffer), NULL);
	buf_free = buffer;
	response = res;
	while (*buffer)
		*res++ = *buffer++;
	while (*str)
		*res++ = *str++;
	*res = '\0';
	return (free(buf_free), response);
}
