/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_reverse_alphabet.c                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: natalia <natalia@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/11 10:46:57 by natalia           #+#    #+#             */
/*   Updated: 2024/11/11 11:05:29 by natalia          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void ft_print_reverse_alphabet(void)
{
    char a = 'a';
    char z = 'z';

    while (z >= a)
    {
        write(1, &z, 1);
        z = z - 1;
    }
    
}

int main(void)
{
    ft_print_reverse_alphabet();
    write(1, "\n", 1);
}