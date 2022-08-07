#include <iostream>
#include <string.h>
#include <locale.h>
#include <math.h>
#include <stdlib.h>

int chose, amountM, vRed, idS, opcP, opcF, idF, opcPay, idSelection;
float t, trash, qtdP, payT;
char nMachines[40];
	
//structs 
	struct machines {
		
		int idMachine;
		char nameMachine[40];
		int limitMachine;
		int intern;
		float pay;
		char status[40];
		
	};
	
	struct machines m[1];
	
void registerMachines(){
	
	system("cls");
	
	printf("=======Cadastrar Máquinas=======\n");
	
	printf("Digite a quantidade de máquinas: \n");
	scanf("%d", &amountM);
		
	fflush(stdin);
	
	system("cls");
	
	vRed = 1;
	
	for(int i=0; i<amountM; i++){
		
		puts("=======Registro de Máquinas=======\n");
		
		printf("Dados da %d° máquina: \n\n", vRed);	
		
		printf("Digite o ID: ");
		scanf("%i", &m[i].idMachine);
		
		fflush(stdin);
		
		printf("\nDigite o nome da máquina: ");
		gets(nMachines);
		strcpy(m[i].nameMachine, nMachines);
		
		fflush(stdin);
		
		printf("\nCapacidade de Peças: ");
		scanf("%i", &m[i].limitMachine);
		
		fflush(stdin);
		
		m[i].intern = 0.00; 
		fflush(stdin);
		
		m[i].pay = 0;
		fflush(stdin);
		
		strcpy(m[i].status, "Disponivel");
		fflush(stdin);
		
		system("cls");
		
		vRed++;
	}
		
}

void statusMachines() {
	
		system("cls");
	
		puts("=======Consulta de Máquinas=======\n");
		
		vRed=1;
		
		for(int i=0; i<amountM; i++) {
			
			printf("Máquina %d°:\n\n", vRed);
			
			printf("ID: %d\n", m[i].idMachine);
			printf("Nome da máquina: %s\n", m[i].nameMachine);
			printf("Capacidade de peças: %i\n", m[i].limitMachine);
			printf("Peças dentro da máquina: %d\n", m[i].intern);
			printf("Preço total da lavagem: %.2f\n", m[i].pay);
			printf("Status: %s\n\n", m[i].status);
			
			vRed++;
			
			
		}
	
		system("pause");
	
}

void scheduleMachines(){
	
	system("cls");
	
	puts("=======Agendamento de Máquinas=======\n");
	
	printf("Digite o ID da máquina: ");
	scanf("%i", &idS);
	
	fflush(stdin);
	
	int v;
	
	for (int i=0; i<amountM; i++){
			
		if(idS == m[i].idMachine){
			
			printf("\nDados da máquina: \n");
			printf("ID da Máquina: %d\n", m[i].idMachine);
			printf("Nome da Máquina: %s\n", m[i].nameMachine);
			printf("Capacidade: %i\n", m[i].limitMachine);
			printf("Peças dentro da máquina: %d\n", m[i].intern);
			printf("Preço total da lavagem: %.2f\n", m[i].pay);
			printf("Status: %s\n", m[i].status);
			
			printf("\n");
			
			v = 1;
			
		}
		
	}
	
	if(v != 1){
		
		system("cls");
		
		printf("Número de ID não encontrado, Por favor Tente novamente!\n");
		
		system("pause");
		
	} else {
		
		printf("\nQual procedimento deseja realizar?\n");
		printf("[1] - Lavar\n");
		printf("[2] - Secar\n");
		
		printf("Opção: ");
		scanf("%i", &opcP);
		
		fflush(stdin);
		
		printf("Quantidade de Peças:");
		scanf("%f", &qtdP);
		
		fflush(stdin);
			
			trash = qtdP / 35;
			
			t = ceil(trash);
			
			payT = t * 18;
		
		if(qtdP > m[idS - 1].limitMachine){
			
			printf("Capacidade da máquina insulficiente");
		}	
		
		
		if (opcP == 1) {
			
			strcpy(m[idS - 1].status, "Lavando");
			m[idS - 1].pay = payT;
			m[idS - 1].intern = qtdP;
		
			
		} else if (opcP == 2) {
					
			strcpy(m[idS - 1].status, "Secando");
			m[idS - 1].pay = payT;
			m[idS - 1].intern = qtdP;	
			
		}
						
	}
			
}
	
void mainMenu() {
	
	system("cls");
	
	puts("=======Sistema de Lavagem=======\n");
	
	puts("[1] - Cadastro de Máquinas");
	puts("[2] - Listagem de Máquinas");
	puts("[3] - Procedimentos de Máquinas");
	puts("[4] - Pagamentos");
	puts("[0] - Sair");
	
	printf("\nOpção: ");
	scanf("%d", &chose);
	
	fflush(stdin);
	
}

void finishProcess(){
	
	system("cls");
	
	puts("=======Pagamento=======\n");
	
	printf("Digite o ID da máquina: ");
	scanf("%i", &idF);
	
	fflush(stdin);
	
	int a = 0;
	
	for (int i=0; i<amountM; i++){
			
		if(idF == m[i].idMachine){
			
			printf("\nDados da máquina: \n");
			printf("ID: %d\n", m[i].idMachine);
			printf("Nome: %s\n", m[i].nameMachine);
			printf("Capacidade: %i\n", m[i].limitMachine);
			printf("Peças dentro da máquina: %d\n", m[i].intern);
			printf("Preço total da lavagem: %.2f\n", m[i].pay);
			printf("Status: %s\n", m[i].status);
			
			printf("\n");
			
			a = 1;
			
		}
		
	}
	
	if (a != 1) {
		
		system("cls");
		
		printf("Número de ID não encontrado! Tente novamente!\n");
		
		system("pause");
		
	} else {
		
		printf("\n");
		
		printf("Total: %.2f", m[idF - 1].pay);
		
		printf("\n\nEscolha a forma de pagamento: \n");
		printf("[1] - Cartão\n");
		printf("[2] - Cheque\n");
		printf("[3] - Dinheiro\n");
		printf("[4] - Pix\n");
		
		printf("\nOpcao: ");
		scanf("%i", &opcF);	
		
		printf("\n\nPagamento efetuado:");
		
		printf("\n[1] - Sim");
		printf("\n[2] - Não");
		printf("\nOpção: ");
		
		scanf("%d", &opcPay);
		
		if (opcPay == 1) {
			
			system("cls");
			printf("Pagamento efetuado... Máquina disponível para uso\n");
			strcpy(m[idF - 1].status, "Disponivel");
			m[idF - 1].pay = 0.00;
			m[idF - 1].intern = 0;
			
			system("\npause");
			
		} else {
			
			system("cls");
			printf("Faça o pagamento para liberar a máquina! \n");
			system("\npause");
			
		}	
		
	}
		
}

void exitProgram(){
	
	system("cls");
	
	printf("=======Obrigado e volte sempre =)=======\n\n");
}


int main(int argc, char** argv) {
	
	setlocale(LC_ALL, "Portuguese");
	
	do {
		
	mainMenu();
	
	switch(chose) {
		
		case 1:
			registerMachines();
			break;
			
		case 2:
			statusMachines();
			break;
			
		case 3: 
			scheduleMachines();
			break;
			
		case 4:
			finishProcess();
			break;
			
		case 0:
			exitProgram();
			break;
			
		default:
			system("cls");
			printf("Opção inválida! Por favor digite uma das opções listadas no menu\n\n");
			system("pause");
			system("cls");
			break;
				
	}		
		
	} while(chose !=0 );
	
	return 0;
}
