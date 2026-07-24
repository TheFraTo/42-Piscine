/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_fibonacci.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/23 10:27:42 by username          #+#    #+#             */
/*   Updated: 2026/07/23 12:02:54 by username           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_fibonacci(int index)
{
	if (index < 0)
		return (-1);
	if (index == 0)
		return (0);
	if (index == 1)
		return (1);
	return (ft_fibonacci(index - 1) + ft_fibonacci(index - 2));
}

// #include <stdio.h>

// int	main(void)
// {
// 	printf("%d\n", ft_fibonacci(0));
// 	// 0
// 	printf("%d\n", ft_fibonacci(1));
// 	// 1
// 	printf("%d\n", ft_fibonacci(5));
// 	// 5
// 	printf("%d\n", ft_fibonacci(9));
// 	//34
// 	printf("%d\n", ft_fibonacci(-3));
// 	// -1
// 	return (0);
// }
