/* CRT0T.COM: a program linked the plain way, with lib/crt0.s and
 * cpm.lib, no CLIB.SYS, so it runs under Lobo's CP/M 2.2 too.
 * stdout works only when crt0 has set the console up, and bios()
 * reaches CP/M 2.2's jump table only when __bios22 takes its
 * arguments from the stack. */

#include <stdio.h>
#include <cpm.h>

int main(void)
{
	printf("crt0 stdout ok\n");
	bios(4, 'B', 0);	/* CONOUT, the character in C */
	bios(4, 'I', 0);
	bios(4, 'O', 0);
	bios(4, 'S', 0);
	printf(" by bios\n");
	return 0;
}
