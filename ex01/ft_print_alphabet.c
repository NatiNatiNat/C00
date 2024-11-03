/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_alphabet.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: natalia <natalia@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/03 11:23:46 by natalia           #+#    #+#             */
/*   Updated: 2024/11/03 12:04:11 by natalia          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void ft_print_alphabet(void)
{
    char a = 97;
    char z = 122;

    while(a <= z)
    {
        write(1, &a, 1);
        a = a +1;
    }
 
}

int main(void)
{
    ft_print_alphabet();
    write(1, "\n", 1);
    
} 