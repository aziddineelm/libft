/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ael-mans <ael-mans@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/01 11:46:04 by ael-mans          #+#    #+#             */
/*   Updated: 2024/11/03 10:14:23 by ael-mans         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	const char	*h;
	const char	*n;
	size_t		i;

	if (!*little)
		return ((char *)big);
	while (*big && len)
	{
		h = big;
		n = little;
		i = len;
		while (*n && *h == *n && i)
		{
			h++;
			n++;
			i--;
		}
		if (!*n)
			return ((char *)big);
		big++;
		len--;
	}
	return (NULL);
}
