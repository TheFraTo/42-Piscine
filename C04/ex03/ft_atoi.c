/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By:               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/21 09:56:07 by username          #+#    #+#             */
/*   Updated: 2026/07/21 11:30:32 by username           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

int	ft_atoi(char *str)
{
	int	i;
	int	sign;
	int	result;

	i = 0;
	sign = 1;
	result = 0;
	while (str[i] == ' ' || (str[i] > 9 && str[i] <= 13))
		i++;
	while (str[i] == '+' || str[i] == '-')
	{
		if (str[i] == '-')
			sign = -sign;
		i++;
	}
	while (str[i] >= '0' && str[i] < '9')
	{
		result = result * 10 + (str[i] - '0');
		i++;
	}
	return (result * sign);
}

// int	main(void)
// {
// 	char	*tests[] =
// 	{
// 		"   ---+--+1234ab567",
// 		"42",
// 		"...",
// 		"",
// 	};
// 	int	n;
// 	int	i;

// 	n = sizeof(tests) / sizeof(tests[0]);
// 	i = 0;
// 	while (i < n)
// 	{
// 		printf("ft_atoi= %s = %d\t", tests[i], ft_atoi(tests[i]));
// 		printf("atoi = %d\n", atoi(tests[i]));
// 		i++;
// 	}
// 	return (0);
// }
