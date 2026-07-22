/* ************************************************************************** */
/*                                                                            */
/*                                                       :::      ::::::::    */
/*   ft_strlen.c                                       :+:      :+:    :+:    */
/*                                                   +:+ +:+         +:+      */
/*   By: username <username@student.42tokyo.jp>    #+#  +:+       +#+         */
/*                                               +#+#+#+#+#+   +#+            */
/*   Created: 2026/07/13 11:42:04 by username         #+#    #+#              */
/*   Updated: 2026/07/13 16:57:35 by username        ###   ########.fr        */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (*(str++))
	{
		i++;
	}
	return (i);
}

// int	main(void)
// {
// 	printf("%d", ft_strlen("piscine42"));
// }
