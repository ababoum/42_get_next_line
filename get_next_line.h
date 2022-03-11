/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mababou <mababou@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/11 15:31:19 by mababou           #+#    #+#             */
/*   Updated: 2022/03/11 17:32:22 by mababou          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H

# include <unistd.h>
# include <stdlib.h>
# include <fcntl.h>
# include <stdio.h>

// # define BUFFER_SIZE	42

int		find_char(char *str, char c);
int		ft_strlen(char *str);
void	ft_memset(void *ptr, int val, size_t n);
void	*ft_calloc(size_t nmemb, size_t size);
char	*get_next_line(int fd);

#endif