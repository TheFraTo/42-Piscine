/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yaydin <yaydin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/15 14:16:09 by username          #+#    #+#             */
/*   Updated: 2026/07/22 10:04:16 by yaydin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int	a;

	a = 0;
	while (a < n && s1[a] == s2[a] && s1[a] != 0)
		a++;
	if (a == n)
		return (0);
	return (s1[a] - s2[a]);
}

// int	main(void)
// {
// 	char			*s1 = "tesdtexerice";
// 	char			*s2 = "tesd";
// 	unsigned int	n = 4;
// 	char			*o = "tesdtexercice";
// 	char			*p = "tesd";
// 	unsigned int	x = 4;

// 	printf("test avec la vraie fonction: %d\n", strncmp(s1, s2, n));
// 	printf("test avec ma fonction: %d\n", ft_strncmp(o, p, x));
// }
