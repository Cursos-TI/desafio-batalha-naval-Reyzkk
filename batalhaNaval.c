#include <stdio.h>

int main(){
 

    char linha[10] = {'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H', 'I', 'J'};

    int MapBattleNaval[10][10] = {0};

    MapBattleNaval[0][0] = 3;
    MapBattleNaval[9][9] = 3;


    

    printf("Bem vindo, Ao Batalha Naval\n");


    
    
    for(int i =0; i < 10; i++){
        printf(" %c", linha[i]);
    }

    printf("\n");
    //Exibir todo quadrante x, y

    for(int i = 0; i < 10; i++){
        printf("%d|", i);
        for(int j = 0; j < 10; j++){
            printf("%d ", MapBattleNaval[i][j]);
        }
        printf("\n");
    }
}