/*
[+] [+] [1] [1] [1] [+] [+]
[+] [+] [1] [1] [1] [+] [+]
[1] [1] [1] [1] [1] [1] [1]
[1] [1] [1] [o] [1] [1] [1]
[1] [1] [1] [1] [1] [1] [1]
[+] [+] [1] [1] [1] [+] [+]
[+] [+] [1] [1] [1] [+] [+]
*/
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

//    imprimeTabuleiro();
void verificarVic(void);
void imprimeTabuleiro(void);
void selecionarPeca(void);
char tabuleiro[7][7];
int numI, i, j, scanVar, pecaX, pecaY, destinoX, destinoY, comeX, comeY;

void imprimeTabuleiro() {

  printf("    1   2   3   4   5   6   7 \n");
  printf("  ----------------------------\n");
  for (i = 0; i < 7; i++) {
    printf("%i| ", i + 1);
    for (j = 0; j < 7; j++) {
      printf("[%c] ", tabuleiro[i][j]);
    }
    printf("\n");
  }
    verificarVic();}

  void selecionarPeca(){
    
    pecaX = 0;
    pecaY = 0;
    printf("Escolha a linha da peça: ");
    scanVar = scanf("%i", &pecaX);
    printf("Escolha a coluna da peça: ");
    scanVar = scanf("%i", &pecaY);
    --pecaX;
    --pecaY;
    // tabuleiro[linhaX][colunaY]

     //verificar se não é uma peça
    if (!isalpha(tabuleiro[pecaX][pecaY])) {
      printf("Peça inválida.\n");
      selecionarPeca();

    } else {
      destinoX = 0;
      destinoY = 0;
      printf("Escolha a linha de destino: ");
      scanVar = scanf("%i", &destinoX);
      printf("Escolha a coluna de destino: ");
      scanVar = scanf("%i", &destinoY);
      --destinoX;
      --destinoY;

      
       // verifica se o destino é possível
      if (!isdigit(tabuleiro[destinoX][destinoY])) {
        printf("Destino inválido.\n");
        selecionarPeca();
      } else {
        //
        if(pecaX == destinoX){
          if(pecaY > destinoY){
            if(pecaY == destinoY + 2){
            comeX = pecaX;
            comeY = destinoY + 1;  //peça = 0 come = 0 destino = I
              if(isalpha(tabuleiro[comeX][comeY])){
                
              
            tabuleiro[pecaX][pecaY] = '0';
            tabuleiro[comeX][comeY] = '0';
            tabuleiro[destinoX][destinoY] = 'I';
            imprimeTabuleiro();
            selecionarPeca();
              } else{
          printf("Movimento inválido.\n");
          selecionarPeca();    
            } 
            } else{
          printf("Movimento inválido.\n");
          selecionarPeca();
            }
          } else {
            //add
            if(pecaY == destinoY - 2){
            comeX = pecaX;
            comeY = destinoY - 1; //peça = 0 come = 0 destino = I
              if(isalpha(tabuleiro[comeX][comeY])){
            tabuleiro[pecaX][pecaY] = '0';
            tabuleiro[comeX][comeY] = '0';
            tabuleiro[destinoX][destinoY] = 'I';
            imprimeTabuleiro();
            selecionarPeca();
              } else{
          printf("Movimento inválido.\n");
          selecionarPeca();    
            }
            } else{
          printf("Movimento inválido.\n");
          selecionarPeca();    
            }
            
          }
        } else if(pecaY == destinoY){
          if(pecaX > destinoX){
            //sub
            if(pecaX == destinoX + 2){
            comeY = pecaY;
            comeX = destinoX + 1; //peça = 0 come = 0 destino = I
              if(isalpha(tabuleiro[comeX][comeY])){
            tabuleiro[pecaX][pecaY] = '0';
            tabuleiro[comeX][comeY] = '0';
            tabuleiro[destinoX][destinoY] = 'I';
            imprimeTabuleiro();
            selecionarPeca();
                
              }else{
          printf("Movimento inválido.\n");
          selecionarPeca();    
            }
            } else{
          printf("Movimento inválido.\n");
          selecionarPeca();    
            } 
          } else{
            //add
            if(pecaX == destinoX - 2){
            comeY = pecaY;
            comeX = destinoX - 1; //peça = 0 come = 0 destino = I
              if(isalpha(tabuleiro[comeX][comeY])){
            tabuleiro[pecaX][pecaY] = '0';
            tabuleiro[comeX][comeY] = '0';
            tabuleiro[destinoX][destinoY] = 'I';
            imprimeTabuleiro();
            selecionarPeca();
              } else{
          printf("Movimento inválido.\n");
          selecionarPeca();    
            }
            } else{
          printf("Movimento inválido.\n");
          selecionarPeca();    
            }
          }
        } else {
          printf("Movimento inválido.\n");
          selecionarPeca();
        }
      }
    }
  }
  void verificarVic(void){
    numI = 0;
    for(i = 0; i < 7; i++){
      for(j = 0; j < 7; j++){
        if(isalpha(tabuleiro[i][j])){
          numI = numI + 1;
        } 
      }
    }
    if(numI == 1){
      printf("Você venceu o jogo!\n");
      //parar
      exit(0);
    }
  }
  int main(){
  // linha 1
  tabuleiro[0][0] = '+';
  tabuleiro[0][1] = '+';
  tabuleiro[0][2] = 'I';
  tabuleiro[0][3] = 'I';
  tabuleiro[0][4] = 'I';
  tabuleiro[0][5] = '+';
  tabuleiro[0][6] = '+';
  // linha 2
  tabuleiro[1][0] = '+';
  tabuleiro[1][1] = '+';
  tabuleiro[1][2] = 'I';
  tabuleiro[1][3] = 'I';
  tabuleiro[1][4] = 'I';
  tabuleiro[1][5] = '+';
  tabuleiro[1][6] = '+';
  // linha 3
  tabuleiro[2][0] = 'I';
  tabuleiro[2][1] = 'I';
  tabuleiro[2][2] = 'I';
  tabuleiro[2][3] = 'I';
  tabuleiro[2][4] = 'I';
  tabuleiro[2][5] = 'I';
  tabuleiro[2][6] = 'I';
  // linha 4
  tabuleiro[3][0] = 'I';
  tabuleiro[3][1] = 'I';
  tabuleiro[3][2] = 'I';
  tabuleiro[3][3] = '0';
  tabuleiro[3][4] = 'I';
  tabuleiro[3][5] = 'I';
  tabuleiro[3][6] = 'I';
  // linha 5
  tabuleiro[4][0] = 'I';
  tabuleiro[4][1] = 'I';
  tabuleiro[4][2] = 'I';
  tabuleiro[4][3] = 'I';
  tabuleiro[4][4] = 'I';
  tabuleiro[4][5] = 'I';
  tabuleiro[4][6] = 'I';
  // linha 6
  tabuleiro[5][0] = '+';
  tabuleiro[5][1] = '+';
  tabuleiro[5][2] = 'I';
  tabuleiro[5][3] = 'I';
  tabuleiro[5][4] = 'I';
  tabuleiro[5][5] = '+';
  tabuleiro[5][6] = '+';
  // linha 7
  tabuleiro[6][0] = '+';
  tabuleiro[6][1] = '+';
  tabuleiro[6][2] = 'I';
  tabuleiro[6][3] = 'I';
  tabuleiro[6][4] = 'I';
  tabuleiro[6][5] = '+';
  tabuleiro[6][6] = '+';
  
  printf("    1   2   3   4   5   6   7 \n");
  printf("  ----------------------------\n");
  for (i = 0; i < 7; i++) {
    printf("%i| ", i + 1);
    for (j = 0; j < 7; j++) {
      printf("[%c] ", tabuleiro[i][j]);
    }
    printf("\n");
  }
  selecionarPeca();
}

