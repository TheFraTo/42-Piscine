/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yaydin <yaydin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/16 14:29:53 by username          #+#    #+#             */
/*   Updated: 2026/07/20 11:56:39 by yaydin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	unsigned int	a;
	unsigned int	b;

	b = 0;
	a = 0;
	while (dest[a])
		a++;
	while (b < nb && src[b])
	{
		dest[a] = src[b];
		b++;
		a++;
	}
	dest[a] = '\0';
	return (dest);
}

// int	main(void)
// {
// 	char	dest[30] = "Paul";
// 	char	src[30] = "Antoine";
// 	char	d[30] = "Paul";
// 	char	s[30] = "Antoine";

// 	printf("%s \n", ft_strncat(dest, src, 4));
// 	printf("%s", strncat(d, s, 4));
// }
