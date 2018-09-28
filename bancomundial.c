#include <stdio.h>                                         //Inclui funcionalidade padrão só para o printf e scanf.
int main (void) {                                           //Indica que e o programa principal sem retornar valores (void).
    int opcao;                                              //Define a variável opcao como inteira para guardar a opção selecionada.
    printf("\n_____________________________");    //Imprime na tela uma linha tracejada só para montar um visual do nome do banco.
    printf("\n B A N C O     M U N D I A L ");        //Imprime na tela o nome do banco.
    printf("\n=============================");    //Imprime na tela uma linha com traços so para separar o nome do banco do menu principal.
    printf("\nMenu Principal:");             //Imprime na tela o cabeçalho do  Menu Principal.
    printf("\n");                                           //Imprime na tela uma linha em branco.
    printf("\n      1 -> Credito");                //Imprime na tela a primeira opção.
    printf("\n      2 -> Seguros\n");   	   //Imprime na tela a opção de seguros.
    printf("\n      3 -> Suporte\n");		   //Imprime na tela a opção de suporte.
    printf("\n      0 -> Sair\n");                //Imprime na tela a opção de sair
    printf("\n");                                           //Imprime na tela uma linha em branco.
    printf("Qual a sua opção?");            //Imprime na tela a pergunta para escolher uma opção.
    scanf("%d",&opcao);                                 //Le o teclado capturando a opção digitada na variável opcao.
    switch(opcao){                                          //Testa a opção selecionada para direcionar o código para o conjunto de comandos da opção.
        case 1: {                                           //Se for 1, executa os comandos a seguir.
            printf("\nOpção 1, creditar!");             //Imprime na tela a mensagem de início dos comandos da opção 1.
            break;								
            scanf("\n");                              //Termina de executar o opção 1.
        }                                                       //Fechamento do case 1.
	case 0: {                                          //Se for 0, executa os comandos a seguir. 
            printf("\nAté logo !");             	// Mensagem de despedida.
            break;}					// sai do código
               
	case 2: {                                           // segue os comandos se a opção selecionada for 2 
            printf("\nBem vindo a ala de Seguros!");        // mensagem de boas vindas
          }     					

				                    
	case 3: {                                           
            printf("\nBem vindo a área de seguros!");             
            break;                          
        }    
                






















        default: {                                          //Se não for nenhuma das opções permitidas(case) executa os comandos a seguir.
            printf("\nOpcao inválida");            //Imprime na tela uma mensagem de erro.
            break;                                          //Termina de executar a opção de erro.
        }                                                       //Fechamento do case de erro.
    }                                                           //Fechamento do comando switch.
}                                                               //Fechamento do programa/funcao main.

