/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils_tern.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jchene <jchene@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/11 17:37:07 by jchene            #+#    #+#             */
/*   Updated: 2022/08/05 16:53:36 by jchene           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../include/header.h"

int itern(int exp, int ret_true, int ret_false)
{
        if (exp)
                return (ret_true);
        return (ret_false);
}

void *ptern(int exp, void *ret_true, void *ret_false)
{
        if (exp)
                return (ret_true);
        return (ret_false);
}

int is_equal(int nbr, int to_find, int ret_true, int ret_false)
{
        if (nbr == to_find)
                return (ret_true);
        return (ret_false);
}
