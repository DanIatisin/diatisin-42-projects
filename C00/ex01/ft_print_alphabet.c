/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_alphabet.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: diatisin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/12 16:26:14 by diatisin          #+#    #+#             */
/*   Updated: 2026/03/12 16:26:17 by diatisin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>

void ft_print_alphabet(void){

	char c = 'a';
	while(c >= 'a' && c <= 'z'){
	
		write(1, &c, 1);
		c++;
	}

}



int main(){

	ft_print_alphabet();

	return 0;
}
