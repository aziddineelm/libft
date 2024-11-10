/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ael-mans <ael-mans@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/09 15:43:50 by ael-mans          #+#    #+#             */
/*   Updated: 2024/11/09 18:03:59 by ael-mans         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char			*result;
	unsigned int	i;
	int				total_len;

	total_len = ft_strlen(s);
	if (!s || !f)
		return (NULL);
	result = (char *)malloc(sizeof(char) * total_len + 1);
	if (!result)
		return (NULL);
	i = 0;
	while (s[i])
	{
		result[i] = f(i, s[i]);
		i++;
	}
	result[i] = '\0';
	return (result);
}

char	test(unsigned int i, char c)
{
	return (c + i);
}

int	main(void)
{
	char	*p;
	char	*res;

	p = "azed";
	res = ft_strmapi(p, test);
	printf("%s\n", p);
	printf("%s\n", res);
}
