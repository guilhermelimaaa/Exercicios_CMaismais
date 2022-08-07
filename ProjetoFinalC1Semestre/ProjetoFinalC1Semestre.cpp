#include <iostream>
#include <locale.h>
#include <string.h>
#define null 0

//variáveis do projeto (globais)
int cont, nav, opConsultar;
static int marcacao=0;
bool filtro=false;

//--------------------

//structs
struct cadastro{
	int id;
	char nome[400];
	char email[400];
	char rua[400], complemento[400], bairro[400], cidade[400], estado[400], pais[400]; 
	int numerocasa, cep; 
	int ddd, numerotel;
	int dia, mes, ano;
	char obs[900];
};

struct cadastro cad[100]; //struct cadastro = cad

//--------------------


//voids
void menuPrincipal(){
    
	system("cls");
	
	printf("=======Menu Principal======= \n");
	printf("[1] - Cadastrar \n");
	printf("[2] - Consultar \n");
	printf("[3] - Listar \n");
	printf("[4] - Excluir \n");
	printf("[0] - Sair \n");
	
	printf("\nOpção: ");
	scanf("%i", &nav);
}

void cadPessoas(){
	
	int qtdpessoas;
	
	system("cls");
	
	printf("Digite a Quantidade de pessoas que deseja cadastrar: \n");
	scanf("%i", &qtdpessoas);
	
	for(cont=0;cont<qtdpessoas;cont++){
		
		
		printf("\nDigite o ID da pessoa %i",cont+1);
		printf("\n");
		scanf("%i", &cad[cont].id);
		fflush(stdin);
		do{
			if(cad[cont].id == 0 || cad[cont].id == cad[cont - 1].id){
				printf("\nEste ID não pode ser usado, por favor fornecer outro ID: \n");
				scanf("%i", &cad[cont].id);
				fflush(stdin);
			}
		}while(cad[cont].id == 0);
		
		printf("\nDigite o nome: \n");
		scanf("%s", &cad[cont].nome);
        fflush(stdin);
		
		printf("\nDigite o email: \n");
		scanf("%s", &cad[cont].email);
		fflush(stdin);
		
		printf("\nDigite o endereço \n");
		printf("Digite a rua: \n");
		scanf("%s", &cad[cont].rua);
	    fflush(stdin);
		
		printf("\nDigite o endereço \n");
		printf("Digite o numero do logradouro: \n");
		scanf("%i", &cad[cont].numerocasa);
		fflush(stdin);
		
		printf("\nDigite o endereço \n");
		printf("Digite o complemento: \n");
		scanf("%s", &cad[cont].complemento);
		fflush(stdin);
		
		printf("\nDigite o seu endereço \n");
		printf("Digite o bairro: \n");
		scanf("%s", &cad[cont].bairro);
		fflush(stdin);
		
		printf("\nDigite o endereço \n");
		printf("Digite o numero do CEP: \n");
		scanf("%i", &cad[cont].cep);
		fflush(stdin);
		
		printf("\nDigite o endereço \n");
		printf("Digite a cidade: \n");
		scanf("%s", &cad[cont].cidade);
	    fflush(stdin); 
		
		printf("\nDigite o endereço \n");
		printf("Digite o estado: \n");
		scanf("%s", &cad[cont].estado);
	    fflush(stdin);
		
		printf("\nDigite o endereço \n");
		printf("Digite o país: \n");
		scanf("%s", &cad[cont].pais);
		fflush(stdin);
		
		printf("\nDigite o telefone \n");
		printf("Digite o DDD: \n");
		scanf("%i", &cad[cont].ddd);
		fflush(stdin);
		
		printf("\nDigite o telefone \n");
		printf("Digite o numero: \n");
		scanf("%i", &cad[cont].numerotel);
	    fflush(stdin);
		
		printf("\nDigite a data de nascimento \n");
		printf("Digite o dia: \n");
		scanf("%i", &cad[cont].dia);
		fflush(stdin);
		
		printf("\nDigite a data de nascimento \n");
		printf("Digite o mes: \n");
		scanf("%i", &cad[cont].mes);
	    fflush(stdin);
		
		printf("\nDigite a data de nascimento \n");
		printf("Digite o ano: \n");
		scanf("%i", &cad[cont].ano);
	    fflush(stdin);
		
		printf("\nDigite uma observação: \n");
		scanf("%s", &cad[cont].obs);
		fflush(stdin);
		
		marcacao++;
	}
}

