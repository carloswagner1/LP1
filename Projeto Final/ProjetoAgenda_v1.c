#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct{
	int codigo;
	char nome[50];
	char endereco[100];
	char email[50];
	char telefone[15];
  	
} Contato;

void flush_in();
Contato * inicializar(int cap);
void novoContato (Contato *agenda, int *num);
void exibeContatoEmail (Contato *agenda, int num);
void exibeContatoNome(Contato *agenda, int num);
void alteraContato(Contato *agenda, int num);
void imprimir(Contato *agenda, int i);


int main(){
	Contato *agenda;
	int cap = 20;
	int num = 0;
	int opc;
	printf("***Projeto Final - Agenda de Contatos***\n");
	agenda = inicializar(cap);
	
	do{
		printf("\nMenu Inicial\n\n");
		printf("Escolha a opcao que deseja realizar:\n");
		printf("1) Cadastrar contato.\n");
		printf("2) Pesquisar contato pelo email\n");
		printf("3) Pesquisar contato pelo nome\n");
		printf("4) Alterar dados de um contato\n");
		printf("5) Excluir contato.\n");
		printf("6) Sair.\n");
		printf("Opcao: ");		
		
		scanf("%d", &opc);
		
		switch(opc){
			case 1:
		        agenda = (Contato *) realloc(agenda, (num+1) *sizeof(Contato));
		        novoContato(agenda, &num);
		        printf("Contato cadastrado com sucesso.\n");
			break;
			
			case 2: 
				if(num == 0){
					printf("\nNenhum contato cadastrado.\n");
				}else{
					exibeContatoEmail (agenda, num);			
				}
			break;
			
			case 3:
				if(num == 0){
					printf("\nNenhum contato cadastrado.\n");
				}else{
					exibeContatoNome(agenda, num);
				}
			break;

			case 4:
				if(num == 0){
					printf("\nNenhum contato cadastrado.\n");
				}else{
					alteraContato(agenda, num);					
				}
			break;
			
			case 5:
				if(num == 0){
					printf("\nNenhum contato cadastrado.\n");
				}else{
					printf("Para apagar contato, pesquise o codigo do contato no menu consulta.\n");
					printf("Informe o codigo do contato que deseja apagar ou digite -1 para voltar ao menu.\n");
					printf("Opcao: ");
					int id;
					scanf("%i", &id);
					if(id == -1) break;
					int i;
					for(i=id; i<num; i++){
						strcpy(agenda[i].nome, agenda[i+1].nome);
						strcpy(agenda[i].endereco, agenda[i+1].endereco);
						strcpy(agenda[i].email, agenda[i+1].email);
						strcpy(agenda[i].telefone, agenda[i+1].telefone);
						agenda[i].codigo = i;				
					}
					num--;
				}
			break;
			
			case 6: 
				printf("\nFechando a agenda.\n");
			break;
			
			default:
				printf("Opcao invalida.");
				flush_in();
		}
	}while(opc!=6);
	
	free(agenda);
	return 0;
}

void flush_in(){
	int ch;
	while((ch = fgetc(stdin)) != EOF && ch != '\n'){}
}

Contato *inicializar(int cap){
	Contato *agenda;
	
	agenda = (Contato *) malloc(sizeof(Contato) * cap);
	
	return agenda;
}

void novoContato(Contato *agenda, int *num){
	printf("\nDigite o nome do contato: ");
	flush_in();
	gets(agenda[*num].nome);
	printf("Digite o endereco do contato: ");
	fgets(agenda[*num].endereco, 100, stdin);
	printf("Digite o email o contato: ");
	scanf("%s", agenda[*num].email);
    flush_in();
	printf("Digite o telefone do contato: ");
	fgets(agenda[*num].telefone, 15, stdin); 
	agenda[*num].codigo= *num;
	(*num)++;

}

void exibeContatoEmail(Contato *agenda, int num){
	int i;
	char busca[100];
	printf("Digite email a ser pesquisado: ");
	scanf("%s", busca);
	for(i=0; i<num; i++){
	    if(!strcmp(agenda[i].email, busca)){
			printf("\nContato encontrado:\n");
			imprimir(agenda, i);
			return;
		}else{
			printf("\nContato nao encontrado");
		}
	}
}

void exibeContatoNome(Contato *agenda, int num){
	int i, resultado;
	char busca[50];
	printf("Digite nome a ser pesquisado: ");
	scanf("%s", busca);
	for(i=0; i<num; i++){
	    if(!strcmp(agenda[i].nome, busca)){
			printf("\nContato encontrado:\n");
			imprimir(agenda, i);
			return;
		}else{
			resultado = 0;
		}
	}
	if(resultado == 0){
		printf("\nContato nao encontrado.\n");
	}
	
}

void alteraContato(Contato *agenda, int num){
  	int i;
	char busca[50];
	printf("Digite o nome do contato que deseja alterar: ");
	scanf("%s", busca);
	for(i=0; i<num; i++){
	    if(!strcmp(agenda[i].nome, busca)){
	    	printf("Escolha uma das opcoes:\n");
			printf("1 - Nome\n");
			printf("2 - Endereço\n");
			printf("3 - Email\n");
			printf("4 - Telefone\n");
			printf("5 - Cancelar a operacao\n");
			printf("Opcao: ");	
			int opc;
			scanf("%i", &opc);
			switch(opc){
				case 1:
				    printf("Novo nome: ");
				    flush_in();
				    gets(agenda[i].nome);
				    printf("Contato alterado com sucesso.\n");
				break;
				
				case 2:
			    	printf("Novo endereco: ");
			    	getchar();
				  	fgets(agenda[i].endereco, 100, stdin);
				    printf("Contato alterado com sucesso.\n");
				break;

				case 3:
			    	printf("Novo email: ");
			    	scanf("%s", &agenda[i].email);
				    printf("Contato alterado com sucesso.\n");
				break;

				case 4:
			    	printf("Novo telefone: ");
			    	scanf("%s", &agenda[i].telefone);
				    printf("Contato alterado com sucesso.\n");
				break;
				
				case 5:
					return;
				break;
				
				default:
					printf("Opcao invalida.\n");
					flush_in();
			}		  			
			return;
		}else{
			printf("\nContato nao encontrado\n");
		}
	}
}

void imprimir(Contato *agenda, int i){
	printf("\nCodigo: %i\n", agenda[i].codigo);
	printf("Nome: %s\n", agenda[i].nome);
	printf("Endereco: %s", agenda[i].endereco);
	printf("E-mail: %s\n", agenda[i].email);
	printf("Telefone: %s\n", agenda[i].telefone);
}
