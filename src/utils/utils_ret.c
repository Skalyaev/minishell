/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils_ret.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anguinau <constantasg@gmail.com>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/31 16:53:39 by jchene            #+#    #+#             */
/*   Updated: 2022/08/06 07:49:41 by anguinau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../include/header.h"

int iperror(const char *str, int ret)
{
        perror(str);
        return (ret);
}

void *pperror(const char *str)
{
        perror(str);
        return (NULL);
}

int ifree(void *ptr, int ret)
{
        free(ptr);
        return (ret);
}

void *pfree(void *ptr, void *ret)
{
        free(ptr);
        return (ret);
}
