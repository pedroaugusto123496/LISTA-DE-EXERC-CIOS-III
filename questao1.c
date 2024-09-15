#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
  char palavra[11];
  bool acertou = false;
  int num_letras=0;
  int tenta;
  int tentarest= 0;
  char chute[2];
  int indexWhile_1 = 0;
 
  printf("Digite uma palavra com ate 10 letras maior q isso sera cortado\n");
  fgets(palavra,11,stdin);
  num_letras = strlen(palavra)-1;
  char verificaçao[num_letras+1];
  for(int i=0;i<num_letras+1;i++){
      verificaçao[i]='_';
  };
  system("clear");
  printf("A palavra tem %d letras.\n", num_letras);
  tenta= num_letras+2;
  printf("Voce tem %d tentativas para acertar a palavra!\n", tenta);
 
  while(tentarest < tenta){
  printf("Tente adivinhar uma letra: \n");
  fgets(chute,2,stdin);
  if(strlen(chute) != strlen("a")){
      printf("So pode ser inserido uma letra por vez\n");
  }else{
          while(indexWhile_1 <= num_letras){
                 if(chute[0]==palavra[indexWhile_1]){
                  verificaçao[indexWhile_1]=palavra[indexWhile_1];
                  acertou = true;
                 }else{
                     if(!(verificaçao[indexWhile_1]=='_')){
                         verificaçao[indexWhile_1]=verificaçao[indexWhile_1];
                         if(indexWhile_1 == num_letras){verificaçao[indexWhile_1+1]='\0';};
                     }else{
                         if(indexWhile_1 == num_letras){verificaçao[indexWhile_1+1]='\0';}else{verificaçao[indexWhile_1]='_';}
                     }
                 }
          indexWhile_1++;
          }
          system("clear");
	  indexWhile_1=0;
          bool ok = true;
	  while(indexWhile_1 <= num_letras){if(ok && palavra[indexWhile_1] == verificaçao[indexWhile_1]){ok = true;}else{ok = false;};indexWhile_1++;};
	  if(ok){printf("Parabens, voce ganhou! :D\n");return 0;}
          printf("Forca: %sChances usadas: %d de %d \n", verificaçao,tentarest,tenta);
          indexWhile_1=0;
      }
     if(!acertou){tentarest = tentarest+1;}else{acertou=false;}
  }
  printf("voce perdeu :(\n");
  return 0;
}
}
