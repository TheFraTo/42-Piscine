/* ************************************************************************** */
/*                                                                            */
/*                                                       :::      ::::::::    */
/*   fr_swap.c                                         :+:      :+:    :+:    */
/*                                                   +:+ +:+         +:+      */
/*   By: username <username@student.42tokyo.jp>    #+#  +:+       +#+         */
/*                                               +#+#+#+#+#+   +#+            */
/*   Created: 2026/07/09 16:06:14 by username         #+#    #+#              */
/*   Updated: 2026/07/13 16:54:03 by username        ###   ########.fr        */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>

void	ft_swap(int *a, int *b)
{
	int	francewin;

	francewin = *a;
	*a = *b;
	*b = francewin;
}

// int	main(void)
// {
// 	int	a = 5;
// 	int	b = 6;

// 	ft_swap(&a, &b);
// 	printf("a = %d et b = %d", a, b);
// 	return (0);
// }
