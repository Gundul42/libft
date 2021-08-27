/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: graja <graja@student.42wolfsburg.de>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/13 16:50:00 by graja             #+#    #+#             */
/*   Updated: 2021/06/18 18:02:48 by graja            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>
#include <stdio.h>

int	main(void)
{
	char	**str;
	char	test[] = "Guten morgen, bitte %d Euro ueberweisen zu 100%% und %s";
	char	*src;
	int		i;

	i = 0;
	src = &test[0];
	str = ft_split(src, '%');
	while (str[i])
	{
		printf("%s\n", str[i]);
		free(str[i]);
		i++;
	}
	free(str[i]);
	free(str);
	return (0);
}
