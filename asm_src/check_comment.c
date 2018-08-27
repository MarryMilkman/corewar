/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_comment.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahryhory <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/11 15:01:26 by ahryhory          #+#    #+#             */
/*   Updated: 2018/05/11 15:01:27 by ahryhory         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "asm.h"

void	check_comment(char *line, t_info info)
{
	if (line[0] != '\0' && line[0] != COMMENT_CHAR)
		ft_exit(9, info);
}