void listar(){
	
	int marcacaoListar=0;
	
	system("cls");

    for(cont=0;cont<marcacao;cont++){
			
		if(cad[cont].id == null){
				printf("\nDados inexistentes ou excluídos... (._.)\n");
				
				system("pause");
			}else{
			
				printf("\nID: %i \n", cad[cont].id);
				printf("Nome: %s \n", cad[cont].nome);
				printf("E-mail: %s \n", cad[cont].email);
				printf("Endereço: %s", cad[cont].rua);
				printf(", %i", cad[cont].numerocasa);
				printf(", %s", cad[cont].complemento);
				printf(" - %s", cad[cont].bairro);
				printf(" - %i", cad[cont].cep);
				printf(" - %s", cad[cont].cidade);
				printf(" - %s", cad[cont].estado);
				printf(" - %s \n", cad[cont].pais);
				printf("Telefone: %i", cad[cont].ddd);
				printf(" %i \n", cad[cont].numerotel);
				printf("Data de Nascimento: %i", cad[cont].dia);
				printf("/ %i", cad[cont].mes);
				printf("/ %i \n", cad[cont].ano);
				printf("Observações: %s \n", cad[cont].obs);
				
				system("pause");
				
				marcacaoListar++;
			}
		
        }
        
    if(marcacaoListar == 0){
		printf("\nDados inexistentes ou excluídos... (._.)\n");
		
	    system("pause");
    }
}


void menuConsultar(){
	
	
	system("cls");
	
	printf("=======Menu Consultar======= \n");
	printf("\nDigite a opção que deseja consultar \n");
	printf("[1] - Consulta por id \n");
	printf("[2] - Consulta por nome \n");
	printf("[3] - Consulta por bairro \n");
	printf("[4] - Consulta por cidade \n");
	printf("[5] - Consulta por telefone \n");
	printf("[6] - Consulta por aniversário \n");
	printf("[0] - Voltar");
	
	printf("\nOpção: ");
    scanf("%i", &opConsultar);
}

void consultarNome(){
   
    char pesquisaNome[40];

	system("cls");
	
	printf("\nDigite o nome para a pesquisa: ");
	scanf("%s", pesquisaNome);
	fflush(stdin);
	
	system("cls");

    for(cont=0;cont<marcacao;cont++){
    	
    	if(cad[cont].id == null){
				printf("\nDados inexistentes ou excluídos... (._.)\n");
				
				system("pause");
		}else if(strcmp(cad[cont].nome, pesquisaNome)==0){
				
				filtro = true;
			
				printf("\nID: %i \n", cad[cont].id);
				printf("Nome: %s \n", cad[cont].nome);
				printf("E-mail: %s \n", cad[cont].email);
				printf("Endereço: %s", cad[cont].rua);
				printf(", %i", cad[cont].numerocasa);
				printf(", %s", cad[cont].complemento);
				printf(" - %s", cad[cont].bairro);
				printf(" - %i", cad[cont].cep);
				printf(" - %s", cad[cont].cidade);
				printf(" - %s", cad[cont].estado);
				printf(" - %s \n", cad[cont].pais);
				printf("Telefone: %i", cad[cont].ddd);
				printf(" %i \n", cad[cont].numerotel);
				printf("Data de Nascimento: %i", cad[cont].dia);
				printf("/ %i", cad[cont].mes);
				printf("/ %i \n", cad[cont].ano);
				printf("Observações: %s \n", cad[cont].obs);
				
				system("pause");
				
			}
		
        }
        
    if(filtro == false){
		printf("\nDados inexistentes ou excluídos... (._.)\n");
		
	    system("pause");
    }
}

void consultarTelefone(){
	 
	int opPesquisaTel, pesquisaDdd, pesquisaTel;
   
    system("cls");
	
	printf("=======Pesquisa por telefone======= \n");
	printf("[1] - Pesquisa por DDD \n");
	printf("[2] - Pesquisa por número telefone \n");
	
	printf("\nOpção: ");
	scanf("%i", &opPesquisaTel);
	fflush(stdin);
	
	system("cls");
	
	if(opPesquisaTel == 1){
		printf("Digite o DDD desejado para pesquisa: ");
		scanf("%i", &pesquisaDdd);
		fflush(stdin);
	} else if(opPesquisaTel == 2){
		printf("Digite o numero de telefone desejado para pesquisa: ");
		scanf("%i", &pesquisaTel);
		fflush(stdin);
	}
	
	system("cls");

    for(cont=0;cont<marcacao;cont++){
		
		if(cad[cont].id == null){
				printf("\nDados inexistentes ou excluídos... (._.)\n");
				
				system("pause");
		}else if(cad[cont].ddd == pesquisaDdd || cad[cont].numerotel == pesquisaTel){
				
				filtro = true;
			
				printf("\nID: %i \n", cad[cont].id);
				printf("Nome: %s \n", cad[cont].nome);
				printf("E-mail: %s \n", cad[cont].email);
				printf("Endereço: %s", cad[cont].rua);
				printf(", %i", cad[cont].numerocasa);
				printf(", %s", cad[cont].complemento);
				printf(" - %s", cad[cont].bairro);
				printf(" - %i", cad[cont].cep);
				printf(" - %s", cad[cont].cidade);
				printf(" - %s", cad[cont].estado);
				printf(" - %s \n", cad[cont].pais);
				printf("Telefone: %i", cad[cont].ddd);
				printf(" %i \n", cad[cont].numerotel);
				printf("Data de Nascimento: %i", cad[cont].dia);
				printf("/ %i", cad[cont].mes);
				printf("/ %i \n", cad[cont].ano);
				printf("Observações: %s \n", cad[cont].obs);
				
				system("pause");
				
			}
		
        }
        
    if(filtro == false){
		printf("\nDados inexistentes ou excluídos... (._.)\n");
		
	    system("pause");
    }
}

