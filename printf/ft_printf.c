/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: diatisin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/06 11:56:10 by diatisin          #+#    #+#             */
/*   Updated: 2026/07/06 15:40:35 by diatisin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdarg.h>
#include <unistd.h>

int	ft_printf(const char *format, ...)
{
	va_list args;
	int	char_count;

	char_count = 0;
	va_start (args, format);
	while (*format)
	{
		if (*format && *(format + 1))
		{
			format++;
			char_count += input_format(format, args);
		}
		else
		{
			ft_putchar(*format);
			char_count++;
		}
	
	}
	return (char_count);
}

int	input_format(const char *format, va_list args)
{
	int	char_count;

	char_count = 0;

	return (char_count);
}
