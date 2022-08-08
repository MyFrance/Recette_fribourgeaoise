#include "header.hpp" // Obligatoire 
#include <iostream>

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