/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ischarset.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anguinau <constantasg@gmail.com>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/15 03:46:31 by anguinau          #+#    #+#             */
/*   Updated: 2022/08/04 21:19:21 by anguinau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/libft.h"

int ft_ischarset(char *str, char c)
{
        unsigned int i;

        i = 0;
        while (str[i])
        {
                if (str[i] == c)
                        return (1);
                i++;
        }
        return (0);
}
