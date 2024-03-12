/* Definição de um novo tipo: ContaBancaria
*/
typedef struct contabancaria ContaBancaria;

/* Função em que o usuário preenche os dados de uma conta bancária
*/
ContaBancaria * cria_conta(char titular[], int numero, float saldo);

/* Função que atualiza o saldo da conta bancária
*/
void deposita (ContaBancaria * banco, float valor);

/* Função que verifica se o saldo disponível é suficiente para realizar o saque,
 caso seja, o saque é realizado
*/
void saca (ContaBancaria * banco, float valor);

/* Função que verifica se o saldo disponível é suficiente para realizar a transferência,
caso seja, a transferência é realizada
*/
void transfere(ContaBancaria *origem, ContaBancaria *destino, float valor);

/* Função que exibe na tela o saldo disponível
*/
float saldo (ContaBancaria * banco);

/* Função que libera o espaço alocado dinamicamente para a estrutura
*/
void exclui_conta (ContaBancaria * banco);
