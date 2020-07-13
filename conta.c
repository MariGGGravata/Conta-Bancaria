#include "conta.h"

struct Conta{
	int num;
	float saldo;
	float emp;
};

TConta *criar(int num, float saldoini, float empini){
	
	TConta* c = (TConta*)malloc(sizeof(TConta));
	c->num = num;
	c->saldo = saldoini;
	c->emp = empini;
	return c;
	
}

void sacar(TConta *c, float saque){
	
	if(saque > c->saldo){
		
		c->saldo -= saque;
		c->emp -= c->saldo;
		c->saldo -= c->saldo;
		
		
	} else if(saque == c->saldo || saque < c->saldo){
		
		c->saldo -= saque;
		
	}
		
		
	}
	

void PedirEmprestimo(TConta *c, float pediremp){
	
	c->emp += pediremp;
	
}

void PagarEmprestimo(TConta *c, float pagaremp){
	
	c->emp -= pagaremp;
	
}

void depositar(TConta *c, float dep){
	
	if(c->emp == 0){
		
		c->saldo += dep;
		
	} else if(dep >= c->emp && c->emp > 0){
		
		c->emp -= dep;
		c->saldo -= c->emp; 
		c->emp -= c->emp;
		
	} else if(dep < c->emp && c->emp > 0){
		
		c->emp -= dep;
		
	}
	
}

void informar(TConta *c){
	
	printf("Conta %d tem saldo R$%.1f\n", c->num, c->saldo);
	printf("Emprestimo feito: %.1f.\n", c->emp);
	
}
