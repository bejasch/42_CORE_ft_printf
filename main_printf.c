/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bschneid <bschneid@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/30 15:44:29 by bschneid          #+#    #+#             */
/*   Updated: 2024/05/06 10:52:04 by bschneid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	compare(char *string, ...)
{
	va_list	args1;
	va_list	args2;
	int		ret1;
	int		ret2;

	va_start(args1, string);
	va_copy(args2, args1);

	printf("\n--->>> String-INPUT: '%s'", string);
	puts("\n\n### OUTPUT - printf:");
	ret1 = vprintf(string, args1);
	printf("\n\tprintf-Return-Value: %i", ret1);
	puts("\n-----	 -----	 -----");
	puts("### OUTPUT - OWN ft_printf:");
	ret2 = vft_printf(string, args2);
	printf("\n\tOWN Return-Value: %i", ret2);
	if (ret1 != ret2)
	{
		puts("\n\n\t\t   ;;;***###;;--;;###***;;;");
		puts("\t\t;;;***###&&& DIFF &&&###***;;;");
		puts("\t\t   ;;;***###;;--;;###***;;;");
	}
	puts("\n\n--------------------------------");
	va_end(args1);
	va_end(args2);
}

/*
TO COMPILE: 
cc -Wall -Werror -Wextra main_printf.c -o main_printf.out -L. -lftprintf

TO EXCHANGE:
int	vft_printf(const char *input, va_list args)
{
	// va_list	args;
	
	// va_start(args, input);
...
*/
int	main(void)
{
	// ------------------- specifier ### c ### --------------------------
	puts("\t\t#################################");
	puts("\t\t############## CHAR #############");
	puts("\t\t#################################");
	compare("%c", 't');
	compare("BEG%6cEND", 't');
	compare("BEG%-6cEND", 't');
	compare("BEG%6.3cEND", 't');
	compare("BEG%-6.3cEND", 't');
	compare("BEG%00cEND", 't');
	compare("%6lc", "$");
	compare("Hello: %c\nThis is %c a test!", 't', '@');
	compare("Characters: %c %c \n", 'a', 65);
	compare("single char: 123456%c89\n", 'K');
	compare("two chars: 123456%c8%c\n", 'K', 'l');
	compare("%-2c%-3c%-4c%-1c%-2c%-3c%-4c%-1c%-2c%-3c%-4c%-1c%-2c%-3c%-4c%-1c%-2c%-3c%-4c%-1c%-2c%-3c%-4c%-1c%-2c%-3c%-4c%-1c%-2c%-3c%-4c%-1c%-2c%-3c%-4c%-1c%-2c%-3c%-4c%-1c%-2c%-3c%-4c%-1c%-2c%-3c%-4c%-1c%-2c%-3c%-4c%-1c%-2c%-3c%-4c%-1c%-2c%-3c%-4c%-1c%-2c%-3c%-4c%-1c%-2c%-3c%-4c%-1c%-2c%-3c%-4c%-1c%-2c%-3c%-4c%-1c%-2c%-3c%-4c%-1c//%-2c%-3c%-4c%-1c%-2c%-3c%-4c%-1c%-2c%-3c%-4c%-1c%-2c%-3c", ' ','!','"','#','$','%','&','\'','(',')','*','+',',','-','.','/','0','1','2','3','4','5','6','7','8','9',':',';','<', '=','>','?','@','A','B','C','D','E','F','G','H','I','J','K','L','M','N','O','P','Q','R','S','T','U','V','W','X','Y', 'Z','[','\\',']','^','_','`','a','b','c','d','e','f','g','h','i','j','k','l','m','n','o','p','q','r','s','t','u', 'v','w','x','y','z','{','|','~');
	compare("%-2c%-3c%-4c%-1c%-2c%-3c%-4c%-1c%-2c%-3c%-4c%-1c%-2c%-3c%-4c%-1c%-2c%-3c%-4c%-1c%-2c%-3c%-4c%-1c%-2c%-3c%-4c%-1c%-2c%-3c%-4c",(char)1,(char)2,(char)3,(char)4,(char)5,(char)6,(char)7,(char)8,(char)9,(char)10,(char)11, (char)12,(char)13,(char)14,(char)15,(char)16,(char)17,(char)18,(char)19,(char)20,(char)21,(char)22,(char)23,(char)24, (char)25,(char)26,(char)27,(char)28,(char)29,(char)30,(char)31);
	compare("%-1c%-2c%-3c%-4c%-1c%-2c%-3c%-4c%-1c%-2c%-3c%-4c%-1c%-2c%-3c%-4c%-1c%-2c%-3c%-4c%-1c%-2c%-3c%-4c%-1c%-2c%-3c%-4c%-1c%-2c%-3c%-4c%-1c%-2c%-3c%-4c%-1c%-2c%-3c%-4c%-1c%-2c%-3c%-4c%-1c%-2c%-3c%-4c%-1c%-2c%-3c%-4c%-1c%-2c%-3c%-4c%-1c%-2c%-3c%-4c%-1c%-2c%-3c%-4c%-1c%-2c%-3c%-4c%-1c%-2c%-3c%-4c%-1c%-2c%-3c%-4c%-1c%-2c%-3c%-4c%-1c%-2c%-3c%-4c%-1c%-2c%-3c%-4c%-1c%-2c%-3c%-4c%-1c%-2c%-3c%-4c%-1c%-2c%-3c%-4c%-1c%-2c%-3c%-4c%-1c%-2c%-3c%-4c%-1c%-2c%-3c%-4c%-1c%-2c%-3c%-4c%-1c%-2c%-3c%-4c%-1c%-2c%-3c%-4c%-1c%-2c%-3c%-4c",(char)128,(char)129,(char)130, (char)131,(char)132,(char)133,(char)134,(char)135,(char)136,(char)137,(char)138,(char)139,(char)140,(char)141, (char)142,(char)143,(char)144,(char)145,(char)146,(char)147,(char)148,(char)149,(char)150,(char)151,(char)152, (char)153,(char)154,(char)155,(char)156,(char)157,(char)158,(char)159,(char)160,(char)161,(char)162,(char)163, (char)164,(char)165,(char)166,(char)167,(char)168,(char)169,(char)170,(char)171,(char)172,(char)173,(char)174, (char)175,(char)176,(char)177,(char)178,(char)179,(char)180,(char)181,(char)182,(char)183,(char)184,(char)185, (char)186,(char)187,(char)188,(char)189,(char)190,(char)191,(char)192,(char)193,(char)194,(char)195,(char)196, (char)197,(char)198,(char)199,(char)200,(char)201,(char)202,(char)203,(char)204,(char)205,(char)206,(char)207, (char)208,(char)209,(char)210,(char)211,(char)212,(char)213,(char)214,(char)215,(char)216,(char)217,(char)218, (char)219,(char)220,(char)221,(char)222,(char)223,(char)224,(char)225,(char)226,(char)227,(char)228,(char)229, (char)230,(char)231,(char)232,(char)233,(char)234,(char)235,(char)236,(char)237,(char)238,(char)239,(char)240, (char)241,(char)242,(char)243,(char)244,(char)245,(char)246,(char)247,(char)248,(char)249,(char)250,(char)251, (char)252,(char)253,(char)254,(char)255);
	compare("%-20cEND", 'x');
	compare("%-45c%--157.185dEND", 118,1175809301);
	compare("%--72cEND", 118);
	compare("%--172cEND", 108);
	compare("%--132cEND", -100);



	// ---------------------- %s -----------------------#
	puts("\t\t#################################");
	puts("\t\t############ STRING #############");
	puts("\t\t#################################");
	compare("%s", "A string");
	compare("single string: blabla%sblabla", "HELLO");
	compare("two strings: blabla%sblab%sla", "HELLO", "123");
	compare("%022s", "A string");
	compare("%-+ #022.5s", "A string");
	compare("%-22.5sENDE", "A string");
	compare("%22.11sENDE", "A string");
	compare("%22.5sENDE", "A string");
	compare("%22.0sENDE", "A string");
	// A simple string; 	'Hello'
	compare("'%s'", "Hello");
	// A string with a minimum length 	 	'	  Hello'
	compare("'%10s'", "Hello");
	// Minimum length, left-justified 	 	'Hello	  '
	compare("'%-10s'", "Hello");
	compare("Width trick: %*s", 5, "Test");
	compare("BEG%23sEND", NULL);
	compare("BEG%.sEND", NULL);
	compare("BEG%.3sEND", NULL);
	compare("BEG%23.3sEND", NULL);
	compare("BEG%.6sEND", NULL);
	compare("BEG%32sEND", NULL);
	compare("BEG%-32sEND", NULL);
	compare("BEG%-16sEND", NULL);
	compare("BEG%.03sEND", NULL);
	compare("BEG%3.sEND", NULL);
	compare("BEG%10.sEND", NULL);
	compare("BEG%-3.sEND", NULL);
	compare("BEG%-8.sEND", NULL);
	compare("BEG%3.1sEND", NULL);
	compare("BEG%9.1sEND", NULL);

	// ---------------------- %i -----------------------
	puts("\t\t#################################");
	puts("\t\t########### INT/DEC #############");
	puts("\t\t#################################");
	compare("(-37585): %i", -37585);
	compare("smallest signed (-2147483648): %d", -2147483648);
	compare("my printf: biggest signed (2147483647): %d", 2147483647);
	compare("(0): %i", 0);
	compare("Decimals: %d %ld", 1977, 650000L);
	compare("Preceding with blanks: %10d", 1977);
	compare("Preceding with zeros: %010d", 1977);
	compare("Width trick: %*d", 5, 10);
	compare("Preceding with blanks: %10dEND", 1977);
	compare("Preceding with zeros: %010dEND", 1977);
	compare("Preceding with blanks: %-10dEND", 1977);
	compare("Preceding with zeros: %-010dEND", 1977);
	compare("Preceding with zeros: %+-010dEND", 1977);
	// No difference betweeen %d and %i in printf (only when scanning)
	compare("Decimal: %d", 10);	// Output: Decimal: 10
	compare("Octal: %d", 010);	// Output: Octal: 8
	compare("Hex: %d", 0x10);	// Output: Hex: 16

	compare("%08.5i", 34);
	compare("%010.5i", -216);
	compare("%08.5i", 0);
	compare("%08.3i", 8375);
	compare("%08.3i", -8473);
	compare("%08.5d", 34);
	compare("%010.5d", -216);
	compare("%08.5d", 0);
	compare("%08.3d", 8375);
	compare("%08.3d", -8473);

	// ---------------------- %p -----------------------
	puts("\t\t#################################");
	puts("\t\t############ POINTER ############");
	puts("\t\t#################################");
	int	x;
	int	*ptr;
	x = 4288;
	ptr = &x;
	compare("pointer value : %p", ptr);
	compare("pointer address : %p", &ptr);
	compare("pointer value : START%10pEND", ptr);
	compare("pointer address : START%20pEND", &ptr);
	compare("pointer value : START%10.5pEND", ptr);
	compare("pointer address : START%20.5pEND", &ptr);
	compare("pointer value : START%10.3pEND", 0);
	compare("pointer value : START%-10pEND", ptr);
	compare("pointer address : START%-20pEND", &ptr);
	compare("pointer value : START%-10.5pEND", ptr);
	compare("pointer address : START%-20.5pEND", &ptr);
	compare("pointer value : START%-10.3pEND", 0);

	// ---------------------- %u -----------------------
	puts("\t\t#################################");
	puts("\t\t########## UNSIGNED #############");
	puts("\t\t#################################");
	compare("unsigned (4294967295): %u", 4294967295);
	compare("Preceding with blanks: %10uEND", 1977);
	compare("Preceding with zeros: %010uEND", 1977);
	compare("Preceding with blanks: %-10uEND", 1977);
	compare("Preceding with zeros: %-010uEND", 1977);
	compare("Preceding with zeros: %+-010uEND", 1977);
	compare("%08.5u", 34);
	compare("%08.5u", 0);
	compare("%08.3u", 8375);
	
	// ---------------------- %x -----------------------
	puts("\t\t#################################");
	puts("\t\t############# HEXA ##############");
	puts("\t\t#################################");
	compare("hex value x (2ed): %x", 749);
	compare("hex value x (2ed): %X", 749);
	compare("hex value x (AFFE): %X", 45054);
	compare("Preceding with zeros: %+-010xEND", 1977);
	compare("Preceding with zeros: %+010xEND", 1977);
	compare("Preceding with zeros: %+#010xEND", 1977);
	compare("Preceding with zeros: %+#10xEND", 1977);
	compare("Preceding with zeros: %+-010xEND", 0);
	compare("Preceding with zeros: %+010xEND", 0);
	compare("Preceding with zeros: %+#010xEND", 0);
	compare("Preceding with zeros: %+#10xEND", 0);
	compare("Preceding with zeros: %10.5xEND", 1234);
	compare("Preceding with zeros: %10.2xEND", 1234);
	compare("Preceding with zeros: %10.2xEND", 0);
	compare("Preceding with zeros: %10.0xEND", 0);
	compare("Preceding with zeros: %#xEND", 0);
	compare("Preceding with zeros: %0#xEND", 0);
	compare("%08.5x", 34);
	compare("%08.5x", 0);
	compare("%08.3x", 8375);
	compare("%08.5x", 34);
	compare("%08.5x", 0);
	compare("%08.3x", 8375);
	compare("%08.5X", 34);

	puts("\t\t#################################");
	puts("\t\t############ OTHERS #############");
	puts("\t\t#################################");
	compare("What happens here %%% r % ?%d !");
	compare("What happens here %%% r % ?%d !", 42);
	compare("What happens here %%% r % ?%d !", 42, 24);
	compare("This %% is %%%% a test!");

	compare("%c||%s||%d||%i||%u||%x||%X||%p||%%", 0, (char *)NULL, 8, 8, 42, 42, 0, (void *)0);
	compare("%c||%s||%d||%i||%u||%x||%X||%p||%%", 0, (char *)NULL, 0, 0, 0, 0, 0, (void *)0);

	compare("Some different radices: %d %x %X %#x %#X \n", 1234567, 1234567, 1234567, 1234567, 1234567);
	compare("%0%%-100.142X%-156c%-163.122dEND", 966917282u, 116, -1334835467);
	compare("%--81p%-115c%59s%135p%-46.34sEND", (void*)1228459267589004209lu, 75, "`-@y3g&n[4!L=", (void*)7434010127989266962lu, ",\v{#*|<Z,|M.OWYN@A$+r%YM:OOX");
	compare("%-9.53X%-59c%0110.72x%0019.4dEND", 2443914393u, 110, 1020946345u, -1518145014);
	compare("%--34.169x%-153c%---%%-164pEND", 516530274u, -113, (void*)9877588959652347135lu);
	compare("%--78c%051.181xEND", 35, 316390971u);
	compare("%-52c%---163c%0%%050.35uEND", -60, -30, 3953001178u);
	compare("%34c%--142.160x%--10.37i%--94.58u%-157cEND", 62, 639732752u, -1818745559, 2508057613u, 100);
	compare("%117p%-44c%-156c%-88.109s%0%END", (void*)8225290685743754462lu, -123, 65, NULL);
	compare("%91p%--8.179X%--190cEND" ,(void*)13930816918730035186lu, 505873219u, 9);
	compare("%00035.176X%-177cEND" , 825037686u, -45);
	compare("%-186.138i%86p%-113c%--87pEND" ,-1320475933,(void*)11899625258064503923lu, -39,(void*)15206197846470084523lu);
	compare("%-66.31x%-38.140i%-%%-150c%--75.38xEND" , 782499398u, -1057971833, 41, 3516211351u);

	// ---------------------- %x -----------------------
	puts("\t\t#################################");
	puts("\t\t########### PROBLEMS ############");
	puts("\t\t#################################");
	compare(" % d END", 0);
	compare(" % d END", 1);
	compare(" % d END", 9);
	compare(" % d END", 10);
	compare(" % d END", 11);
	compare(" % d END", 15);
	compare(" % d END", 16);
	compare(" % d END", 17);
	compare(" % d END", 99);
	compare(" % d END", 100);
	compare(" % d END", 101);
	compare(" % d END", INT_MAX);
	compare(" % d END", LONG_MIN);
	compare(" % d % d % d % d % d % d % dEND", INT_MAX, INT_MIN, LONG_MAX, LONG_MIN, ULONG_MAX, 0, -42);
	compare(" % i END", 0);
	compare(" % i END", 1);
	compare(" % i END", 9);
	compare(" % i END", 10);
	compare(" % i END", 11);
	
	// ---------------------- %% -----------------------
	puts("\t\t#################################");
	puts("\t\t############# PERC ##############");
	puts("\t\t#################################");
	compare("%");
	compare("Test%");
	compare("%TT");
	compare("%23.12");
	compare("%Test");
	compare("%%");
	compare("Test: %%55");
	compare("print percent: 1234%%1234\n");
	compare("print two times percent: 1234%%1234%%\n");
	compare("%-5%");
	compare("%05%");
	compare("%0-5%");
	compare("BEGIN%25%END");
	compare("BEGIN%-25%END");
	compare("BEGIN% 25%END");
	compare("BEGIN%25.0%END");
}
