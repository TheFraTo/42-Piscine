/* ************************************************************************** */
/*                                                                            */
/*                                                       :::      ::::::::    */
/*   ft_fiv_mod.c                                      :+:      :+:    :+:    */
/*                                                   +:+ +:+         +:+      */
/*   By: username <username@student.42tokyo.jp>    #+#  +:+       +#+         */
/*                                               +#+#+#+#+#+   +#+            */
/*   Created: 2026/07/10 11:05:38 by username         #+#    #+#              */
/*   Updated: 2026/07/13 16:54:43 by username        ###   ########.fr        */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>

void	ft_div_mod(int a, int b, int *div, int *mod)
{
	*div = a / b;
	*mod = a % b;
}

// int	main(void)
// {
// 	int	a = 100;
// 	int	b = 2;
// 	int	div;
// 	int	mod;

// 	ft_div_mod(a, b, &div, &mod);
// 	printf("le resultat = %d", div);
// 	printf("le reste = %d", mod);
// }
