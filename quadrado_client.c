/*
 * This is sample code generated by rpcgen.
 * These are only templates and you can use them
 * as a guideline for developing your own functions.
 */

#include "quadrado.h"


void
add_prog_1(char *host)
{
	CLIENT *clnt;
	int  *result_1;
	numbers  quadrado_1_arg;
	printf("Digite o numero que voce quer calcular:");
	scanf("%d",&quadrado_1_arg.a);

#ifndef	DEBUG
	clnt = clnt_create (host, ADD_PROG, ADD_VERS, "udp");
	if (clnt == NULL) {
		clnt_pcreateerror (host);
		exit (1);
	}
#endif	/* DEBUG */
	result_1 = quadrado_1(&quadrado_1_arg, clnt);
	if (result_1 == (int *) NULL) {
		clnt_perror (clnt, "call failed");
	}else{
	printf("resultado: %d\n",*result_1);
	}
#ifndef	DEBUG
	clnt_destroy (clnt);
#endif	 /* DEBUG */
}


int
main (int argc, char *argv[])
{
	char *host;

	if (argc < 2) {
		printf ("forma de uso: %s <servidor> \n", argv[0]);
		exit (1);
	}
	host = argv[1];
	add_prog_1 (host);
exit (0);
}
