#include "header.hpp" // Obligatoire 
#include <iostream>

// La Focntion: 
void fribourgeoise(int nombrePersonne) 
										
{
	//On calcul la recette pour une personne

	double vacherin = 150;
	double eau = 0.375;
	double ail = 0.375;
	double pain = 75;

	if (nombrePersonne > 0)
	{
		vacherin *= nombrePersonne;
		eau *= nombrePersonne;
		ail *= nombrePersonne;
		pain *= nombrePersonne;
	}

	std::cout << " vacherin : " << vacherin << std::endl;	 // comme on veut afficher et nous n'avons pas ici														
	std::cout << " Eau : " << eau << std::endl;				// la librairie using namespace std il faut donc rajouter 
	std::cout << " Ail " << ail << std:: endl;				// std:: devant le cout et derriere le endl;
	std::cout << " Pain : " << pain << std:: endl;

}

// Le header

#ifndef HEADER_HPP_INCLUDED
#define HEADER_HPP_INCLUDED

/*
 Fonction qui calul les ingrédients d'une recette de fribourgeoise en fonction du nombre de convives.
 Ce nombre de convives est le nombre reçu en argument
 * - nombrePersonne : Le nombre auquel la fonction ajoute le nombre de convives donné par l'utilisateur
 * Valeur retournée : nombrePersonne qui est le nombre de convives tapés par l'utilisateur 
 * 
 * / On utilise la fonction void qui 
	// permet uniquement l'affiche et pas de retur

*/

void fribourgeoise(int nombrePersonne); 



#endif // !HEADER_HPP_INCLUDED

// Le main

*
Exemple d'exécution du programme
Entrez le nombre de personne(s) conviées à la fondue : 3
Pour faire une fondue fribourgeoise pour 3 personnes, il vous faut :
- 600.0 gr de Vacherin fribourgeois
- 1.5 dl d'eau
- 1.5 gousse(s) d'ail
- 300.0 gr de pain
- du poivre à volonté
*/

#include <iostream>
#include "header.hpp" // on rappelle ici le header.hpp
using namespace std;


int main()
{
	

	int nombrePersonFribourgeoise(0); 

	cout << " Entrez le nombre de personnes conviees a la fondue  "; 
	cin >> nombrePersonFribourgeoise;

	fribourgeoise(nombrePersonFribourgeoise);
	cout << " Pour faire une fondue fribourgeoise pour " << nombrePersonFribourgeoise << " personnes il vous faut : " << endl;
	
	
	return 0;
}
