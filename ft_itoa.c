/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ael-mans <ael-mans@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/01 14:15:23 by ael-mans          #+#    #+#             */
/*   Updated: 2024/11/01 14:15:35 by ael-mans         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	count_digit(int n)
{
	int	len;

	len = 0;
	len = 1;
	while (n != 0)
	{
		len++;
		n = n / 10;
	}
	return (len);
}

char	*ft_itoa(int n)
{
	char	*s;
	int		len;
	long	num;

	num = (long)n;
	if (n == 0)
		return (ft_strdup("0"));
	len = count_digit(n);
	s = (char *)malloc(len + 1);
	if (!s)
		return (NULL);
	s[len--] = '\0';
	if (n < 0)
	{
		s[0] = '-';
		num = -num;
	}
	while (len >= 0)
	{
		s[len--] = (num % 10) + '0';
		num /= 10;
		if (num == 0)
			break ;
	}
	return (s);
}

int	main(void)
{
	printf("%s", ft_itoa(0));
}
// 	char *result;
//
// 	result = ft_itoa(0);
// 	printf("--------ft_itoa(0) = %s\n", result);
// 	free(result);
//
// 	result = ft_itoa(123);
// 	printf("ft_itoa(123) = %s\n", result);
// 	free(result);
//
// 	result = ft_itoa(-123);
// 	printf("ft_itoa(-123) = %s\n", result);
// 	free(result);
//
// 	result = ft_itoa(2147483647);
// 	printf("ft_itoa(2147483647) = %s\n", result);
// 	free(result);
//
// 	result = ft_itoa(-2147483648);
// 	printf("ft_itoa(-2147483648) = %s\n", result);
// 	free(result);
//
// 	return (0);
// }
