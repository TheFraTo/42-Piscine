/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yaydin <yaydin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/15 10:09:46 by username          #+#    #+#             */
/*   Updated: 2026/07/20 16:15:35 by yaydin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

int	ft_strcmp(char *s1, char *s2)
{
	int	a;

	a = 0;
	while (s1[a] == s2[a] && s1[a] != 0)
	{
		a++;
	}
	return (s1[a] - s2[a]);
}

// int	main(void)
// {
// 	char	*s1 = "didier";
// 	char	*s2 = "didier";

// 	printf("test avec la vraie fonction: %d\n", strcmp(s1, s2));
// 	printf("test avec ma fonction: %d\n", ft_strcmp(s1, s2));
// }
