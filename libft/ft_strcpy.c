/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yguzman <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/07/11 14:22:33 by yguzman           #+#    #+#             */
/*   Updated: 2017/10/05 18:48:17 by yguzman          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char			*ft_strcpy(char *dest, char *src)
{
	int			i;

	i = 0;
	if (src == 0)
		return (0);
	while (src[i])
	{
		dest[i] = src[i];
		++i;
	}
	dest[i] = '\0';
	return (dest);
}
