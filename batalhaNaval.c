#include <stdio.h>

int main(){
 

    char linha[10] = {'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H', 'I', 'J'};
    
    int contadorPrimario = 0;
    int contadorSegundario = 0;

    int quantosLoops = 3;

    int MapBattleNaval[10][10] = {0};

    MapBattleNaval[3][4] = 3;
    MapBattleNaval[1][0] = 3;


    

    printf("Bem vindo, Ao Batalha Naval\n");


    
    
    for(int i =0; i < 10; i++){
        printf(" %c", linha[i]);
    }

    printf("\n");
    //Exibir todo quadrante x, y

    for(int i = 0; i < 10; i++){
        printf("%d|", i);
        for(int j = 0; j < 10; j++){
            
            //Diagonal Primaria Canto Superior esquerdo ao Canto Inferior Direito
            if(i == j && contadorPrimario < quantosLoops && MapBattleNaval[i][j] == 0){ //Diagonal Primaria
                MapBattleNaval[i][j] = 3;//Atribuindo a esses espaços se verdadeiro == 3
                contadorPrimario++; 
            }
            //Diagonal Segundaria Canto Superior Direito ao Canto Inferior Esquerdo 
            //Se i + j for igual a 9 e Contador for menor do que quantosloops e Matriz Batalha Naval indice i e indice j == 0. executar o indice i e j = 3.
            if(i + j == 9 && contadorSegundario < quantosLoops && MapBattleNaval[i][j] == 0){ //Diagonal Segundaria
                MapBattleNaval[i][j] = 3; //Atribuindo a esses espaços se verdadeiro == 3
                contadorSegundario++;
            }

            printf("%d ", MapBattleNaval[i][j]); //Exibir Mapa do Tabuleiro 
        }
        printf("\n"); 
    }
}