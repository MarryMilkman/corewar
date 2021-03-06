/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   vm_give_fbyte.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iseletsk <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/02 11:55:39 by iseletsk          #+#    #+#             */
/*   Updated: 2018/06/03 13:05:41 by iseletsk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	vm_give_fbyte(int *nbr)
{
	int		res;

	res = 0;
	res += ((nbr[0] << 24) & 4278190080);
	res += ((nbr[1] << 16) & 16711680);
	res += ((nbr[2] << 8) & 65280);
	res += (nbr[3] & 255);
	return (-res);
}
