/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ptint_numbers.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: natalia <natalia@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/11 11:12:24 by natalia           #+#    #+#             */
/*   Updated: 2024/11/11 11:24:04 by natalia          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void ft_print_numbers(void)
{
    char a = '0';
    char b = '9';

    while (a <= b)
    {
        write(1, &a, 1);
        a = a + 1;
    }

}

int main(void)
{
    ft_print_numbers();
    write(1, "\n", 1);
}