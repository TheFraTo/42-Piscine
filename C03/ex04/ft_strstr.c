/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yaydin <yaydin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/16 15:22:25 by username          #+#    #+#             */
/*   Updated: 2026/07/20 11:59:15 by yaydin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

char	*ft_strstr(char *str, char *to_find)
{
	int	i;
	int	j;

	if (to_find[0] == '\0')
		return (str);
	i = 0;
	while (str[i])
	{
		j = 0;
		while (str[i + j] && str[i + j] == to_find[j])
			j++;
		if (to_find[j] == '\0')
			return (&str[i]);
		i++;
	}
	return (0);
}

// int	main(void)
// {
// 	char	str[30] = "thomas";
// 	char	to_find[30] = "o";
// 	char	s[30] = "thomas";
// 	char	t[30] = "o";

// 	printf("%s \n", ft_strstr(str, to_find));
// 	printf("%s", strstr(s, t));
// }
