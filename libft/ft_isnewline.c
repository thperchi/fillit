/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_isnewline.c                                   .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: jominodi <marvin@le-101.fr>                +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2018/11/27 11:00:53 by jominodi     #+#   ##    ##    #+#       */
/*   Updated: 2018/11/27 11:02:13 by jominodi    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "libft.h"

int		ft_isnewline(char *s)
{
	int	i;

	i = 0;
	while (s[i++] != '\0')
	{
		if (s[i] == '\n')
			return (0);
	}
	return (-1);
}