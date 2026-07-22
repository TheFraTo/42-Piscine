/* ************************************************************************** */
/*                                                                            */
/*                                                       :::      ::::::::    */
/*   ft_ultimate_div_mod.c                             :+:      :+:    :+:    */
/*                                                   +:+ +:+         +:+      */
/*   By: username <username@student.42tokyo.jp>    #+#  +:+       +#+         */
/*                                               +#+#+#+#+#+   +#+            */
/*   Created: 2026/07/10 11:43:21 by username         #+#    #+#              */
/*   Updated: 2026/07/13 16:55:26 by username        ###   ########.fr        */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>

void	ft_ultimate_div_mod(int *a, int *b)
{
	int	temp;

	temp = *a;
	*a = *a / *b;
	*b = temp % *b;
}

// int	main(void)
// {
// 	int	a;
// 	int	b;

// 	a = 10;
// 	b = 2;
// 	ft_ultimate_div_mod(&a, &b);
// 	printf("le resultat est %d et le reste est %d", a, b);
// 	return (0);
// }
