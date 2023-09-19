/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vfrants <vfrants@student.42vienna.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/08 12:04:01 by vfrants           #+#    #+#             */
/*   Updated: 2023/09/10 19:56:55 by vfrants          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H

# include <stdlib.h>
# include <unistd.h>

# define MAX_FD_NUMBER 1024

# ifndef BUFFER_SIZE
#  define BUFFER_SIZE 10
# endif

// util file

size_t	ft_strlen(char *str);
int		ft_contains(char *set, char c);
char	*ft_strjoin(char *buffer, char *str);

// main function

char	*get_next_line(int fd);

#endif
