/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/17 00:06:06 by username          #+#    #+#             */
/*   Updated: 2026/07/20 11:15:24 by username           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// pas touche a la bibliotheque car y a un write dans la fonction

#include <unistd.h>

void	ft_putstr(char *str)
{
	int	a;

	a = 0;
	while (str[a])
	{
		write(1, &str[a], 1);
		a++;
	}
}

// int	main(void)
// {
// 	ft_putstr("piscine42");
// }
