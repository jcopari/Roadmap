/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcopari- <jcopari-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/27 09:29:15 by jcopari-          #+#    #+#             */
/*   Updated: 2026/01/25 08:21:56 by jcopari-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//REFATORAR E CORRIGIR
#include <unistd.h>

//CORRIGIR BUG DIVISÃO DE NÚMEROS COM ZERO. EX: 100


void	ft_putnbr(int nb)
{
    int     i;
    int     copy;
    
    i = 1;
    if (nb == -2147483648)
    {
        write(1, "-2147483648", 11);
        return ;
    }
    if (nb < 0)
    {
        write(1, "-", 1);
        nb *= -1;
    }
    copy = nb; 
    while (copy > 9)
    {
        while (copy > 9)
        {
            copy /= 10;
            i *= 10;
            if (copy <= 9)
                write(1, &"0123456789"[copy], 1);
        }
        nb = nb - (copy * i);
        i = 1;
        copy = nb;
    }
    write(1, &"0123456789"[copy], 1);
}

int main(void)
{
    ft_putnbr(123456789);
    return 0;
}