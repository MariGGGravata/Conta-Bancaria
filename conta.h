typedef struct Conta TConta;

TConta *criar(int num, float saldoini, float empini);
void depositar(TConta *c, float dep);
void sacar(TConta *c, float saque);
void informar(TConta *c);
void PedirEmprestimo(TConta *c, float pediremp);
void PagarEmprestimo(TConta *c, float pagaremp);