void consultarAniversario(){
	
	int opPesquisaAniversario, pesquisaDia, pesquisaMes;
   
    system("cls");
	
	printf("=======Pesquisa por data de aniversário=======\n");
	printf("[1] - Pesquisa por Dia \n");
	printf("[2] - Pesquisa por mês \n");
	
	printf("\nOpção: ");
	scanf("%i", &opPesquisaAniversario);
	fflush(stdin);
	
	
	system("cls");
	
	if(opPesquisaAniversario == 1){
		printf("Digite o dia desejado para pesquisa: ");
		scanf("%i", &pesquisaDia);
	} else if(opPesquisaAniversario == 2){
		printf("Digite o mês desejado para pesquisa: ");
		scanf("%i", &pesquisaMes);
	}
	
	system("cls");

    for(cont=0;cont<marcacao;cont++){
		
		if(cad[cont].id == null){
				printf("\nDados inexistentes ou excluídos... (._.)\n");
				
				system("pause");	
		}else if(cad[cont].dia == pesquisaDia || cad[cont].mes == pesquisaMes){
				
				filtro = true;
			
				printf("\nID: %i \n", cad[cont].id);
				printf("Nome: %s \n", cad[cont].nome);
				printf("E-mail: %s \n", cad[cont].email);
				printf("Endereço: %s", cad[cont].rua);
				printf(", %i", cad[cont].numerocasa);
				printf(", %s", cad[cont].complemento);
				printf(" - %s", cad[cont].bairro);
				printf(" - %i", cad[cont].cep);
				printf(" - %s", cad[cont].cidade);
				printf(" - %s", cad[cont].estado);
				printf(" - %s \n", cad[cont].pais);
				printf("Telefone: %i", cad[cont].ddd);
				printf(" %i \n", cad[cont].numerotel);
				printf("Data de Nascimento: %i", cad[cont].dia);
				printf("/ %i", cad[cont].mes);
				printf("/ %i \n", cad[cont].ano);
				printf("Observações: %s \n", cad[cont].obs);
				
				system("pause");
				
			}
		
        }
        
    if(filtro == false){
		printf("\nDados inexistentes ou excluídos... (._.)\n");
		
	    system("pause");
    }
}

void consultarId(){
	
    int pesquisaId;

	system("cls");
	
	printf("Digite o id para a pesquisa: ");
	scanf("%i", &pesquisaId);
	fflush(stdin);
	
		system("cls");

    for(cont=0;cont<marcacao;cont++){
		
		if(cad[cont].id == null){
				printf("\nDados inexistentes ou excluídos... (._.)\n");
				
				system("pause");	
		}else if(cad[cont].id == pesquisaId){
				
				filtro = true;
			
				printf("\nID: %i \n", cad[cont].id);
				printf("Nome: %s \n", cad[cont].nome);
				printf("E-mail: %s \n", cad[cont].email);
				printf("Endereço: %s", cad[cont].rua);
				printf(", %i", cad[cont].numerocasa);
				printf(", %s", cad[cont].complemento);
				printf(" - %s", cad[cont].bairro);
				printf(" - %i", cad[cont].cep);
				printf(" - %s", cad[cont].cidade);
				printf(" - %s", cad[cont].estado);
				printf(" - %s \n", cad[cont].pais);
				printf("Telefone: %i", cad[cont].ddd);
				printf(" %i \n", cad[cont].numerotel);
				printf("Data de Nascimento: %i", cad[cont].dia);
				printf("/ %i", cad[cont].mes);
				printf("/ %i \n", cad[cont].ano);
				printf("Observações: %s \n", cad[cont].obs);
				
				system("pause");
				
			}
		
        }
        
    if(filtro == false){
		printf("\nDados inexistentes ou excluídos... (._.)\n");
		
	    system("pause");
    }
}

