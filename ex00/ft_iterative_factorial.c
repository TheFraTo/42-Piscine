/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/24 10:06:30 by username          #+#    #+#             */
/*   Updated: 2026/07/24 10:06:30 by username           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>

int	ft_iterative_factorial(int nb)
{
	int	result;

	if (nb < 0)
		return (0);
	result = 1;
	while (nb > 1)
	{
		result *= nb;
		nb--;
	}
	return (result);
}

// int	main(void)
// {
// 	printf("%d\n", ft_iterative_factorial(5));
// 	return (0);
// }
