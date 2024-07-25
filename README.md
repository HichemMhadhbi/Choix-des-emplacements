# Choix des emplacements

## Description 
Lorsqu'on organise un marché, certains emplacements sont beaucoup plus intéressants que d'autres. Afin d'éviter les tentations de « pots de vin », la ville dans laquelle vous venez d'arriver a décidé qu'on organiserait à chaque fois un tirage au sort, chacun ayant sa chance !
Chaque marchand met donc son nom dans un grand panier, et des tirages sont effectués. On tire d'abord le nom du marchand qui aura le premier emplacement, puis celui qui aura le second, et ainsi de suite. On décide alors d'afficher par ordre alphabétique, les noms des marchands avec le numéro de leur emplacement.
Pour simplifier l'exercice, on suppose que les marchands ne mettent pas leur nom dans le panier mais simplement un numéro qui indique leur rang dans la liste des marchands.

## Ce que doit faire votre programme :
Votre programme devra lire le nombre d'emplacements nbEmplacements (au maximum 1 000), puis pour chaque emplacement à partir de 0, le numéro du marchand à qui est attribué l'emplacement (entre 0 et nbEmplacements − 1).
Ensuite, pour chaque marchand de 0 à nbEmplacements − 1, votre programme devra afficher le numéro de l'emplacement qui lui est attribué.

### EXAMPLE
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

### COMMENTS
Il y a 5 positions : la première est utilisée par le marchand 1, la seconde est utilisée par le marchand 4, la troisième le marchand 0, etc.
En sortie, on donne les positions des marchands par ordre des numéros des marchands :
marchand n°0 : position 2 ;
marchand n°1 : position 0 ;
marchand n°2 : position 4 ;
marchand n°3 : position 3 ;
marchand n°4 : position 1.

## Explication générale du code
Ce programme lit le nombre d'emplacements (au maximum 1000), puis pour chaque emplacement, il lit le numéro du marchand auquel cet emplacement est attribué. Ensuite, il affiche, pour chaque marchand (par ordre de numéro), le numéro de l'emplacement qui lui est attribué.

### Étapes du programme

#### Lecture du nombre d'emplacements :
int nbEmplacements, i, j, k;
do {
    printf("Veuillez saisir le nombre d'emplacements au maximum 1000 : \n");
    scanf("%d", &nbEmplacements);
} while (nbEmplacements > 1000 || nbEmplacements <= 0);
Le programme demande à l'utilisateur de saisir le nombre d'emplacements.
La saisie est validée pour s'assurer qu'elle est entre 1 et 1000.

#### Lecture des positions des marchands :
int Tpos[nbEmplacements];
printf("Veuillez saisir les positions des marchands : \n");
for (i = 0; i < nbEmplacements; i++) {
    scanf("%d", &Tpos[i]);
}
Le programme crée un tableau Tpos pour stocker les positions des marchands.
Il lit ensuite les positions pour chaque emplacement et les stocke dans le tableau Tpos.

#### Initialisation du tableau des marchands :
int Tmarch[nbEmplacements];  //Tableau pour stocker les positions des marchands
for (j = 0; j < nbEmplacements; j++) {
    Tmarch[Tpos[j]] = j;
}
Le programme crée un tableau Tmarch pour stocker les emplacements attribués à chaque marchand.
Il parcourt le tableau Tpos pour remplir le tableau Tmarch de sorte que Tmarch[numéro du marchand] = emplacement.

#### Affichage des résultats :
printf("Le numero de l'emplacement attribue a chaque marchand par ordre croissant des numeros de marchands:\n");
for (k = 0; k < nbEmplacements; k++) {
    printf("%d\n", Tmarch[k]);
}
Le programme parcourt le tableau Tmarch et affiche les emplacements pour chaque marchand par ordre de leur numéro.
Explication des boucles

#### Boucle de lecture des positions des marchands :
for (i = 0; i < nbEmplacements; i++) {
    scanf("%d", &Tpos[i]);
}
Cette boucle itère i de 0 à nbEmplacements - 1.
À chaque itération, elle lit un entier qui représente le numéro du marchand pour l'emplacement i et le stocke dans Tpos[i].

#### Boucle de remplissage du tableau des marchands :
for (j = 0; j < nbEmplacements; j++) {
    Tmarch[Tpos[j]] = j;
}
Cette boucle itère j de 0 à nbEmplacements - 1.
Pour chaque j, Tpos[j] donne le numéro du marchand pour l'emplacement j.
Tmarch[Tpos[j]] = j signifie que le marchand dont le numéro est Tpos[j] se trouve à l'emplacement j.

#### Boucle d'affichage des résultats :
for (k = 0; k < nbEmplacements; k++) {
    printf("%d\n", Tmarch[k]);
}
Cette boucle itère k de 0 à nbEmplacements - 1.
Elle affiche le contenu de Tmarch[k], qui est l'emplacement attribué au marchand k.

## Exemple
### Supposons que l'entrée soit :
5
1
4
0
3
2
#### Explications étape par étape :
Nombre d'emplacements : 5
Positions des marchands : 1, 4, 0, 3, 2

#### Tableau Tpos après lecture :
Tpos = [1, 4, 0, 3, 2]

#### Remplissage du tableau des marchands :
Pour j = 0 : Tpos[0] est 1, donc Tmarch[1] = 0
Pour j = 1 : Tpos[1] est 4, donc Tmarch[4] = 1
Pour j = 2 : Tpos[2] est 0, donc Tmarch[0] = 2
Pour j = 3 : Tpos[3] est 3, donc Tmarch[3] = 3
Pour j = 4 : Tpos[4] est 2, donc Tmarch[2] = 4

#### Tableau Tmarch après remplissage :
Tmarch = [2, 0, 4, 3, 1]

#### Affichage des résultats :
2
0
4
3
1

#### Ce qui signifie :
Marchand 0 : Emplacement 2
Marchand 1 : Emplacement 0
Marchand 2 : Emplacement 4
Marchand 3 : Emplacement 3
Marchand 4 : Emplacement 1