void consultarBairro(){
	
	char pesquisaBairro[30];

	system("cls");
	
	printf("\nDigite o bairro para a pesquisa: \n");
	scanf("%s", &pesquisaBairro);
	fflush(stdin);
	
	system("cls");

    for(cont=0;cont<marcacao;cont++){
		
		if(cad[cont].id == null){
				printf("\nDados inexistentes ou excluídos... (._.)\n");
				
				system("pause");	
		}else if(strcmp(cad[cont].bairro, pesquisaBairro)==0){
				
				filtro = true;
			
				printf("\nID: %i \n", cad[cont].id);
				printf("Nome: %s \n", cad[cont].nome);
				printf("E-mail: %s \n", cad[cont].email);
				printf("Endereço: %s", cad[cont].rua);
				printf(", %i", cad[cont].numerocasa);
				printf(", %s", cad[cont].complemento);
				printf(" - %s", cad[cont].bairro);
				printf(" - %i", cad[cont].cep);
				printf(" - %s", cad[cont].cidade);
				printf(" - %s", cad[cont].estado);
				printf(" - %s \n", cad[cont].pais);
				printf("Telefone: %i", cad[cont].ddd);
				printf(" %i \n", cad[cont].numerotel);
				printf("Data de Nascimento: %i", cad[cont].dia);
				printf("/ %i", cad[cont].mes);
				printf("/ %i \n", cad[cont].ano);
				printf("Observações: %s \n", cad[cont].obs);
				
				system("pause");
				
			}
		
        }
        
    if(filtro == false){
		printf("\nDados inexistentes ou excluídos... (._.)\n");
		
	    system("pause");
    }
}

void consultarCidade(){
	
	char pesquisaCidade[25];

	system("cls");
	
	printf("\nDigite a cidade para a pesquisa: \n");
	scanf("%s", &pesquisaCidade);
	fflush(stdin);
	
	system("cls");

    for(cont=0;cont<marcacao;cont++){
		
		if(cad[cont].id == null){
				printf("\nDados inexistentes ou excluídos... (._.)\n");
				
				system("pause");	
		}else if(strcmp(cad[cont].cidade, pesquisaCidade)==0){
				
				filtro = true;
			
				printf("\nID: %i \n", cad[cont].id);
				printf("Nome: %s \n", cad[cont].nome);
				printf("E-mail: %s \n", cad[cont].email);
				printf("Endereço: %s", cad[cont].rua);
				printf(", %i", cad[cont].numerocasa);
				printf(", %s", cad[cont].complemento);
				printf(" - %s", cad[cont].bairro);
				printf(" - %i", cad[cont].cep);
				printf(" - %s", cad[cont].cidade);
				printf(" - %s", cad[cont].estado);
				printf(" - %s \n", cad[cont].pais);
				printf("Telefone: %i", cad[cont].ddd);
				printf(" %i \n", cad[cont].numerotel);
				printf("Data de Nascimento: %i", cad[cont].dia);
				printf("/ %i", cad[cont].mes);
				printf("/ %i \n", cad[cont].ano);
				printf("Observações: %s \n", cad[cont].obs);
				
				system("pause");
				
			}
		
        }
        
    if(filtro == false){
		printf("\nDados inexistentes ou excluídos... (._.)\n");
		
	    system("pause");
    }
}

void excluir(){
	
	int excluirId;
	
	system("cls");
	
	printf("=======Menu Excluir======= \n");
	printf("\nDigite o ID que deseja excluir: \n");
	scanf("%i", &excluirId);
	fflush(stdin);
	
	
	for(cont=0;cont<marcacao;cont++){
		if(cad[cont].id == excluirId){
			cad[cont].id = null;
	    }
    }
}

void encerrarPrograma(){
	
	system("cls");
	
	printf("Saindo, obrigado por usar o programa =) ...\n");
	printf("\nDesenvolvido por: Guilherme Lima");
}

//----------------


//main
int main() {
	
	setlocale(LC_ALL, "Portuguese");
     
	
	do{
    	menuPrincipal();
    	  
		  switch(nav){
    	  	case 1:
    	  		cadPessoas();
				break;
    	  		
    	  	case 2:
    	  	    
				do{
				 menuConsultar();
    	  	        switch(opConsultar){
    	  	     	    case 1:
    	  	     		    consultarId();
    	  	     		    break;
    	  	     	    
						case 2:
							consultarNome();
							break;
						
						case 3:
							consultarBairro();
							break;
						
						case 4:
							consultarCidade();
							break;
							
						case 5:
							consultarTelefone();
							break;
							
						case 6:
							consultarAniversario();
							break;
	
				    }  
				}while(opConsultar!=0);
				   
    	  		break;
    	  	case 3:
    	  		listar();
    	  		break;
    	  	
			case 4:
				excluir();
				break;
				
			case 0:
				encerrarPrograma();
				break;
				
			default:
			system("cls");
			printf("Opção inválida! Por favor digite uma das opções listadas no menu\n");
			system("pause");
			system("cls");
			break;
           }
	
	}while(nav!=0);
	
	return 0;
}
