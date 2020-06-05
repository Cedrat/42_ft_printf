/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lnoaille <lnoaille@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/02 15:48:58 by lnoaille          #+#    #+#             */
/*   Updated: 2020/06/05 22:11:31 by lnoaille         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"


int main()
{
	printf("%d\n", ft_printf("1)\t%cs\t", 'e'));
	printf("%d\n", printf("1)\t%cs\t", 'e'));
	printf("%d\n", ft_printf("2)\t%5cs\t", 'e'));
	printf("%d\n", printf("2)\t%5cs\t", 'e'));
	printf("%d\n", ft_printf("3)\t%-cs\t", 'e'));
	printf("%d\n", printf("3)\t%-cs\t", 'e'));
	printf("%d\n", ft_printf("4)\t%-1cs\t", 'e'));
	printf("%d\n", printf("4)\t%-1cs\t", 'e'));
	printf("%d\n", ft_printf("5)\t%-5cs\t", 'e'));
	printf("%d\n", printf("5)\t%-5cs\t", 'e'));
	printf("%d\n", ft_printf("6)\t%-6ss\t", "test"));
	printf("%d\n", printf("6)\t%-6ss\t", "test"));
	printf("%d\n", ft_printf("6.5)\t%-8.6ss\t", "testicule"));
	printf("%d\n", printf("6.5)\t%-8.6ss\t", "testicule"));
	printf("%d\n", ft_printf("6.75)\t%ss%s\t", "tt" , "tes2"));
	printf("%d\n", printf("6.75)\t%ss%s\t", "tt", "tes2"));
	printf("%d\n", printf("7)\t%5ss\t", "test"));
	printf("%d\n", ft_printf("7)\t%5ss\t", "test"));
	printf("%d\n", printf("7.5)\t%.0ss\t", "test"));
	printf("%d\n", ft_printf("7.5)\t%.0ss\t", "test"));
	printf("%d\n", printf("7.75)\t%.6ss\t", "test"));
	printf("%d\n", ft_printf("7.75)\t%.6ss\t", "test"));
	printf("%d\n", printf("7.87)\t%7.6ss\t", "test"));
	printf("%d\n", ft_printf("7.87)\t%7.6ss\t", "test"));
	printf("%d\n", printf("7.93)\t%-6.7ss\t", "test"));
	printf("%d\n", ft_printf("7.93)\t%-6.7ss\t", "test"));
	printf("%d\n", ft_printf("8)\t%-5ss\t", "test"));
	printf("%d\n", printf("8)\t%-5ss\t", "test"));
	printf("%d\n", ft_printf("9)\t%-5ss\t", ""));
	printf("%d\n", printf("9)\t%-5ss\t", ""));
	printf("%d\n", ft_printf("10)\t%-ds\t", 0));
	printf("%d\n", printf("10)\t%-ds\t", 0));
	printf("%d\n", ft_printf("11)\t%-5ds\t", 0));
	printf("%d\n", printf("11)\t%-5ds\t", 0));
	printf("%d\n", ft_printf("12)\t%5ds\t", 0));
	printf("%d\n", printf("12)\t%5ds\t", 0));
	printf("%d\n", ft_printf("13)\t%5.0ds\t", 0));
	printf("%d\n", printf("13)\t%5.0ds\t", 0));
	printf("%d\n", ft_printf("13.5)\t%5.5ds\t", 0));
	printf("%d\n", printf("13.5)\t%5.5ds\t", 0));
	printf("%d\n", ft_printf("14)\t%-5ds\t", 5));
	printf("%d\n", printf("14)\t%-5ds\t", 5));
	printf("%d\n", ft_printf("15)\t%5ds\t", 5));
	printf("%d\n", printf("15)\t%5ds\t", 5));
	printf("%d\n", ft_printf("16)\t%5ds\t", 245));
	printf("%d\n", printf("16)\t%5ds\t", 245));
	printf("%d\n", ft_printf("17)\t%-5ds\t", 245));
	printf("%d\n", printf("17)\t%-5ds\t", 245));
	printf("%d\n", ft_printf("17.5)\t%8.5ds\t", 0));
	printf("%d\n", printf("17.5)\t%8.5ds\t", 0));
	printf("%d\n", ft_printf("18)\t%-5.2ds\t", 245));
	printf("%d\n", printf("18)\t%-5.2ds\t", 245));
	printf("%d\n", ft_printf("18.5)\t%*ds\t", -3 , 2));
	printf("%d\n", printf("18.5)\t%*ds\t",  -3 , 2));
	printf("%d\n", ft_printf("18.75)\t%*.*ds\t", -3 , 2 , 5));
	printf("%d\n", printf("18.75)\t%*.*ds\t",  -3 , 2 , 5));
	printf("%d\n", ft_printf("19)\t%-5ds\t", 2147483647));
	printf("%d\n", printf("19)\t%-5ds\t", 2147483647));
	printf("%d\n", ft_printf("19)\t%-5ds\t", -2147483647));
	printf("%d\n", printf("19)\t%-5ds\t", -2147483647));
	printf("%d\n", ft_printf("19.5)\t%-13ds\t", -2147483647));
	printf("%d\n", printf("19.5)\t%-13ds\t", -2147483647));
	printf("%d\n", ft_printf("19.75)\t%-13.15ds\t", -2147483647));
	printf("%d\n", printf("19.75)\t%-13.15ds\t", -2147483647));
	printf("%d\n", ft_printf("19.87)\t%-15.13ds\t", -2147483647));
	printf("%d\n", printf("19.87)\t%-15.13ds\t", -2147483647));
	printf("%d\n", ft_printf("20)\t%5ds\t", -245));
	printf("%d\n", printf("20)\t%5ds\t", -245));
	printf("%d\n", ft_printf("20.5)\t%08.5i\t", -245));
	printf("%d\n", printf("20.5)\t%08.5i\t", -245));
	printf("%d\n", ft_printf("21)\t%-5ds\t", -245));
	printf("%d\n", printf("21)\t%-5ds\t", -245));
	printf("%d\n", ft_printf("22)\t%-5.10ds\t", -245));
	printf("%d\n", printf("22)\t%-5.10ds\t", -245));
	printf("%d\n", ft_printf("23)\t%01ds\t", -245));
	printf("%d\n", printf("23)\t%01ds\t", -245));
	printf("%d\n", ft_printf("24)\t%05ds\t", -245));
	printf("%d\n", printf("24)\t%05ds\t", -245));
	unsigned int ui = 4294967295;
	printf("%d\n", ft_printf("25)\t%us\t", ui));
	printf("%d\n", printf("25)\t%us\t", ui));
	printf("%d\n", ft_printf("25.5)\t%-5us\t", 0));
	printf("%d\n", printf("25.5)\t%-5us\t", 0));
	printf("%d\n", ft_printf("26)\t%012us\t", 0)); // meme test avec d ?
	printf("%d\n", printf("26)\t%012us\t", 0));
	printf("%d\n", ft_printf("27)\t%012us\t", ui));
	printf("%d\n", printf("27)\t%012us\t", ui));
	printf("%d\n", ft_printf("28)\t%.13us\t", ui));
	printf("%d\n", printf("28)\t%.13us\t", ui));
	printf("%d\n", ft_printf("28.5)\t%-5.3us\t", 3));
	printf("%d\n", printf("28.5)\t%-5.3us\t", 3));
	printf("%d\n", ft_printf("28.5)\t%-3.5us\t", 3));
	printf("%d\n", printf("28.5)\t%-3.5us\t", 3));
	printf("%d\n", ft_printf("29)\t%-15.13us\t", ui)); // ui = 12
	printf("%d\n", printf("29)\t%-15.13us\t", ui));
	printf("%d\n", ft_printf("30)\t%-13.15us\t", ui));
	printf("%d\n", printf("30)\t%-13.15us\t", ui));
	printf("%d\n", ft_printf("31)\t%-13.0us\t", ui));
	printf("%d\n", printf("31)\t%-13.0us\t", ui));
	printf("%d\n", ft_printf("32)\t%*ds\t", -3 , 2));
	printf("%d\n", printf("32)\t%*ds\t",  -3 , 2));
	void *ptr = NULL;
	int number = 5;
	printf("%d\n", ft_printf("33)\t%ps\t", ptr));
	printf("%d\n", printf("33)\t%ps\t",  ptr));
	printf("%d\n", ft_printf("33.5)\t10%10ps\t", ptr));
	printf("%d\n", printf("33.5)\t10%10ps\t",  ptr));
	printf("%d\n", ft_printf("33.75)\t10%-10ps\t", ptr));
	printf("%d\n", printf("33.75)\t10%-10ps\t",  ptr));
	printf("%d\n", ft_printf("34)\ts%ps\t", &number));
	printf("%d\n", printf("34)\ts%ps\t",  &number));
	printf("%d\n", ft_printf("35)\ts%15ps\t", &number));
	printf("%d\n", printf("35)\ts%15ps\t",  &number));
	printf("%d\n", ft_printf("36)\ts%-15ps\t", &number));
	printf("%d\n", printf("36)\ts%-15ps\t",  &number));
	printf("%d\n", ft_printf("37)\ts%-1ps\t", &number));
	printf("%d\n", printf("37)\ts%-1ps\t",  &number));
	printf("%d\n", ft_printf("38)\t%-ds\t", 0));
	printf("%d\n", printf("38)\t%-xs\t", 0));
	printf("%d\n", ft_printf("39)\t%-5xs\t", 0));
	printf("%d\n", printf("39)\t%-5xs\t", 0));
	printf("%d\n", ft_printf("40)\t%5xs\t", 0));
	printf("%d\n", printf("40)\t%5xs\t", 0));
	printf("%d\n", ft_printf("41)\t%5.0xs\t", 0));
	printf("%d\n", printf("41)\t%5.0xs\t", 0));
	printf("%d\n", ft_printf("42)\t%5.5xs\t", 0));
	printf("%d\n", printf("42)\t%5.5xs\t", 0));
	printf("%d\n", ft_printf("43)\t%-5xs\t", 5));
	printf("%d\n", printf("43)\t%-5xs\t", 5));
	printf("%d\n", ft_printf("44)\t%5xs\t", 5));
	printf("%d\n", printf("44)\t%5xs\t", 5));
	printf("%d\n", ft_printf("45)\t%5xs\t", 245));
	printf("%d\n", printf("45)\t%5xs\t", 245));
	printf("%d\n", ft_printf("46)\t%-5xs\t", 245));
	printf("%d\n", printf("46)\t%-5xs\t", 245));
	printf("%d\n", ft_printf("47)\t%-5.2xs\t", 245));
	printf("%d\n", printf("47)\t%-5.2xs\t", 245));
	printf("%d\n", ft_printf("48)\t%*xs\t", -3 , 2));
	printf("%d\n", printf("48)\t%*xs\t",  -3 , 2));
	printf("%d\n", ft_printf("49)\t%*.*xs\t", -3 , 2 , 5));
	printf("%d\n", printf("49)\t%*.*xs\t",  -3 , 2 , 5));
	printf("%d\n", ft_printf("50)\t%-5xs\t", 2147483647));
	printf("%d\n", printf("50)\t%-5xs\t", 2147483647));
	printf("%d\n", ft_printf("51)\t%-5xs\t", -2147483647));
	printf("%d\n", printf("51)\t%-5xs\t", -2147483647));
	printf("%d\n", ft_printf("52)\t%-13xs\t", -2147483647));
	printf("%d\n", printf("52)\t%-13xs\t", -2147483647));
	printf("%d\n", ft_printf("53)\t%-13.15xs\t", -2147483647));
	printf("%d\n", printf("53)\t%-13.15xs\t", -2147483647));
	printf("%d\n", ft_printf("54)\t%-15.13xs\t", -2147483647));
	printf("%d\n", printf("54)\t%-15.13xs\t", -2147483647));
	printf("%d\n", ft_printf("55)\t%5xs\t", -245));
	printf("%d\n", printf("55)\t%5xs\t", -245));
	printf("%d\n", ft_printf("56)\t%-5xs\t", -245));
	printf("%d\n", printf("56)\t%-5xs\t", -245));
	printf("%d\n", ft_printf("57)\t%-5.10xs\t", -245));
	printf("%d\n", printf("57)\t%-5.10xs\t", -245));
	printf("%d\n", ft_printf("58)\t%01xs\t", -245));
	printf("%d\n", printf("58)\t%01xs\t", -245));
	printf("%d\n", ft_printf("59)\t%05xs\t", -245));
	printf("%d\n", printf("59)\t%05xs\t", -245));
	printf("%d\n", ft_printf("60)\t%05xs\t", -1));
	printf("%d\n", printf("60)\t%05xs\t", -1));
	printf("%d\n", ft_printf("61)\tthis %u number\t", 0));
	printf("%d\n", printf("61)\tthis %u number\t", 0));
	printf("%d\n", ft_printf("62)\t%.i\t", 0));
	printf("%d\n", printf("62)\t%.i\t", 0));
	printf("%d\n", ft_printf("63)\t%3u\t", 0));
	printf("%d\n", printf("63)\t%3u\t", 0));
	printf("%d\n", ft_printf("64)\t%.3u\t", 0));
	printf("%d\n", printf("64)\t%.3u\t", 0));
	printf("%d\n", ft_printf("65)\t%08.5u\t", 34));
	printf("%d\n", printf("65)\t%08.5u\t", 34));
	printf("%d\n", ft_printf("66)\ts%.0us\t", 0));
	printf("%d\n", printf("66)\ts%.0us\t", 0));
	printf("%d\n", ft_printf("67)\ts%5.0us\t", 0));
	printf("%d\n", printf("67)\ts%5.0us\t", 0));
	printf("%d\n", ft_printf("68)\ts%08.5xs\t", 0));
	printf("%d\n", printf("68)\ts%08.5xs\t", 0));
	printf("%d\n", ft_printf("69)\ts%.0xs\t", 0));
	printf("%d\n", printf("69)\ts%.0xs\t", 0));
	printf("%d\n", ft_printf("70)\ts%5.ps\t", NULL));
	printf("%d\n", printf("70)\ts%5.ps\t", NULL));
	//printf("%d\n", ft_printf("70)\ts%5ss\t", NULL));
	printf("%d\n", printf("71)\ts%5.5ss\t", NULL));
}
