/**
 * Curso lógica de programación
 * @version: v1.0.0
 * @author: Bryan Castro Sánchez
 * 
*/

#include <stdio.h>
#include <time.h>
#include <stdlib.h>
#include <locale.h>

int main (){
    //Set languaje to Spanish 
    setlocale (LC_ALL,"spanish");

    int const CHARMANDER = 10;
    int const SQUIRTLE = 10;
    int charmaner_PH = CHARMANDER;
    int squirtle_PH = SQUIRTLE;
    int bar1, bar2, option;
    while (charmaner_PH > 0 && squirtle_PH > 0){
        //Modify HP bars values
        bar1 = charmaner_PH * 10 / CHARMANDER;
        bar2 = squirtle_PH * 10 / SQUIRTLE;
        //Print HP Bars
        //PH CHARMANDER BAR
        printf("Charmander PH:%d[", charmaner_PH);
        for(int x=0; x<bar1; x++)printf("#");
        for(int x=0; x<10-bar1; x++)printf(" ");
        printf("]\n");
        //PH SQUIRTLE BAR
        printf("Squirtle PH:%d[", squirtle_PH);
        for(int x=0; x<bar2; x++)printf("#");
        for(int x=0; x<10-bar2; x++)printf(" ");
        printf("]\n\n");
        //Users turn
        printf("Tu turno . . .\n");
        printf("Selecciona un ataque:\n1)ASCUAS\n2)GRUÑIDO\n3)MORDIZCO\n4)GARRA_METAL\n");
        scanf("%d", &option);
        switch (option){
        case 1:
            /* ASCUAS */
            printf("CHARMANDER uso Ascuas\nSquirtle recibe 3 de daño\n");
            squirtle_PH -= 3;
            break;

        case 2:
            /* GRUÑIDO */
            printf("CHARMANDER uso Gruñido\nSquirtle se le quedo viendo\n");
            break;
        case 3:
            /*MORDIZCO*/
            printf("CHARMANDER uso Mordizco\nSquirtle recibe 2 de daño\n");
            squirtle_PH -= 2;
            break;
        case 4:
            /*GARRA_METAL*/
            printf("CHARMANDER uso Garra Metal\nSquirtle recibe 5 de daño\n");
            squirtle_PH -= 5;
            break;
        
        default:
            printf("Selecciona una opcion valida\n");
            break;
        }
        //Oponent turns
        printf("Turno de Squirtle . . . \n");
        printf("Charmander recibe 2 de daño\n");
        charmaner_PH -= 2;
    }
    
    return 0;
}

