/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   endianess.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcopari- <jcopari-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/06 09:49:02 by jcopari-          #+#    #+#             */
/*   Updated: 2026/01/06 09:57:31 by jcopari-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int main(void)
{
    unsigned int inteiro = 0x11223344;
    unsigned char *ptr = (unsigned char *)&inteiro; 
    
    printf("%x\n", inteiro);
    for(int i = 0; i < 4; i++)
    {
        printf("%.2x", *ptr);
        ptr++;
    }
    printf("\n");
    return 0;
}