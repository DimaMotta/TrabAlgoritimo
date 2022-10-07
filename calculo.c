#include <math.h>
#include <stdio.h>

//GitHub: DimaMotta

int main(void) {
  //Declaração das variáveis
  float x, y, resultado;
  int op;
  
//Informação de apresentação
  printf("\n\tNome: Dimaima Jacinto Motta\n\tCurso: Análise e desenvolvimento "
         "de sistemas\n\tUniversidade: Unilasalle\n\tMatricula: 202222250\n\t");

  //Repeti o código até ser digitado 7
  while (op != 7) {

    //Informações da operação a ser efetuada pelo usuário
    printf(
        "\n\t1 - SOMA \n\t2 - SUBTAÇÃO \n\t3 - MULTIPLICAÇÃO \n\t4 - DIVISÃO "
        "\n\t5 - POTENCIACAO \n\t6 - RAIZ QUADRADA \n\t7 - ENCERRAR\n\t");
    printf("\nDigite o número da opção: ");
    scanf("%d", &op);

    //Swhitch com os cases escolhido pelo usuário
    switch (op) {
    case 1:
      //Pedido de dados ao o usuário
      printf("\nDigite o primeiro valor: ");
      scanf("%f", &x);

      printf("\nDigite o segundo valor: ");
      scanf("%f", &y);

      //Variavel com o resultado
      resultado = x + y;
      printf("O Resultado é: %.1f", resultado);

      break;
    case 2:
      //Pedido de dados ao o usuário
      printf("\nDigite o primeiro valor: ");
      scanf("%f", &x);

      printf("\nDigite o segundo valor: ");
      scanf("%f", &y);

      //Variavel com o resultado
      resultado = x - y;
      printf("O Resultado é: %.1f", resultado);

      break;
    case 3:
      //Pedido de dados ao o usuário
      printf("\nDigite o primeiro valor: ");
      scanf("%f", &x);

      printf("\nDigite o segundo valor: ");
      scanf("%f", &y);

      //Variavel com o resultado
      resultado = x * y;
      printf("O Resultado é: %.2f", resultado);

      break;

    case 4:
      //Pedido de dados ao o usuário
      printf("\nDigite o primeiro valor: ");
      scanf("%f", &x);

      printf("\nDigite o segundo valor: ");
      scanf("%f", &y);

      //Validando se uma das variáveis é igual a 0
      if (x == 0 || y == 0) {
        printf("\nUma das variveis é igual a zero realize novamente a "
               "operação.\n ");
      } else {
        //Variavel com o resultado
        resultado = x / y;
        printf("O Resultado é: %.2f\n", resultado);
      }

      break;

    case 5:
      //Pedido de dados ao o usuário
      printf("\nDigite o primeiro valor: ");
      scanf("%f", &x);

      printf("\nDigite o segundo valor: ");
      scanf("%f", &y);

      //Variavel com o resultado
      resultado = pow(x, y);
      printf("O Resultado é: %.2f", resultado);

      break;
    case 6:
      //Pedido de dados ao o usuário
      printf("\nDigite o valor: ");
      scanf("%f", &x);

      //Variavel com o resultado
      resultado = sqrt(x);
      printf("O Resultado é: %.2f", resultado);

      break;

    default:
      printf("Digite um valor válido\n");
    }
  }
}