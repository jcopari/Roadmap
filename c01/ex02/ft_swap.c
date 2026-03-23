/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcopari- <jcopari-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/25 08:35:23 by jcopari-          #+#    #+#             */
/*   Updated: 2026/01/25 08:46:12 by jcopari-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void    ft_swap(int *a, int *b)
{
    int     c; //Inteiro
    
    c = *a;  //Inteiro C recebe conteúdo de A;
    *a = *b; //Conteúdo de A vira conteúdo de B;
    *b = c;  //Conteúdo de B vira inteiro de C;
}

int main(void)
{
    int a = 1;
    int b = 2;
    
    ft_swap(&a, &b);
    printf("a:%d b:%d", a, b);
}