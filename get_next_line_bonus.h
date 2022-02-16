/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_bonus.h                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acash <acash@student.21-school.r>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/20 20:44:29 by acash             #+#    #+#             */
/*   Updated: 2021/10/20 20:44:32 by acash            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_BONUS_H
# define GET_NEXT_LINE_BONUS_H

# include <stdlib.h>
# include <fcntl.h>
# include <unistd.h>

char	*get_next_line(int fd);
char	*ft_firstcheck(int fd, char *str);
size_t	ft_strlen(char *s);
char	*ft_strchr(char *b, int c);
char	*ft_strjoin(char *s1, char *s2);
void	ft_strjoinhelp(char *concs, char *s1, char *s2);
char	*ft_next(char *s);
char	*ft_new_str(char *s);

#endif