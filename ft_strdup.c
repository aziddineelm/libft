/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ael-mans <ael-mans@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/03 08:49:30 by ael-mans          #+#    #+#             */
/*   Updated: 2024/11/03 09:33:53 by ael-mans         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include "libft.h"
#include <stdio.h>
#include <stdlib.h>

char	*ft_strdup(const char *s)
{
	size_t	i;
	size_t	len;
	char	*str_dup;

	if (!s)
		return (NULL);
	len = 0;
	while (s[len])
		len++;
	str_dup = (char *)malloc(len + 1);
	printf("%zu", sizeof(str_dup));
	if (!str_dup)
		return (NULL);
	i = 0;
	while (s[i])
	{
		str_dup[i] = s[i];
		i++;
	}
	str_dup[i] = '\0';
	return (str_dup);
}
