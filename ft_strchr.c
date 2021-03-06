/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmocniak <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/02/24 00:29:59 by jmocniak          #+#    #+#             */
/*   Updated: 2018/03/14 16:47:46 by jmocniak         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	int		i;

	i = 0;
	while (*(s + i) != (char)c && *(s + i))
		i++;
	if (*(s + i) == (char)c)
		return ((char *)s + i);
	return (NULL);
}
