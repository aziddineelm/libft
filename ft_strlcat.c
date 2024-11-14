/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ael-mans <ael-mans@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/27 10:07:59 by ael-mans          #+#    #+#             */
/*   Updated: 2024/10/27 10:24:15 by ael-mans         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dest, const char *src, size_t size)
{
	size_t	i;
	size_t	lendest;
	size_t	lensrc;

	lensrc = ft_strlen((char *)src);
	if (size == 0)
		return (lensrc);
	lendest = ft_strlen(dest);
	i = 0;
	if (size <= lendest)
		return (size + lensrc);
	while (i < lensrc && (lendest + 1 + i) < size)
	{
		dest[lendest + i] = src[i];
		i++;
	}
	dest[lendest + i] = '\0';
	return (lendest + lensrc);
}
