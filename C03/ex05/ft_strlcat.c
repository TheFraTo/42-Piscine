/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/16 21:27:59 by username          #+#    #+#             */
/*   Updated: 2026/07/20 12:23:32 by username           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	d;
	unsigned int	s;
	unsigned int	i;

	d = 0;
	s = 0;
	i = 0;
	while (dest[d])
		d++;
	while (src[s])
		s++;
	if (size <= d)
		return (s + size);
	while (src[i] && (d + i) < (size - 1))
	{
		dest[d + i] = src[i];
		i++;
	}
	dest[d + i] = '\0';
	return (s + d);
}

// int	main(void)
// {
// 	char			dest[30] = "Hello ";
// 	char			src[30] = "World";
// 	unsigned int	size = 2;

// 	// char			d[30] = "";
// 	// char			s[30] = "World";
// 	// unsigned int	size2 = 2;
// 	printf("%d | %s\n", ft_strlcat(dest, src, size), dest);
// 	// printf("%ld | %s\n", strlcat(d, s, size2), d);
// }
