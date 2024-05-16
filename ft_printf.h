/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bschneid <bschneid@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/25 15:21:07 by bschneid          #+#    #+#             */
/*   Updated: 2024/05/06 12:35:20 by bschneid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <unistd.h>
# include <limits.h>
# include <stdarg.h>

typedef struct s_subs
{
	char	flag_minus;
	char	flag_plus;
	char	flag_space;
	char	flag_hash;
	char	flag_zero;
	int		width;
	int		precision;
}	t_subs;

int		ft_printf(const char *input, ...);
int		ft_pf_putchar(char c, t_subs *subs);
int		ft_pf_strlen(char *str);
void	ft_pf_repchar(char c, int rep);
int		ft_pf_putstr(char *str, t_subs *subs);
int		ft_pf_atoi(const char **string);
int		ft_pf_putptr(void *ptr, t_subs *subs);
int		ft_pf_intlen(int input);
int		ft_pf_putint(int input, int len, t_subs *subs);
int		ft_pf_putunsigned(unsigned int input, t_subs *subs);
int		ft_pf_puthex(char *set, unsigned int input, t_subs *subs);
int		ft_pf_putperc(void);

#endif 
