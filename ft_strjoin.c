/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ael-mans <ael-mans@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/03 15:10:46 by ael-mans          #+#    #+#             */
/*   Updated: 2024/11/03 17:08:38 by ael-mans         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*concstr;
	size_t	totallen;

	totallen = ft_strlen(s1) + ft_strlen(s2);
	if (!s1 && !s2)
		return (NULL);
	if (!s1)
		return (ft_strdup(s2));
	if (!s2)
		return (ft_strdup(s1));
	concstr = (char *)malloc(totallen + 1);
	if (!concstr)
		return (NULL);
	ft_strlcpy(concstr, s1, ft_strlen(s1) + 1);
	ft_strlcat(concstr, s2, totallen + 1);
	return (concstr);
}
