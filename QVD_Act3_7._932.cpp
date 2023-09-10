#include <stdio.h>
//Quiros Vicencio Diego Demian
// 21/09/22
// Algoritmo que muestre el zodiaco

int main() {
    int dia, mes;
    
    printf("Horoscopo UABC\n");
    printf("¿En qué mes naciste?\n");
    printf("1) Enero\n");
    printf("2) Febrero\n");
    printf("3) Marzo\n");
    printf("4) Abril\n");
    printf("5) Mayo\n");
    printf("6) Junio\n");
    printf("7) Julio\n");
    printf("8) Agosto\n");
    printf("9) Septiembre\n");
    printf("10) Octubre\n");
    printf("11) Noviembre\n");
    printf("12) Diciembre\n");
    scanf("%d", &mes);
    
    printf("¿En qué día naciste?\n");
    scanf("%d", &dia);
    
    switch (mes) {
        case 1:
            if (dia <= 20) {
                printf("Su signo es Capricornio\n");
                printf("Su horoscopo dice que:\n");
                printf("Debes dejar que los problemas se resuelvan por sí solos\n");
            } else {
                printf("Su signo es Acuario\n");
                printf("Su horoscopo dice que:\n");
                printf("Este año el amor no será para ti\n");
            }
            break;
        case 2:
            if (dia <= 20) {
                printf("Su signo es Acuario\n");
                printf("Su horoscopo dice que:\n");
                printf("Este año el amor no será para ti\n");
            } else {
                printf("Su signo es Piscis\n");
                printf("Su horoscopo dice que:\n");
                printf("Si la vida te da la espalda, tú sabes qué hacer\n");
            }
            break;
        case 3:
            if (dia <= 20) {
                printf("Su signo es Piscis\n");
                printf("Su horoscopo dice que:\n");
                printf("Si la vida te da la espalda, tú sabes qué hacer\n");
            } else {
                printf("Su signo es Aries\n");
                printf("Su horoscopo dice que:\n");
                printf("Llegará mucho dinero, no dejes de trabajar\n");
            }
            break;
        case 4:
            if (dia <= 20) {
                printf("Su signo es Aries\n");
                printf("Su horoscopo dice que:\n");
                printf("Llegará mucho dinero, no dejes de trabajar\n");
            } else {
                printf("Su signo es Tauro\n");
                printf("Su horoscopo dice que:\n");
                printf("Constrúyete y enfócate en ti mismo, lo bueno llegará solo\n");
            }
            break;
        case 5:
            if (dia <= 20) {
                printf("Su signo es Tauro\n");
                printf("Su horoscopo dice que:\n");
                printf("Constrúyete y enfócate en ti mismo, lo bueno llegará solo\n");
            } else {
                printf("Su signo es Géminis\n");
                printf("Su horoscopo dice que:\n");
                printf("Cuidado con quién cuentes tus secretos, solo puedes confiar en ti mismo\n");
            }
            break;
        case 6:
            if (dia <= 20) {
                printf("Su signo es Géminis\n");
                printf("Su horoscopo dice que:\n");
                printf("Cuidado con quién cuentes tus secretos, solo puedes confiar en ti mismo\n");
            } else {
                printf("Su signo es Cáncer\n");
                printf("Su horoscopo dice que:\n");
                printf("Los verdaderos amigos se cuentan con los dedos de una sola mano\n");
            }
            break;
        case 7:
            if (dia <= 20) {
                printf("Su signo es Cáncer\n");
                printf("Su horoscopo dice que:\n");
                printf("Los verdaderos amigos se cuentan con los dedos de una sola mano\n");
            } else {
                printf("Su signo es Leo\n");
                printf("Su horoscopo dice que:\n");
                printf("Deberías redirigir tus metas y ambiciones para el futuro\n");
            }
            break;
        case 8:
            if (dia <= 20) {
                printf("Su signo es Leo\n");
                printf("Su horoscopo dice que:\n");
                printf("Deberías redirigir tus metas y ambiciones para el futuro\n");
            } else {
                printf("Su signo es Virgo\n");
                printf("Su horoscopo dice que:\n");
                printf("Tendrás oportunidad de viajar y explorar para conocerte a ti mismo\n");
            }
            break;
        case 9:
            if (dia <= 20) {
                printf("Su signo es Virgo\n");
                printf("Su horoscopo dice que:\n");
                printf("Tendrás oportunidad de viajar y explorar para conocerte a ti mismo\n");
            } else {
                printf("Su signo es Libra\n");
                printf("Su horoscopo dice que:\n");
                printf("Te sentirás cansado, no te rindas\n");
            }
            break;
        case 10:
            if (dia <= 20) {
                printf("Su signo es Libra\n");
                printf("Su horoscopo dice que:\n");
                printf("Te sentirás cansado, no te rindas\n");
            } else {
                printf("Su signo es Escorpio\n");
                printf("Su horoscopo dice que:\n");
                printf("El amor y el romance llevan tu nombre\n");
            }
            break;
        case 11:
            if (dia <= 20) {
                printf("Su signo es Escorpio\n");
                printf("Su horoscopo dice que:\n");
                printf("El amor y el romance llevan tu nombre\n");
            } else {
                printf("Su signo es Sagitario\n");
                printf("Su horoscopo dice que:\n");
                printf("Ganarás la discusión de tu vida\n");
            }
            break;
        case 12:
            if (dia <= 20) {
                printf("Su signo es Sagitario\n");
                printf("Su horoscopo dice que:\n");
                printf("Ganarás la discusión de tu vida\n");
            } else {
                printf("Su signo es Capricornio\n");
                printf("Su horoscopo dice que:\n");
                printf("Debes dejar que los problemas se resuelvan por sí solos\n");
            }
            break;
        default:
            printf("Error: El mes debe estar entre 1-12\n");
    }
    
    return 0;
}
