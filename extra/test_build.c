/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_build.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcopari- <jcopari-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/06 09:21:50 by jcopari-          #+#    #+#             */
/*   Updated: 2026/01/06 09:45:42 by jcopari-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

#define PI 3.14
#define SQR(x) ((x) * (x))

void    function_a(void);

int main(void)
{
    float teste = 5.0;
    float resultado = SQR(teste + 1);

    //function_a();
    printf("Este é o resultado: %.2f", resultado);
    printf("Este é o número de PI: %.2f", PI);

    return 0;
}