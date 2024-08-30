/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mariocos <mariocos@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/30 12:45:40 by mariocos          #+#    #+#             */
/*   Updated: 2024/08/30 12:52:42 by mariocos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//missing header
#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H
# include <stdlib.h>
# include <stdio.h>
# include <unistd.h>
# include <fcntl.h>

int		ft_strlen(char *str);
int		ft_linelen(char *str);
void	ft_buffer_shift_left(char *Buffer, int move_size);
char	*ft_special_join(char *str, char *Buffer);
char	*get_next_line(int fd);

# ifndef BUFFER_SIZE
#  define BUFFER_SIZE 42
# endif
#endif
