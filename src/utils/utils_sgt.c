/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils_sgt.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anguinau <constantasg@gmail.com>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/31 19:50:36 by jchene            #+#    #+#             */
/*   Updated: 2022/08/01 22:05:56 by anguinau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../include/header.h"

t_data *data(void)
{
        static t_data data;

        return (&data);
}

int *seen_cmd(void)
{
        static int var = 0;

        return (&var);
}

int *is_d_quoted(void)
{
        static int var = 0;

        return (&var);
}

int *is_s_quoted(void)
{
        static int var = 0;

        return (&var);
}
