/**
 * Curso lógica de programación
 * @version: v1.0.0
 * @author: Bryan Castro Sánchez
 * 
*/

#include <stdio.h>
#include <time.h>
#include <stdlib.h>
int main (){
    int charmaner_PH = 10;
    int squirtle_PH = 10;
    int option;
    while (charmaner_PH > 0 && squirtle_PH > 0){
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
        printf("Turno de Squirtle . . . \n");
    printf("Charmander recibe 2 de daño\n");
    }
    
    return 0;
}

