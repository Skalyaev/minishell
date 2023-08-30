/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils_set.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anguinau <constantasg@gmail.com>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/27 15:57:49 by jchene            #+#    #+#             */
/*   Updated: 2022/08/01 22:05:55 by anguinau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../include/header.h"

int set_int(int *dst, int src, int ret)
{
        *dst = src;
        return (ret);
}

int set_char(char *dst, char src, int ret)
{
        *dst = src;
        return (ret);
}

int set_ptr(void **dst, void *src, int ret)
{
        *dst = src;
        return (ret);
}

int fill_char(char *dst, char c, int ret)
{
        if (!(*dst))
                *dst = c;
        return (ret);
}
