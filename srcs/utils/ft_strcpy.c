/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bsouleau <bsouleau@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/18 14:58:23 by pcadiet           #+#    #+#             */
/*   Updated: 2021/09/20 19:06:09 by bsouleau         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/utils.h"

char	*ft_strcpy(char *dest, char *src)
{
	*dest = *src;
	if (*src != '\0')
		ft_strcpy(dest + 1, src + 1);
	return (dest);
}
