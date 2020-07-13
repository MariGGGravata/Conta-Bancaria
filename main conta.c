#include <stdio.h>
#include <stdlib.h>
# include "conta.h"

int main(int argc, char *argv[]) {
	
	TConta *c1, *c2;
	
	c1 = criar(1234, 150, 0);
	c2 = criar(9999, 250, 0);
	
	
	informar(c1);
	printf("\n");
	informar(c2);
	
	depositar(c2, 300);
	
	printf("\n-----------------------\n");
	informar(c1);
	printf("\n");
	informar(c2);
	
	PedirEmprestimo(c1, 300);
	PedirEmprestimo(c2, 500);
	
	printf("\n-----------------------\n");
	informar(c1);
	printf("\n");
	informar(c2);
	
	depositar(c1, 100);
	depositar(c2, 1000);
	
	printf("\n-----------------------\n");
	informar(c1);
	printf("\n");
	informar(c2);
	
	sacar(c1, 100);
	sacar(c2, 1500);
	
	printf("\n-----------------------\n");
	informar(c1);
	printf("\n");
	informar(c2);
	
	depositar(c1, 500);
	depositar(c2, 500);
	
	printf("\n-----------------------\n");
	informar(c1);
	printf("\n");
	informar(c2);
	
		
	return 0;
}
