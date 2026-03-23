/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split_inplace.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcopari- <jcopari-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/24 10:07:13 by jcopari-          #+#    #+#             */
/*   Updated: 2026/01/05 19:09:33 by jcopari-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

/*
   Objetivo: Encontrar o primeiro 'delimitador', trocá-lo por '\0'
   e atualizar *proxima para apontar para o resto da string.
*/
void localizar_proxima_palavra(char *str, char delimitador, char **proxima) 
{
    if (str == NULL)
        return ;
    while (*str != '\0')
    {
        if (*str == delimitador)
        {
            *str = '\0';     
            *proxima = str+1;
            return;
        }
        str++;
    }
    *proxima = NULL;
}

int main() {
    char frase[] = "C-e-foda";
    char *atual = frase;
    char *proxima_parte = NULL;

    printf("Original: %s\n", frase);

    localizar_proxima_palavra(atual, '-', &proxima_parte);
    printf("Palavra 1: %s\n", atual);
    
    if (proxima_parte) {
        atual = proxima_parte;
        localizar_proxima_palavra(atual, '-', &proxima_parte);
        printf("Palavra 2: %s\n", atual);
    }
    
    if (proxima_parte)
         printf("Resto: %s\n", proxima_parte);
    return 0;
}