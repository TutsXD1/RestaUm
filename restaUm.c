#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>

#define color_cyan "\e[0;36m"
#define color_white "\e[0;97m"
#define color_yellow "\e[0;33m"
#define color_red "\e[0;31m"
#define color_green "\e[0;32m"
#define color_reset "\e[0m"
#define color_blue_bhi "\e[1;94m"
#define color_red_bhi "\e[1;91m"
#define color_purple "\e[0;35m"

#define XX "XXXXX"

char tabuleiro[7][7];
char pecaXchar, pecaYchar, destinoYchar, destinoXchar;
int numI, i, j, scanVar, pecaX, pecaY, destinoX, destinoY, comeX, comeY;

int scanVar, sysVar, sempre = 0, fimJogo1 = 0, fimJogo2 = 0, fimJogo3 = 0, fimJogo4 = 0, SAIR = 0;
char menuPrincipal, menuJogos, jogo1, jogo2, jogo3, jogo4, reescrever;

char slotNumChar;
int slotNum, VD, maior, menor, primeiro, terceiro, segundo;
int main(){
  

  
    //menu principal
    // menu de créditos ou menu de jogos ou zero para encerrar

    //if menu de créditos 
    //menu principal

    //else if menu de jogos
    //1 ou 2

    //if 1
    //win ou digite 0 zero para sair
    //encerrar ou menu principal

    //if 2
    //win ou digite 0 para sair
    //encerrar ou menu principal
          struct score
  {
    char nick[6];
    int vitorias;
    int derrotas;
    int VD;
    int mexido;
  };
    struct score slot[3];
    slot[0].vitorias = 0;
    slot[0].derrotas = 0;
    strcpy(slot[0].nick, XX);
    slot[0].mexido = 0;
    slot[1].vitorias = 0;
    slot[1].derrotas = 0;
    strcpy(slot[1].nick, XX);
    slot[2].mexido = 0;
    slot[2].vitorias = 0;
    slot[2].derrotas = 0;
    strcpy(slot[2].nick, XX);
    slot[2].mexido = 0;

    do{
        sysVar = system("clear");
    printf(" ___________________________\n");
    printf("| "color_red"SUPER ULTRA MEGA RESTA UM"color_reset" |\n");
    printf("|                           |\n");
    printf("| 1 - ESCOLHER FORMATO      |\n");
    printf("| 2 - CREDITOS              |\n");
    printf("| 3 - SCORE                 |\n");  
    printf("| 0 - SAIR                  |\n");
    printf("|___________________________|\n");
      
        printf("Sua opção => :");
        scanVar = scanf("%c", &menuPrincipal);
        while((getchar() != '\n')); //limpar buffer

        switch(menuPrincipal){

        case '3': 
          //atualizar VD
          for(i = 0; i < 3; i++){
            slot[i].VD = slot[i].vitorias - slot[i].derrotas;
          }

  
        sysVar = system("clear");
        printf(" ___________________________\n");
    printf("|    RANK DE VITÓRIA   "color_green"VV"color_reset"/"color_red"DD"color_reset"|\n");
    printf("|                           |\n");
    printf("| 1 - %-5.5s            %02i/%02i|\n", slot[0].nick, slot[0].vitorias, slot[0].derrotas);
    printf("| 2 - %-5.5s            %02i/%02i|\n", slot[1].nick, slot[1].vitorias, slot[1].derrotas);
    printf("| 3 - %-5.5s            %02i/%02i|\n", slot[2].nick, slot[2].vitorias, slot[2].derrotas);
    printf("|___________________________|\n");
        
        //getchar();
        while((getchar() != '\n')); //limpar buffer
        break;
        
        case '2': 
        sysVar = system("clear");
        printf (" ___________________________\n");
      printf("| CRIADO POR:               |\n");
      printf("| "color_red_bhi"ARTHUR LIGNELLI"color_reset"           |\n");
      printf("|            &              |\n");
      printf("|          "color_blue_bhi"DAVI NEGREIROS"color_reset"   |\n");
      printf("| APERTE ENTER PARA VOLTAR  |\n");
      printf("|___________________________|\n");
        
        //getchar();
        while((getchar() != '\n')); //limpar buffer
        break;
        case'1':
          slotNumChar = ' ';
          do{
        sysVar = system("clear");
          printf("Escolha um slot de 1 a 3: ");
          scanVar = scanf("%c", &slotNumChar);
          while((getchar() != '\n')); //limpar buffer
          
          }while(slotNumChar != '1' && slotNumChar != '2' && slotNumChar != '3');
          slotNum = slotNumChar - 49;

          if(slot[slotNum].mexido == 0){   
            printf("Insira o nick do jogador de até 5 dígitos: ");
        scanVar = scanf("%s", slot[slotNum].nick);
        slot[slotNum].mexido = 1;
        while((getchar() != '\n')); //limpar buffer
        } else {
            printf(""color_purple"Esse slot já foi escolhido.\n"color_green"1 - Continuar\n"color_red"2 - Reescrever"color_reset"\n");
        scanVar = scanf("%c", &reescrever);
         while((getchar() != '\n')); //limpar buffer
        switch(reescrever){
          case '2':
          printf("Insira o nick do jogador de até 5 dígitos: ");        
          scanVar = scanf("%s", slot[slotNum].nick);
          while((getchar() != '\n')); //limpar buffer
          slot[slotNum].vitorias = 0;
          slot[slotNum].derrotas = 0;
            
         
          break;
          default:
            
          break;
        }
              
        }
          
          
          

          
        sysVar = system("clear");
        printf(" ___________________________\n");
      printf("| SELEÇÃO DE FORMATO        |\n");
      printf("| 1 - "color_red"CRUZ VERMELHA         "color_reset"|\n");
      printf("| 2 - "color_yellow"PIRAMIDE EGÍPCIA      "color_reset"|\n");
      printf("| 3 - "color_cyan"DIAMANTE              "color_reset"|\n");
      printf("| 4 - "color_white"LITTLE CRUZ ÁMEM      "color_reset"|\n");
      printf("|___________________________|\n");
        
        printf("Sua opção => :");
        scanVar = scanf("%c", &menuJogos); 
        while((getchar() != '\n')); //limpar buffer
        if(menuJogos == '1'){
                    /*###################################################
  #################### UM ###########################
  ###################################################
*/
          //tabuleiro 1
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
  tabuleiro[3][3] = ' ';
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
            do{
   scanVar = system("clear"); //clear

    //imprimeTabuleiro
  printf("0 - SAIR\n");
  scanVar = 0;
  printf("    1   2   3   4   5   6   7 \n");
  printf("  ----------------------------\n");
  for (i = 0; i < 7; i++) {
    printf("%i| ", i + 1);
    if(i < 2){
      printf("        ");
      for(j = 2; j < 5; j++){
      printf("["color_red"%c"color_reset"] ", tabuleiro[i][j]);
      }
    }else if (i < 5) {
    for (j = 0; j < 7; j++) {
      printf("["color_red"%c"color_reset"] ", tabuleiro[i][j]);
    }
    } else if (i < 7){
      printf("        ");
      for(j = 2; j < 5; j++){
      printf("["color_red"%c"color_reset"] ", tabuleiro[i][j]);
      }
    }
    
    printf("\n");
  } //end imprime tabuleiro
    
    //verificar vitória
    numI = 0;
    for(i = 0; i < 7; i++){
      for(j = 0; j < 7; j++){
        if(isalpha(tabuleiro[i][j])){
          numI = numI + 1;
        } 
      }
    }
    
    //end verificar vitória

    //contador de peças
    if(numI == 1){
      printf("Resta: "color_green"%i"color_reset"\n", numI);
      fimJogo1 = 1;
      break;
    } else{
      printf("Restam: "color_green"%i"color_reset"\n", numI);
    } //end contador de peças

              
    //selecionar peça
    pecaX = 0;
    pecaY = 0;
    printf("Escolha a linha da peça: ");
    //getchar(); //GET
    
    scanVar = scanf("%c", &pecaXchar);
    while((getchar() != '\n')); //limpar buffer
    if(pecaXchar - 48 == 0){
      SAIR = 1;
      fimJogo1 = 1;
      break;
    }
    
    
    printf("Escolha a coluna da peça: ");
    //getchar(); //GET
    scanVar = scanf("%c", &pecaYchar);
    while((getchar() != '\n')); //limpar buffer
    if(pecaYchar - 48 == 0){
      SAIR = 1;
      fimJogo1 = 1;
      break;
    }
    
    pecaX = pecaXchar - 48; //converte de char para int
    
    pecaY = pecaYchar - 48; //converte de char para int
    
    --pecaX;
    --pecaY;
    // tabuleiro[linhaX][colunaY]

     //verificar se não é uma peça e valida a entrada novamente
    if(pecaX > 6 || pecaX < 0 || pecaY > 6 || pecaY < 0){
      printf("Peça inválida.\n");
      while((getchar() != '\n')); //limpar buffer
    } else if (!isalpha(tabuleiro[pecaX][pecaY])) {
      printf("Peça inválida.\n");
      while((getchar() != '\n')); //limpar buffer
      //selecionarPeca();

    } else {
      destinoX = 0;
      destinoY = 0;
      printf("Escolha a linha de destino: ");
      //getchar(); //GET
      scanVar = scanf("%c", &destinoXchar);
      while((getchar() != '\n')); //limpar buffer
      if(destinoXchar - 48 == 0){
      SAIR = 1;
      fimJogo1 = 1;
      break;
    }
      
      printf("Escolha a coluna de destino: ");
      //getchar(); //GET
      scanVar = scanf("%c", &destinoYchar);
      while((getchar() != '\n')); //limpar buffer
      if(destinoYchar - 48 == 0){
      SAIR = 1;
      fimJogo1 = 1;
      break;
    }
      
      destinoX = destinoXchar - 48; //converte de char para int
      
      destinoY = destinoYchar - 48; //converte de char para int
      
      --destinoX;
      --destinoY;

      
       // verifica se o destino é possível e valida a entrada novamente
      if(destinoX > 6 || destinoX < 0 || destinoY > 6 || destinoY < 0){
        printf("Destino Inválido.\n");
        while((getchar() != '\n')); //limpar buffer
      } else if (!isspace(tabuleiro[destinoX][destinoY])) {
        printf("Destino inválido.\n");
        while((getchar() != '\n')); //limpar buffer
        //selecionarPeca(); enter para continuar????
      } else {
        //
        if(pecaX == destinoX){
          if(pecaY > destinoY){
            if(pecaY == destinoY + 2){
            comeX = pecaX;
            comeY = destinoY + 1;  //peça = 0 come = 0 destino = I
              if(isalpha(tabuleiro[comeX][comeY])){
                
              
            tabuleiro[pecaX][pecaY] = ' ';
            tabuleiro[comeX][comeY] = ' ';
            tabuleiro[destinoX][destinoY] = 'I';
            //imprimeTabuleiro();
            //selecionarPeca();
              } else{
          printf("Movimento inválido.\n");
                while((getchar() != '\n')); //limpar buffer
          //selecionarPeca();    
            } 
            } else{
          printf("Movimento inválido.\n");
              while((getchar() != '\n')); //limpar buffer
          //selecionarPeca();
            }
          } else {
            //add
            if(pecaY == destinoY - 2){
            comeX = pecaX;
            comeY = destinoY - 1; //peça = 0 come = 0 destino = I
              if(isalpha(tabuleiro[comeX][comeY])){
            tabuleiro[pecaX][pecaY] = ' ';
            tabuleiro[comeX][comeY] = ' ';
            tabuleiro[destinoX][destinoY] = 'I';
            //imprimeTabuleiro();
            //selecionarPeca();
              } else{
          printf("Movimento inválido.\n");
                while((getchar() != '\n')); //limpar buffer
          //selecionarPeca();    
            }
            } else{
          printf("Movimento inválido.\n");
              while((getchar() != '\n')); //limpar buffer
          //selecionarPeca();    
            }
            
          }
        } else if(pecaY == destinoY){
          if(pecaX > destinoX){
            //sub
            if(pecaX == destinoX + 2){
            comeY = pecaY;
            comeX = destinoX + 1; //peça = 0 come = 0 destino = I
              if(isalpha(tabuleiro[comeX][comeY])){
            tabuleiro[pecaX][pecaY] = ' ';
            tabuleiro[comeX][comeY] = ' ';
            tabuleiro[destinoX][destinoY] = 'I';
            //imprimeTabuleiro();
            //selecionarPeca();
                
              }else{
          printf("Movimento inválido.\n");
                while((getchar() != '\n')); //limpar buffer
          //selecionarPeca();    
            }
            } else{
          printf("Movimento inválido.\n");
              while((getchar() != '\n')); //limpar buffer
          //selecionarPeca();    
            } 
          } else{
            //add
            if(pecaX == destinoX - 2){
            comeY = pecaY;
            comeX = destinoX - 1; //peça = 0 come = 0 destino = I
              if(isalpha(tabuleiro[comeX][comeY])){
            tabuleiro[pecaX][pecaY] = ' ';
            tabuleiro[comeX][comeY] = ' ';
            tabuleiro[destinoX][destinoY] = 'I';
            //imprimeTabuleiro();
            //selecionarPeca();
              } else{
          printf("Movimento inválido.\n");
                while((getchar() != '\n')); //limpar buffer
          //selecionarPeca();    
            }
            } else{
          printf("Movimento inválido.\n");
              while((getchar() != '\n')); //limpar buffer
          //selecionarPeca();    
            }
          }
        } else {
          printf("Movimento inválido.\n");
          while((getchar() != '\n')); //limpar buffer
          //selecionarPeca();
        }
      }
    } //end selecionar peça
    
  }while(fimJogo1 == 0);
            fimJogo1 = 0;
            if(SAIR == 0){
            printf("Você venceu o jogo!\n");
            slot[slotNum].vitorias = slot[slotNum].vitorias + 1; 
            while((getchar() != '\n')); //limpar buffer
            break;} else if(SAIR == 1){
              SAIR = 0;
              printf("Você desistiu do jogo.\n");
              slot[slotNum].derrotas = slot[slotNum].derrotas + 1; 
              while((getchar() != '\n')); //limpar buffer
              break;}
        } else if(menuJogos == '2'){
/*###################################################
  ################### DOIS ##########################
  ###################################################
*/
          //tabuleiro 2
          // linha 1
  tabuleiro[0][0] = '+';
  tabuleiro[0][1] = '+';
  tabuleiro[0][2] = ' ';
  tabuleiro[0][3] = ' ';
  tabuleiro[0][4] = ' ';
  tabuleiro[0][5] = '+';
  tabuleiro[0][6] = '+';
  // linha 2
  tabuleiro[1][0] = '+';
  tabuleiro[1][1] = '+';
  tabuleiro[1][2] = ' ';
  tabuleiro[1][3] = 'I';
  tabuleiro[1][4] = ' ';
  tabuleiro[1][5] = '+';
  tabuleiro[1][6] = '+';
  // linha 3
  tabuleiro[2][0] = ' ';
  tabuleiro[2][1] = ' ';
  tabuleiro[2][2] = 'I';
  tabuleiro[2][3] = 'I';
  tabuleiro[2][4] = 'I';
  tabuleiro[2][5] = ' ';
  tabuleiro[2][6] = ' ';
  // linha 4
  tabuleiro[3][0] = ' ';
  tabuleiro[3][1] = 'I';
  tabuleiro[3][2] = 'I';
  tabuleiro[3][3] = 'I';
  tabuleiro[3][4] = 'I';
  tabuleiro[3][5] = 'I';
  tabuleiro[3][6] = ' ';
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
  tabuleiro[5][2] = ' ';
  tabuleiro[5][3] = ' ';
  tabuleiro[5][4] = ' ';
  tabuleiro[5][5] = '+';
  tabuleiro[5][6] = '+';
  // linha 7
  tabuleiro[6][0] = '+';
  tabuleiro[6][1] = '+';
  tabuleiro[6][2] = ' ';
  tabuleiro[6][3] = ' ';
  tabuleiro[6][4] = ' ';
  tabuleiro[6][5] = '+';
  tabuleiro[6][6] = '+';
            do{
   scanVar = system("clear"); //clear

    //imprimeTabuleiro
  printf("0 - SAIR\n");
  scanVar = 0;
  printf("    1   2   3   4   5   6   7 \n");
  printf("  ----------------------------\n");
  for (i = 0; i < 7; i++) {
    printf("%i| ", i + 1);
    if(i < 2){
      printf("        ");
      for(j = 2; j < 5; j++){
      printf("["color_yellow"%c"color_reset"] ", tabuleiro[i][j]);
      }
    }else if (i < 5) {
    for (j = 0; j < 7; j++) {
      printf("["color_yellow"%c"color_reset"] ", tabuleiro[i][j]);
    }
    } else if (i < 7){
      printf("        ");
      for(j = 2; j < 5; j++){
      printf("["color_yellow"%c"color_reset"] ", tabuleiro[i][j]);
      }
    }
    
    printf("\n");
  } //end imprime tabuleiro
    
    //verificar vitória
    numI = 0;
    for(i = 0; i < 7; i++){
      for(j = 0; j < 7; j++){
        if(isalpha(tabuleiro[i][j])){
          numI = numI + 1;
        } 
      }
    }
    
    //end verificar vitória

    //contador de peças
    if(numI == 1){
      printf("Resta: "color_green"%i"color_reset"\n", numI);
      fimJogo2 = 1;
      break;
    } else{
      printf("Restam: "color_green"%i"color_reset"\n", numI);
    } //end contador de peças

              
    //selecionar peça
    pecaX = 0;
    pecaY = 0;
    printf("Escolha a linha da peça: ");
    //getchar(); //GET
    
    scanVar = scanf("%c", &pecaXchar);
    while((getchar() != '\n')); //limpar buffer
    if(pecaXchar - 48 == 0){
      SAIR = 1;
      fimJogo2 = 1;
      break;
    }
    
    
    printf("Escolha a coluna da peça: ");
    //getchar(); //GET
    scanVar = scanf("%c", &pecaYchar);
    while((getchar() != '\n')); //limpar buffer
    if(pecaYchar - 48 == 0){
      SAIR = 1;
      fimJogo2 = 1;
      break;
    }
    
    pecaX = pecaXchar - 48; //converte de char para int
    
    pecaY = pecaYchar - 48; //converte de char para int
    
    --pecaX;
    --pecaY;
    // tabuleiro[linhaX][colunaY]

     //verificar se não é uma peça e valida a entrada novamente
    if(pecaX > 6 || pecaX < 0 || pecaY > 6 || pecaY < 0){
      printf("Peça inválida.\n");
      while((getchar() != '\n')); //limpar buffer
    } else if (!isalpha(tabuleiro[pecaX][pecaY])) {
      printf("Peça inválida.\n");
      while((getchar() != '\n')); //limpar buffer
      //selecionarPeca();

    } else {
      destinoX = 0;
      destinoY = 0;
      printf("Escolha a linha de destino: ");
      //getchar(); //GET
      scanVar = scanf("%c", &destinoXchar);
      while((getchar() != '\n')); //limpar buffer
      if(destinoXchar - 48 == 0){
      SAIR = 1;
      fimJogo2 = 1;
      break;
    }
      
      printf("Escolha a coluna de destino: ");
      //getchar(); //GET
      scanVar = scanf("%c", &destinoYchar);
      while((getchar() != '\n')); //limpar buffer
      if(destinoYchar - 48 == 0){
      SAIR = 1;
      fimJogo2 = 1;
      break;
    }
      
      destinoX = destinoXchar - 48; //converte de char para int
      
      destinoY = destinoYchar - 48; //converte de char para int
      
      --destinoX;
      --destinoY;

      
       // verifica se o destino é possível e valida a entrada novamente
      if(destinoX > 6 || destinoX < 0 || destinoY > 6 || destinoY < 0){
        printf("Destino Inválido.\n");
        while((getchar() != '\n')); //limpar buffer
      } else if (!isspace(tabuleiro[destinoX][destinoY])) {
        printf("Destino inválido.\n");
        while((getchar() != '\n')); //limpar buffer
        //selecionarPeca(); enter para continuar????
      } else {
        //
        if(pecaX == destinoX){
          if(pecaY > destinoY){
            if(pecaY == destinoY + 2){
            comeX = pecaX;
            comeY = destinoY + 1;  //peça = 0 come = 0 destino = I
              if(isalpha(tabuleiro[comeX][comeY])){
                
              
            tabuleiro[pecaX][pecaY] = ' ';
            tabuleiro[comeX][comeY] = ' ';
            tabuleiro[destinoX][destinoY] = 'I';
            //imprimeTabuleiro();
            //selecionarPeca();
              } else{
          printf("Movimento inválido.\n");
                while((getchar() != '\n')); //limpar buffer
          //selecionarPeca();    
            } 
            } else{
          printf("Movimento inválido.\n");
              while((getchar() != '\n')); //limpar buffer
          //selecionarPeca();
            }
          } else {
            //add
            if(pecaY == destinoY - 2){
            comeX = pecaX;
            comeY = destinoY - 1; //peça = 0 come = 0 destino = I
              if(isalpha(tabuleiro[comeX][comeY])){
            tabuleiro[pecaX][pecaY] = ' ';
            tabuleiro[comeX][comeY] = ' ';
            tabuleiro[destinoX][destinoY] = 'I';
            //imprimeTabuleiro();
            //selecionarPeca();
              } else{
          printf("Movimento inválido.\n");
                while((getchar() != '\n')); //limpar buffer
          //selecionarPeca();    
            }
            } else{
          printf("Movimento inválido.\n");
              while((getchar() != '\n')); //limpar buffer
          //selecionarPeca();    
            }
            
          }
        } else if(pecaY == destinoY){
          if(pecaX > destinoX){
            //sub
            if(pecaX == destinoX + 2){
            comeY = pecaY;
            comeX = destinoX + 1; //peça = 0 come = 0 destino = I
              if(isalpha(tabuleiro[comeX][comeY])){
            tabuleiro[pecaX][pecaY] = ' ';
            tabuleiro[comeX][comeY] = ' ';
            tabuleiro[destinoX][destinoY] = 'I';
            //imprimeTabuleiro();
            //selecionarPeca();
                
              }else{
          printf("Movimento inválido.\n");
                while((getchar() != '\n')); //limpar buffer
          //selecionarPeca();    
            }
            } else{
          printf("Movimento inválido.\n");
              while((getchar() != '\n')); //limpar buffer
          //selecionarPeca();    
            } 
          } else{
            //add
            if(pecaX == destinoX - 2){
            comeY = pecaY;
            comeX = destinoX - 1; //peça = 0 come = 0 destino = I
              if(isalpha(tabuleiro[comeX][comeY])){
            tabuleiro[pecaX][pecaY] = ' ';
            tabuleiro[comeX][comeY] = ' ';
            tabuleiro[destinoX][destinoY] = 'I';
            //imprimeTabuleiro();
            //selecionarPeca();
              } else{
          printf("Movimento inválido.\n");
                while((getchar() != '\n')); //limpar buffer
          //selecionarPeca();    
            }
            } else{
          printf("Movimento inválido.\n");
              while((getchar() != '\n')); //limpar buffer
          //selecionarPeca();    
            }
          }
        } else {
          printf("Movimento inválido.\n");
          while((getchar() != '\n')); //limpar buffer
          //selecionarPeca();
        }
      }
    } //end selecionar peça
    
  }while(fimJogo2 == 0);
            fimJogo2 = 0;
            if(SAIR == 0){
            printf("Você venceu o jogo!\n");
              slot[slotNum].vitorias = slot[slotNum].vitorias + 1; 
            while((getchar() != '\n')); //limpar buffer
            break;} else if(SAIR == 1){
              SAIR = 0;
              printf("Você desistiu do jogo.\n");
              slot[slotNum].derrotas = slot[slotNum].derrotas + 1;
              while((getchar() != '\n')); //limpar buffer
              break;}
        } else if(menuJogos == '3'){
              /*###################################################
  ################### TRÊS ##########################
  ###################################################
*/
          //tabuleiro 3
          // linha 1
  tabuleiro[0][0] = '+';
  tabuleiro[0][1] = '+';
  tabuleiro[0][2] = ' ';
  tabuleiro[0][3] = ' ';
  tabuleiro[0][4] = ' ';
  tabuleiro[0][5] = '+';
  tabuleiro[0][6] = '+';
  // linha 2
  tabuleiro[1][0] = '+';
  tabuleiro[1][1] = '+';
  tabuleiro[1][2] = ' ';
  tabuleiro[1][3] = 'I';
  tabuleiro[1][4] = ' ';
  tabuleiro[1][5] = '+';
  tabuleiro[1][6] = '+';
  // linha 3
  tabuleiro[2][0] = ' ';
  tabuleiro[2][1] = ' ';
  tabuleiro[2][2] = 'I';
  tabuleiro[2][3] = 'I';
  tabuleiro[2][4] = 'I';
  tabuleiro[2][5] = ' ';
  tabuleiro[2][6] = ' ';
  // linha 4
  tabuleiro[3][0] = ' ';
  tabuleiro[3][1] = 'I';
  tabuleiro[3][2] = 'I';
  tabuleiro[3][3] = ' ';
  tabuleiro[3][4] = 'I';
  tabuleiro[3][5] = 'I';
  tabuleiro[3][6] = ' ';
  // linha 5
  tabuleiro[4][0] = ' ';
  tabuleiro[4][1] = ' ';
  tabuleiro[4][2] = 'I';
  tabuleiro[4][3] = 'I';
  tabuleiro[4][4] = 'I';
  tabuleiro[4][5] = ' ';
  tabuleiro[4][6] = ' ';
  // linha 6
  tabuleiro[5][0] = '+';
  tabuleiro[5][1] = '+';
  tabuleiro[5][2] = ' ';
  tabuleiro[5][3] = 'I';
  tabuleiro[5][4] = ' ';
  tabuleiro[5][5] = '+';
  tabuleiro[5][6] = '+';
  // linha 7
  tabuleiro[6][0] = '+';
  tabuleiro[6][1] = '+';
  tabuleiro[6][2] = ' ';
  tabuleiro[6][3] = ' ';
  tabuleiro[6][4] = ' ';
  tabuleiro[6][5] = '+';
  tabuleiro[6][6] = '+';
          do{
 
   scanVar = system("clear"); //clear

    //imprimeTabuleiro
  printf("0 - SAIR\n");
  scanVar = 0;
  printf("    1   2   3   4   5   6   7 \n");
  printf("  ----------------------------\n");
  for (i = 0; i < 7; i++) {
    printf("%i| ", i + 1);
    if(i < 2){
      printf("        ");
      for(j = 2; j < 5; j++){
      printf("["color_cyan"%c"color_reset"] ", tabuleiro[i][j]);
      }
    }else if (i < 5) {
    for (j = 0; j < 7; j++) {
      printf("["color_cyan"%c"color_reset"] ", tabuleiro[i][j]);
    }
    } else if (i < 7){
      printf("        ");
      for(j = 2; j < 5; j++){
      printf("["color_cyan"%c"color_reset"] ", tabuleiro[i][j]);
      }
    }
    
    printf("\n");
  } //end imprime tabuleiro
    
    //verificar vitória
    numI = 0;
    for(i = 0; i < 7; i++){
      for(j = 0; j < 7; j++){
        if(isalpha(tabuleiro[i][j])){
          numI = numI + 1;
        } 
      }
    }
    
    //end verificar vitória

    //contador de peças
    if(numI == 1){
      printf("Resta: "color_green"%i"color_reset"\n", numI);
      fimJogo3 = 1;
      break;
    } else{
      printf("Restam: "color_green"%i"color_reset"\n", numI);
    } //end contador de peças

              
    //selecionar peça
    pecaX = 0;
    pecaY = 0;
    printf("Escolha a linha da peça: ");
    //getchar(); //GET
    
    scanVar = scanf("%c", &pecaXchar);
    while((getchar() != '\n')); //limpar buffer
    if(pecaXchar - 48 == 0){
      SAIR = 1;
      fimJogo3 = 1;
      break;
    }
    
    
    printf("Escolha a coluna da peça: ");
    //getchar(); //GET
    scanVar = scanf("%c", &pecaYchar);
    while((getchar() != '\n')); //limpar buffer
    if(pecaYchar - 48 == 0){
      SAIR = 1;
      fimJogo3 = 1;
      break;
    }
    
    pecaX = pecaXchar - 48; //converte de char para int
    
    pecaY = pecaYchar - 48; //converte de char para int
    
    --pecaX;
    --pecaY;
    // tabuleiro[linhaX][colunaY]

     //verificar se não é uma peça e valida a entrada novamente
    if(pecaX > 6 || pecaX < 0 || pecaY > 6 || pecaY < 0){
      printf("Peça inválida.\n");
      while((getchar() != '\n')); //limpar buffer
    } else if (!isalpha(tabuleiro[pecaX][pecaY])) {
      printf("Peça inválida.\n");
      while((getchar() != '\n')); //limpar buffer
      //selecionarPeca();

    } else {
      destinoX = 0;
      destinoY = 0;
      printf("Escolha a linha de destino: ");
      //getchar(); //GET
      scanVar = scanf("%c", &destinoXchar);
      while((getchar() != '\n')); //limpar buffer
      if(destinoXchar - 48 == 0){
      SAIR = 1;
      fimJogo3 = 1;
      break;
    }
      
      printf("Escolha a coluna de destino: ");
      //getchar(); //GET
      scanVar = scanf("%c", &destinoYchar);
      while((getchar() != '\n')); //limpar buffer
      if(destinoYchar - 48 == 0){
      SAIR = 1;
      fimJogo3 = 1;
      break;
    }
      
      destinoX = destinoXchar - 48; //converte de char para int
      
      destinoY = destinoYchar - 48; //converte de char para int
      
      --destinoX;
      --destinoY;

      
       // verifica se o destino é possível e valida a entrada novamente
      if(destinoX > 6 || destinoX < 0 || destinoY > 6 || destinoY < 0){
        printf("Destino Inválido.\n");
        while((getchar() != '\n')); //limpar buffer
      } else if (!isspace(tabuleiro[destinoX][destinoY])) {
        printf("Destino inválido.\n");
        while((getchar() != '\n')); //limpar buffer
        //selecionarPeca(); enter para continuar????
      } else {
        //
        if(pecaX == destinoX){
          if(pecaY > destinoY){
            if(pecaY == destinoY + 2){
            comeX = pecaX;
            comeY = destinoY + 1;  //peça = 0 come = 0 destino = I
              if(isalpha(tabuleiro[comeX][comeY])){
                
              
            tabuleiro[pecaX][pecaY] = ' ';
            tabuleiro[comeX][comeY] = ' ';
            tabuleiro[destinoX][destinoY] = 'I';
            //imprimeTabuleiro();
            //selecionarPeca();
              } else{
          printf("Movimento inválido.\n");
                while((getchar() != '\n')); //limpar buffer
          //selecionarPeca();    
            } 
            } else{
          printf("Movimento inválido.\n");
              while((getchar() != '\n')); //limpar buffer
          //selecionarPeca();
            }
          } else {
            //add
            if(pecaY == destinoY - 2){
            comeX = pecaX;
            comeY = destinoY - 1; //peça = 0 come = 0 destino = I
              if(isalpha(tabuleiro[comeX][comeY])){
            tabuleiro[pecaX][pecaY] = ' ';
            tabuleiro[comeX][comeY] = ' ';
            tabuleiro[destinoX][destinoY] = 'I';
            //imprimeTabuleiro();
            //selecionarPeca();
              } else{
          printf("Movimento inválido.\n");
                while((getchar() != '\n')); //limpar buffer
          //selecionarPeca();    
            }
            } else{
          printf("Movimento inválido.\n");
              while((getchar() != '\n')); //limpar buffer
          //selecionarPeca();    
            }
            
          }
        } else if(pecaY == destinoY){
          if(pecaX > destinoX){
            //sub
            if(pecaX == destinoX + 2){
            comeY = pecaY;
            comeX = destinoX + 1; //peça = 0 come = 0 destino = I
              if(isalpha(tabuleiro[comeX][comeY])){
            tabuleiro[pecaX][pecaY] = ' ';
            tabuleiro[comeX][comeY] = ' ';
            tabuleiro[destinoX][destinoY] = 'I';
            //imprimeTabuleiro();
            //selecionarPeca();
                
              }else{
          printf("Movimento inválido.\n");
                while((getchar() != '\n')); //limpar buffer
          //selecionarPeca();    
            }
            } else{
          printf("Movimento inválido.\n");
              while((getchar() != '\n')); //limpar buffer
          //selecionarPeca();    
            } 
          } else{
            //add
            if(pecaX == destinoX - 2){
            comeY = pecaY;
            comeX = destinoX - 1; //peça = 0 come = 0 destino = I
              if(isalpha(tabuleiro[comeX][comeY])){
            tabuleiro[pecaX][pecaY] = ' ';
            tabuleiro[comeX][comeY] = ' ';
            tabuleiro[destinoX][destinoY] = 'I';
            //imprimeTabuleiro();
            //selecionarPeca();
              } else{
          printf("Movimento inválido.\n");
                while((getchar() != '\n')); //limpar buffer
          //selecionarPeca();    
            }
            } else{
          printf("Movimento inválido.\n");
              while((getchar() != '\n')); //limpar buffer
          //selecionarPeca();    
            }
          }
        } else {
          printf("Movimento inválido.\n");
          while((getchar() != '\n')); //limpar buffer
          //selecionarPeca();
        }
      }
    } //end selecionar peça
    
  }while(fimJogo3 == 0);
            fimJogo3 = 0;
            if(SAIR == 0){
            printf("Você venceu o jogo!\n");
              slot[slotNum].vitorias = slot[slotNum].vitorias + 1; 
            while((getchar() != '\n')); //limpar buffer
            break;} else if(SAIR == 1){
              SAIR = 0;
              printf("Você desistiu do jogo.\n");
              slot[slotNum].derrotas = slot[slotNum].derrotas + 1;
              while((getchar() != '\n')); //limpar buffer
              break;}
        } else if(menuJogos == '4'){
          /*###################################################
  ################### QUATRO ########################
  ###################################################
*/
          //tabuleiro 4
          // linha 1
  tabuleiro[0][0] = '+';
  tabuleiro[0][1] = '+';
  tabuleiro[0][2] = ' ';
  tabuleiro[0][3] = ' ';
  tabuleiro[0][4] = ' ';
  tabuleiro[0][5] = '+';
  tabuleiro[0][6] = '+';
  // linha 2
  tabuleiro[1][0] = '+';
  tabuleiro[1][1] = '+';
  tabuleiro[1][2] = ' ';
  tabuleiro[1][3] = 'I';
  tabuleiro[1][4] = ' ';
  tabuleiro[1][5] = '+';
  tabuleiro[1][6] = '+';
  // linha 3
  tabuleiro[2][0] = ' ';
  tabuleiro[2][1] = ' ';
  tabuleiro[2][2] = 'I';
  tabuleiro[2][3] = 'I';
  tabuleiro[2][4] = 'I';
  tabuleiro[2][5] = ' ';
  tabuleiro[2][6] = ' ';
  // linha 4
  tabuleiro[3][0] = ' ';
  tabuleiro[3][1] = ' ';
  tabuleiro[3][2] = ' ';
  tabuleiro[3][3] = 'I';
  tabuleiro[3][4] = ' ';
  tabuleiro[3][5] = ' ';
  tabuleiro[3][6] = ' ';
  // linha 5
  tabuleiro[4][0] = ' ';
  tabuleiro[4][1] = ' ';
  tabuleiro[4][2] = ' ';
  tabuleiro[4][3] = 'I';
  tabuleiro[4][4] = ' ';
  tabuleiro[4][5] = ' ';
  tabuleiro[4][6] = ' ';
  // linha 6
  tabuleiro[5][0] = '+';
  tabuleiro[5][1] = '+';
  tabuleiro[5][2] = ' ';
  tabuleiro[5][3] = ' ';
  tabuleiro[5][4] = ' ';
  tabuleiro[5][5] = '+';
  tabuleiro[5][6] = '+';
  // linha 7
  tabuleiro[6][0] = '+';
  tabuleiro[6][1] = '+';
  tabuleiro[6][2] = ' ';
  tabuleiro[6][3] = ' ';
  tabuleiro[6][4] = ' ';
  tabuleiro[6][5] = '+';
  tabuleiro[6][6] = '+';
            do{
   scanVar = system("clear"); //clear

    //imprimeTabuleiro
  printf("0 - SAIR\n");
  scanVar = 0;
  printf("    1   2   3   4   5   6   7 \n");
  printf("  ----------------------------\n");
  for (i = 0; i < 7; i++) {
    printf("%i| ", i + 1);
    if(i < 2){
      printf("        ");
      for(j = 2; j < 5; j++){
      printf("["color_white"%c"color_reset"] ", tabuleiro[i][j]);
      }
    }else if (i < 5) {
    for (j = 0; j < 7; j++) {
      printf("["color_white"%c"color_reset"] ", tabuleiro[i][j]);
    }
    } else if (i < 7){
      printf("        ");
      for(j = 2; j < 5; j++){
      printf("["color_white"%c"color_reset"] ", tabuleiro[i][j]);
      }
    }
    
    printf("\n");
  } //end imprime tabuleiro
    
    //verificar vitória
    numI = 0;
    for(i = 0; i < 7; i++){
      for(j = 0; j < 7; j++){
        if(isalpha(tabuleiro[i][j])){
          numI = numI + 1;
        } 
      }
    }
    
    //end verificar vitória

    //contador de peças
    if(numI == 1){
      printf("Resta: "color_green"%i"color_reset"\n", numI);
      fimJogo4 = 1;
      break;
    } else{
      printf("Restam: "color_green"%i"color_reset"\n", numI);
    } //end contador de peças

              
    //selecionar peça
    pecaX = 0;
    pecaY = 0;
    printf("Escolha a linha da peça: ");
    //getchar(); //GET
    
    scanVar = scanf("%c", &pecaXchar);
    while((getchar() != '\n')); //limpar buffer
    if(pecaXchar - 48 == 0){
      SAIR = 1;
      fimJogo4 = 1;
      break;
    }
    
    
    printf("Escolha a coluna da peça: ");
    //getchar(); //GET
    scanVar = scanf("%c", &pecaYchar);
    while((getchar() != '\n')); //limpar buffer
    if(pecaYchar - 48 == 0){
      SAIR = 1;
      fimJogo4 = 1;
      break;
    }
    
    pecaX = pecaXchar - 48; //converte de char para int
    
    pecaY = pecaYchar - 48; //converte de char para int
    
    --pecaX;
    --pecaY;
    // tabuleiro[linhaX][colunaY]

     //verificar se não é uma peça e valida a entrada novamente
    if(pecaX > 6 || pecaX < 0 || pecaY > 6 || pecaY < 0){
      printf("Peça inválida.\n");
      while((getchar() != '\n')); //limpar buffer
    } else if (!isalpha(tabuleiro[pecaX][pecaY])) {
      printf("Peça inválida.\n");
      while((getchar() != '\n')); //limpar buffer
      //selecionarPeca();

    } else {
      destinoX = 0;
      destinoY = 0;
      printf("Escolha a linha de destino: ");
      //getchar(); //GET
      scanVar = scanf("%c", &destinoXchar);
      while((getchar() != '\n')); //limpar buffer
      if(destinoXchar - 48 == 0){
      SAIR = 1;
      fimJogo4 = 1;
      break;
    }
      
      printf("Escolha a coluna de destino: ");
      //getchar(); //GET
      scanVar = scanf("%c", &destinoYchar);
      while((getchar() != '\n')); //limpar buffer
      if(destinoYchar - 48 == 0){
      SAIR = 1;
      fimJogo4 = 1;
      break;
    }
      
      destinoX = destinoXchar - 48; //converte de char para int
      
      destinoY = destinoYchar - 48; //converte de char para int
      
      --destinoX;
      --destinoY;

      
       // verifica se o destino é possível e valida a entrada novamente
      if(destinoX > 6 || destinoX < 0 || destinoY > 6 || destinoY < 0){
        printf("Destino Inválido.\n");
        while((getchar() != '\n')); //limpar buffer
      } else if (!isspace(tabuleiro[destinoX][destinoY])) {
        printf("Destino inválido.\n");
        while((getchar() != '\n')); //limpar buffer
        //selecionarPeca(); enter para continuar????
      } else {
        //
        if(pecaX == destinoX){
          if(pecaY > destinoY){
            if(pecaY == destinoY + 2){
            comeX = pecaX;
            comeY = destinoY + 1;  //peça = 0 come = 0 destino = I
              if(isalpha(tabuleiro[comeX][comeY])){
                
              
            tabuleiro[pecaX][pecaY] = ' ';
            tabuleiro[comeX][comeY] = ' ';
            tabuleiro[destinoX][destinoY] = 'I';
            //imprimeTabuleiro();
            //selecionarPeca();
              } else{
          printf("Movimento inválido.\n");
                while((getchar() != '\n')); //limpar buffer
          //selecionarPeca();    
            } 
            } else{
          printf("Movimento inválido.\n");
              while((getchar() != '\n')); //limpar buffer
          //selecionarPeca();
            }
          } else {
            //add
            if(pecaY == destinoY - 2){
            comeX = pecaX;
            comeY = destinoY - 1; //peça = 0 come = 0 destino = I
              if(isalpha(tabuleiro[comeX][comeY])){
            tabuleiro[pecaX][pecaY] = ' ';
            tabuleiro[comeX][comeY] = ' ';
            tabuleiro[destinoX][destinoY] = 'I';
            //imprimeTabuleiro();
            //selecionarPeca();
              } else{
          printf("Movimento inválido.\n");
                while((getchar() != '\n')); //limpar buffer
          //selecionarPeca();    
            }
            } else{
          printf("Movimento inválido.\n");
              while((getchar() != '\n')); //limpar buffer
          //selecionarPeca();    
            }
            
          }
        } else if(pecaY == destinoY){
          if(pecaX > destinoX){
            //sub
            if(pecaX == destinoX + 2){
            comeY = pecaY;
            comeX = destinoX + 1; //peça = 0 come = 0 destino = I
              if(isalpha(tabuleiro[comeX][comeY])){
            tabuleiro[pecaX][pecaY] = ' ';
            tabuleiro[comeX][comeY] = ' ';
            tabuleiro[destinoX][destinoY] = 'I';
            //imprimeTabuleiro();
            //selecionarPeca();
                
              }else{
          printf("Movimento inválido.\n");
                while((getchar() != '\n')); //limpar buffer
          //selecionarPeca();    
            }
            } else{
          printf("Movimento inválido.\n");
              while((getchar() != '\n')); //limpar buffer
          //selecionarPeca();    
            } 
          } else{
            //add
            if(pecaX == destinoX - 2){
            comeY = pecaY;
            comeX = destinoX - 1; //peça = 0 come = 0 destino = I
              if(isalpha(tabuleiro[comeX][comeY])){
            tabuleiro[pecaX][pecaY] = ' ';
            tabuleiro[comeX][comeY] = ' ';
            tabuleiro[destinoX][destinoY] = 'I';
            //imprimeTabuleiro();
            //selecionarPeca();
              } else{
          printf("Movimento inválido.\n");
                while((getchar() != '\n')); //limpar buffer
          //selecionarPeca();    
            }
            } else{
          printf("Movimento inválido.\n");
              while((getchar() != '\n')); //limpar buffer
          //selecionarPeca();    
            }
          }
        } else {
          printf("Movimento inválido.\n");
          while((getchar() != '\n')); //limpar buffer
          //selecionarPeca();
        }
      }
    } //end selecionar peça
    
  }while(fimJogo4 == 0);
            fimJogo4 = 0;
            if(SAIR == 0){
            printf("Você venceu o jogo!\n");
              slot[slotNum].vitorias = slot[slotNum].vitorias + 1; 
            while((getchar() != '\n')); //limpar buffer
            break;} else if(SAIR == 1){
              SAIR = 0;
              printf("Você desistiu do jogo.\n");
              slot[slotNum].derrotas = slot[slotNum].derrotas + 1;
              while((getchar() != '\n')); //limpar buffer
              break;}
        }else if(menuJogos == '0'){
            break;
        }
        break;
        case '0': //working
        exit(0);
        break;
        }
    }while(sempre == 0);
}
