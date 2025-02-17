/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   free.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yguzman <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/10/06 16:54:20 by yguzman           #+#    #+#             */
/*   Updated: 2017/10/06 16:56:13 by yguzman          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "printf.h"
#include <stdlib.h>

void			free_all(t_dt *dt)
{
	free(dt->all_conv);
	free(dt->all_attr);
	free(dt->all_modif_conv);
}
