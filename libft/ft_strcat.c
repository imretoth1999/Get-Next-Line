/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: itoth <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/01/09 14:26:43 by itoth             #+#    #+#             */
/*   Updated: 2017/01/09 14:26:45 by itoth            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strcat(char *dest, const char *src)
{
	int	i;
	int	k;

	i = 0;
	k = 0;
	while (dest[k] != '\0')
	{
		k++;
	}
	while (src[i] != '\0')
	{
		dest[k + i] = src[i];
		i++;
	}
	dest[k + i] = '\0';
	return (dest);
}
