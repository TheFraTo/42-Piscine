/* ************************************************************************** */
/*                                                                            */
/*                                                       :::      ::::::::    */
/*   ft_is_negative.c                                  :+:      :+:    :+:    */
/*                                                   +:+ +:+         +:+      */
/*   By: username <username@student.42tokyo.jp>    #+#  +:+       +#+         */
/*                                               +#+#+#+#+#+   +#+            */
/*   Created: 2026/07/09 10:48:20 by username         #+#    #+#              */
/*   Updated: 2026/07/09 11:40:25 by username        ###   ########.fr        */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_is_negative(int n)
{
	if (n < 0)
	{
		write(1, "N\n", 1);
	}
	else
	{
		write(1, "P\n", 1);
	}
}

// int	main(void)
// {
// 	ft_is_negative(0);
// 	return (0);
// }
