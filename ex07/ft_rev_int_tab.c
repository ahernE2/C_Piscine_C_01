/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alejhern <alejhern@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/26 17:55:15 by alejhern          #+#    #+#             */
/*   Updated: 2024/03/26 20:29:23 by alejhern         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_rev_int_tab(int *tab, int size)
{
	int	*inicio;
	int	*fin;
	int	tmp;

	fin = tab + size - 1;
	inicio = tab;
	while (fin > inicio)
	{
		tmp = *inicio;
		*inicio = *fin;
		*fin = tmp;
		inicio++;
		fin--;
	}
}
