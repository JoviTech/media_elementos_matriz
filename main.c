#include<stdio.h>

int main(){
  int matriz[5][5];
  float media[6];
  int linha, coluna, somador=0;

  for(linha=0; linha<5; linha++){
    for(coluna=0; coluna<5; coluna++){
      matriz[linha][coluna]=(linha+2)*(coluna+2);
    }
  }

  for(linha=0; linha<5; linha++){
    for(coluna=0; coluna<5; coluna++){
      printf("%d ",matriz[linha][coluna]);
      if(linha != 0 && linha != 4 && coluna != 0 && coluna != 4){
        somador+=matriz[linha][coluna];
      }
    }
    media[0]=somador/6;
    printf("\n");
    
  }
  printf("Media: %.2f", media[0]);


  return 0;
  }
