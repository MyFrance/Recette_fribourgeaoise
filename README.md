# Recette_fribourgeaoise

Le but de cet exercice est d'écrire un programme qui permet d'adapter automatiquement, en fonction du nombre de convives, les quantités d'ingrédients nécessaires à la confection d'une fondue fribourgeoise (au pur Vacherin fribourgeois ; une recette typiquement suisse, mais à ne pas confondre avec la fondue « moitié-moitié », suisse également ;-) ).
 Écrivez un programme fondue.cc qui : 
1. déclare une constante BASE, initialisée à 4, et qui indique le nombre de personnes pour laquelle est conçue la recette de base ;
2. déclare une variable fromage, initialisée à 800.0, qui donne la quantité de fromage en grammes nécessaire pour BASE personnes (du « Vacherin fribourgeois » en l'occurrence !) ;
3. déclare une variable eau, initialisée à 2.0, qui donne la quantité d'eau en décilitres nécessaire pour BASE personnes ;
 4. déclare une variable ail, initialisée à 2.0, qui donne le nombre de gousses d'ail nécessaires pour BASE personnes (on choisit le type double car on veut pouvoir utiliser des moitiés de gousses par exemple) ; 
5. déclare une variable pain, initialisée à 400.0, qui donne la quantité de pain en grammes nécessaire pour BASE personnes ;
6. demande à l'utilisateur d'introduire le nombre de convives pour lequel on veut préparer la recette ; 
7. lit la réponse de l'utilisateur et l'enregistre dans une variable nb_convives de type entier ;
8. adapte les quantités de chaque ingrédient en faisant une règle de trois ( nouvelle_quantite = quantite_de_base * nb_convives / BASE ) ;
 9. et affiche la recette pour le nombre de convives voulus selon l'exemple ci-dessous.

Exemple d'exécution du programme
-Entrez le nombre de personne(s) conviées à la fondue : 3 
Pour faire une fondue fribourgeoise pour 3 personnes, il vous faut : 
- 600.0 gr de Vacherin fribourgeois 
- 1.5 dl d'eau - 1.5 gousse(s) d'ail
 - 300.0 gr de pain
 - du poivre à volonté
