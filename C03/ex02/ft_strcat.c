/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/15 14:54:12 by username          #+#    #+#             */
/*   Updated: 2026/07/20 12:24:42 by username           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strcat(char *dest, char *src)
{
	int	a;
	int	b;

	b = 0;
	a = 0;
	while (dest[a] != '\0')
		a++;
	while (src[b] != '\0')
	{
		dest[a + b] = src[b];
		b++;
	}
	dest[a + b] = '\0';
	return (dest);
}

// int	main(void)
// {
// 	char	dest[30] = "42LeHavre";
// 	char	src[30] = "IsBeautiful";

// 	printf("%s", ft_strcat(dest, src));
// }
