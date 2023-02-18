#include<stdio.h> 
#include<stdlib.h>
#include<string.h>
#include<conio.h>

struct menuPedido{
char produto[20];
double preco;
};

void main (void){
menu(); 
system("pause");
}

void sair(){
exit(0); 
}

int menu(){
struct menuPedido c1, c2, c3, c4, c5, c6, c7;  

strcpy(c1.produto,"Cachorro-quente"); 
  c1.preco = 5.00;

strcpy(c2.produto,"X-salada");
  c2.preco = 8.79;

strcpy(c3.produto,"X-bacon"); 
  c3.preco = 9.99;

strcpy(c4.produto,"Misto"); 
  c4.preco = 6.89;

strcpy(c5.produto,"Salada"); 
  c5.preco = 4.80;

strcpy(c6.produto,"Agua"); 
  c6.preco = 3.49;

strcpy(c7.produto,"Refrigerante"); 
  c7.preco = 4.99;

int opcao = 0, c; 
float quantidade = 0, vetor = 0, i1 = 0, i2 = 0, i3 = 0, i4 = 0, i5 = 0, i6 = 0, i7 = 0;
float item1 = 0, item2 = 0, item3 = 0, item4 = 0, item5 = 0, item6 = 0, item7 = 0;
	
   	
printf("\n Item        Produto        Codigo    Preco Unitario \n\n");  
printf("\n  1      Cachorro-quente      100           5,00       \n");
printf("\n  2         X-salada          101           8,79       \n");
printf("\n  3         X-bacon           102           9,99       \n");
printf("\n  4          Misto            103           6,89       \n");
printf("\n  5         Salada            104           4,80       \n");
printf("\n  6          Agua             105           3,49       \n");
printf("\n  7       Refrigerante        106           4,99       \n");
printf("\n  8      Finaliza o pedido!                            \n");

while (opcao != 8){
	printf("\n Digite o numero do item desejado: ");
	scanf("%d", &opcao);
  while((c = getchar()) != '\n' && c != EOF){} 
  if ( opcao != 8){
    printf("\n Digite a quantidade desejada: ");
    scanf("%f", &quantidade);
    while((c = getchar()) != '\n' && c != EOF){}
	}
switch(opcao){
	case 1: 
		item1 = item1 + quantidade;
		printf("\n\n Produto: %s \n", c1.produto); 
		printf("\n Preco unitario: %g \n\n\n", c1.preco); 
		break;
	case 2:
		item2 = item2 + quantidade;
		printf("\n\n Produto: %s \n", c2.produto);
		printf("\n Preco unitario: %g \n", c2.preco);
	    break;                                              
	case 3:
		item3 = item3 + quantidade;
		printf("\n\n Produto: %s \n", c3.produto);
		printf("\n Preco unitario: %g \n\n\n", c3.preco);
		break;
  case 4:
		item4 = item4 + quantidade;
		printf("\n\n Produto: %s \n", c4.produto);
		printf("\n Preco unitario: %g \n\n\n", c4.preco);
		break;
	case 5:
		item5 = item5 + quantidade;
		printf("\n\n Produto: %s \n", c5.produto);
		printf("\n Preco unitario: %g \n\n\n", c5.preco);
		break;
	case 6:
		item6 = item6 + quantidade;
		printf("\n\n Produto: %s \n", c6.produto);
		printf("\n Preco unitario: %g \n\n\n", c6.preco);
		break;
  case 7:
      item7 = item7 + quantidade;
		printf("\n\n Produto: %s \n", c7.produto);
		printf("\n Preco unitario: %g \n\n\n", c7.preco);
		break;
	case 8: 
		printf("\n\n Seu pedido sera fechado! \n\n");
		i1 = item1 * 5.00; 
		i2 = item2 * 8.79;
		i3 = item3 * 9.99;
		i4 = item4 * 6.89;
		i5 = item5 * 4.80;
		i6 = item6 * 3.49;
		i7 = item7 * 4.99;
		vetor = i1 + i2 + i3 + i4 + i5 + i6 + i7;  
		printf("\n Preco total do pedido %f \n\n" , vetor);
		system("pause");
    exit(0); 	
		break;
	default: 
		printf("\n\n Codigo invalido! \n\n");
		system("pause");
		menu;
}
}
}
