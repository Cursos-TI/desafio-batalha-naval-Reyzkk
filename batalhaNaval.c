#include <stdio.h>

int main(){
 

    char linha[10] = {'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H', 'I', 'J'};
    
    int contadorPrimario = 0;
    int contadorSegundario = 0;
    int contadorOctaedroHabilidade = 0;
    int contadorCruzHabilidade = 0;
    int contadorConeHabilidade = 0;

    int habilidadeDisponivel = 3;
    int quantosLoops = 3;

    int MapBattleNaval[10][10] = {0};

    /*MapBattleNaval[3][4] = 3;
    MapBattleNaval[1][0] = 3;
    MapBattleNaval[3][3] = 3;*/

    int px = 8;
    int py = 8;

    int pxCruz = 2;
    int pyCruz = 8;

    int pxCone = 5;
    int pyCone = 5;


    if (contadorOctaedroHabilidade < habilidadeDisponivel &&
        MapBattleNaval[py][px] == 0 &&
        py > 0 && py < 9 && px > 0 && px < 9) // para evitar sair da matriz
    {
        MapBattleNaval[py][px] = 5;       // centro
        MapBattleNaval[py-1][px] = 5;     // cima
        MapBattleNaval[py+1][px] = 5;     // baixo
        MapBattleNaval[py][px-1] = 5;     // esquerda
        MapBattleNaval[py][px+1] = 5;     // direita
    
        contadorOctaedroHabilidade++;
    } 

    if(contadorCruzHabilidade < habilidadeDisponivel && MapBattleNaval[pyCruz][pxCruz] == 0 && pxCruz > 1 && pxCruz < 9 && pyCruz > 1 && pyCruz < 9){
        MapBattleNaval[pyCruz][pxCruz] = 5; //Centro
        MapBattleNaval[pyCruz-1][pxCruz] = 5; //Cima
        MapBattleNaval[pyCruz+1][pxCruz] = 5; //Baixo
        MapBattleNaval[pyCruz][pxCruz-1] = 5; //Esquerda
        MapBattleNaval[pyCruz][pxCruz-2] = 5; //Esquerda
        MapBattleNaval[pyCruz][pxCruz+1] = 5; //Direita
        MapBattleNaval[pyCruz][pxCruz+2] = 5; //Direita

        contadorCruzHabilidade++;
    }

    if(contadorConeHabilidade < habilidadeDisponivel && MapBattleNaval[pyCone][pxCone] == 0 && pyCone > 0 && pyCone < 9 && pxCone > 0 && pxCone < 9){
        MapBattleNaval[pyCone-1][pxCone] = 7; //Cima
        
        MapBattleNaval[pyCone][pxCone-1] = 7; //esquerdo
        MapBattleNaval[pyCone][pxCone] = 7; //centro baixo
        MapBattleNaval[pyCone][pxCone+1] = 7; //Direito

        MapBattleNaval[pyCone+1][pxCone-1] = 7;   //esquerda
        MapBattleNaval[pyCone+1][pxCone-2] = 7; //esquerdo
        MapBattleNaval[pyCone+1][pxCone] = 7; //centro baixo
        MapBattleNaval[pyCone+1][pxCone+1] = 7; //Direito
        MapBattleNaval[pyCone+1][pxCone+2] = 7; //Direito

        contadorConeHabilidade++;
    }


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