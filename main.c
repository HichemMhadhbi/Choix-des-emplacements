#include <stdio.h>
#include <stdlib.h>

int main()
{
    int nbEmplacements, i, j, k;
    do {
        printf("Veuillez saisir le nombre d'emplacements au maximum 1000 : \n");
        scanf("%d", &nbEmplacements);
    }while (nbEmplacements > 1000 || nbEmplacements <= 0);

    int Tpos[nbEmplacements];
    printf("Veuillez saisir les positions des marchands : \n");
    for (i = 0 ; i < nbEmplacements ; i++){
        scanf("%d", &Tpos[i]);
    }

    int Tmarch[nbEmplacements];  //Tableau pour stocker les positions des marchands

    for (j = 0 ; j < nbEmplacements ; j++){
        Tmarch[Tpos[j]] = j;
    }

    printf("Le numero de lemplacement attribue a chaque marchand par ordre croissant des numeros de marchands:\n");
    for (k = 0 ; k < nbEmplacements ; k++){
        printf("%d\n", Tmarch[k]);
    }

    return 0;
}


/*
Lorsqu'on organise un marché, certains emplacements sont beaucoup plus intéressants que d'autres. Afin d'éviter les tentations de « pots de vin », la ville dans laquelle vous venez d'arriver a décidé qu'on organiserait à chaque fois un tirage au sort, chacun ayant sa chance !

Chaque marchand met donc son nom dans un grand panier, et des tirages sont effectués. On tire d'abord le nom du marchand qui aura le premier emplacement, puis celui qui aura le second, et ainsi de suite. On décide alors d'afficher par ordre alphabétique, les noms des marchands avec le numéro de leur emplacement.

Pour simplifier l'exercice, on suppose que les marchands ne mettent pas leur nom dans le panier mais simplement un numéro qui indique leur rang dans la liste des marchands.

Ce que doit faire votre programme :
Votre programme devra lire le nombre d'emplacements nbEmplacements (au maximum 1 000), puis pour chaque emplacement à partir de 0, le numéro du marchand à qui est attribué l'emplacement (entre 0 et nbEmplacements − 1).

Ensuite, pour chaque marchand de 0 à nbEmplacements − 1, votre programme devra afficher le numéro de l'emplacement qui lui est attribué.

EXAMPLE
input:

5
1
4
0
3
2
output:

2
0
4
3
1
COMMENTS
Il y a 5 positions : la première est utilisée par le marchand 1, la seconde est utilisée par le marchand 4, la troisième le marchand 0, etc.

En sortie, on donne les positions des marchands par ordre des numéros des marchands :

marchand n°0 : position 2 ;
marchand n°1 : position 0 ;
marchand n°2 : position 4 ;
marchand n°3 : position 3 ;
marchand n°4 : position 1.

*/
