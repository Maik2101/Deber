#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    srand(time(NULL));

    int hp = 200;
    int arma, agreSitua1, agreSitua2, agreSitua3, agreSitua4, agreSitua5;
    int opSitua1, opSitua2,  opSitua3, opSitua4, opSitua5 ;

    printf("\n\nIngrese el nombre de su héroe o heroína:\n\n ");
    char nbre[50];
    scanf("%s", nbre);
    printf("\n¡Tu heroe o heroina es %s!\n", nbre);

    printf("\nElija un arma:\n");
    printf("\n\n1. Hacha (daño: 50)\n");
    printf("\n\n2. Espada (daño: 30)\n");
    printf("\n\n3. Arco (daño: 20)\n");
    scanf("%d", &arma);

    // situaciones aleatorias
    opSitua1 = rand() % 5 + 2;
    opSitua2 = rand() % 5 + 2;

    // Situación 1
    printf("\nSituación 1:\n");
    printf("\n\nTe encuentras con un Golem de Piedra gigante que bloquea el camino.\n");
    printf("\n\n¿Deseas pelear o huir?\n");
    printf("\n\n1. Pelear\n");
    printf("\n\n2. Huir\n");
    scanf("%d", &opSitua1);

    if (opSitua1 == 1) {
        printf("\n\nAtacas al Golem con tu\n\n ");
        if (arma == 1) {
            printf("\n\nHacha\n\n");
            agreSitua1 = 50;
        } else if (arma== 2) {
            printf("\n\nEspada\n\n");
            agreSitua1 = 30;
        } else {
            printf("\n\nArco\n\n");
            agreSitua1 = 20;
        }
        printf("\n\n ¡Logras dañarlo y derrotarlo!\n");
        hp -= 10; // pierde 10 HP en el proceso
    } else {
        printf("\n\nDecides huir del Golem, pero en el proceso recibes un poco de daño, pierdes 5 HP.\n");
        hp -= 5; // pierde 5 HP al huir
      
    }

    // Situación 2
    printf("\nSituación 2:\n");
    printf("\n\nTe toparás con un grupo de Kobolds salvajes. ¿Cómo procederás?\n");
printf("\n\n1. Atacar\n");
printf("\n\n2. Negociar\n");
scanf("%d", &opSitua2);

if (opSitua2 == 1) {
    printf("\n\nDecides atacar a los Kobolds con tu\n\n ");
    if (arma == 1) {
        printf("\n\nHacha\n\n");
        agreSitua2 = 50;
    } else if (arma == 2) {
        printf("\n\nEspada\n\n");
        agreSitua2 = 30;
    } else {
        printf("\n\nArco\n\n");
        agreSitua2 = 20;
    }
    printf("\n\nlogrando derrotar a la mayoría de ellos. Sin embargo, recibes daño en el proceso, perdiendo 15 HP.\n");
    hp -= 15; // pierde 20 HP al luchar contra los Kobolds
} else {
    printf("\n\nIntentas negociar con los Kobolds, pero estos no parecen entender tus palabras y deciden atacarte. Pierdes 30 HP en la pelea.\n");
    hp -= 30; // pierde 30 HP al intentar negociar con los Kobolds
}
// Situacion 3
  printf("\nSituacion 3.\n");
  printf("\n\nTe encuentras en un bosque oscuro y lluvioso y derepente, un lobo salvaje aparece frente a ti. Que haces\n");
  printf("\n\n1. Atacar\n");
  printf("\n\n2. Huir sin hacer ruido\n");
  scanf("%d",&opSitua3);

  if(opSitua3 ==1) {
    printf("\n\nDecides atacar al lobo salvaje\n\n");
    if(arma == 1) {
      printf("\n\nHacha\n\n");
      agreSitua3 = 50;
    } else if (arma == 2){
      printf("\n\nEspada\n\n");
      agreSitua3 = 30;
    } else {
      printf ("\n\nArco\n\n");
      agreSitua3 = 20;
    }
    printf(" logras derrotar al lobo salvaje, pero recibe daño y asi perdiendo 5 HP.\n\n");
    hp -= 5;
    } else  {
    printf("\n\nIntentas huis sin hacer ruido, pero sin embargo el lobo salvaje te escucha y corres y asi recibiendo un daño de 9 HP\n\n");
    hp -=9;
    }
  //Situacion 4
  printf("\nSituacion 4.\n");
  printf("\n\nTe encuentras en una jungla  y derepente, te das cuenta de que estás siendo seguido por un grupo de canibales. Que haces\n\n");
  printf("\n\n1. Atacar\n");
  printf("\n\n2. Negociar\n");
  scanf("%d",&opSitua4);
  if (opSitua4 == 1) {
    printf("\n\nDecides atacar al grupo de canibales con tu\n\n ");
    if (arma == 1) {
        printf("\n\nHacha\n\n");
        agreSitua4 = 50;
    } else if (arma == 2) {
        printf("\n\nEspada\n\n");
        agreSitua4 = 30;
    } else {
        printf("\n\nArco\n\n");
        agreSitua4 = 20;
        }if  (arma == 3){
     
    }
    printf("logrando derrotar a la mayoría de ellos. Sin embargo, recibes daño y perdiendo 8 HP.\n\n");
    hp -= 8; // pierde 20 HP al luchar contra los Kobolds
} else {
    printf("\n\nIntentas negociar con los canibales, realizando un trueque pero el grupo no le entiende asi que le atacan y recibe un daño de 10 HP.\n");
    hp -= 10; // pierde 30 HP al intentar negociar con los Kobolds
}//Situacion 5
  printf("\nSituacion 5.\n");
  printf("\n\nEstás tranquilo caminando, cuando un grupo te persigue en el cual quiren quitarte todas tus armas.\n");
  printf("1.\n\n Resistirse\n");
  printf("2. \n\nEntregar\n");
  scanf("%d",&opSitua5);
  if (opSitua5 == 1) {
    printf("\n\nDecides resistirte y peleando con tu\n\n ");
    if (arma == 1) {
        printf("Hacha");
        agreSitua5 = 50;
    } else if (arma == 2) {
        printf("\n\nEspada\n\n");
        agreSitua5 = 30;
    } else {
        printf("\n\nArco\n\n");
        agreSitua5 = 20;
      
    }
    printf("logrando derrotar al grupo de querian quitarte tus armas y recibes nutrientes que suman 20 HP.\n\n");
    hp += 20; // pierde 20 HP al luchar contra los Kobolds
} else {
    printf("\n\nEntregas todas tus armas pero sin embargo te realizan un daño de 25 Hp, asi tiniendo que morir\n\n");

    hp -= 25; // pierde 30 HP al intentar negociar con los Kobolds
}  

printf("\n¡Fin del juego! %s ha terminado la aventura con %d HP restantes.\n", nbre, hp);

return 0;}

;