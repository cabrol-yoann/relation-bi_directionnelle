/**
 * @file Individu.h
 * @author cabrol (ycabrol@iutbayonne.univ-pau.fr)
 * @brief Spécifie une classe Individue en relation avec sa Voiture
 * @details au dela represente une personne par son nom et son prenom , la classe Individu
 * permet également de renseigner la qu'il conduit.
 * 
 * 
 * la voiture associée à l'Individue par un pointeur vers la classe Voiture.
 * @version 0.1
 * @date 2022-08-12
 * @warning un Individue correspond au plus à une Voiture
 * 
 * 
 * @copyright Copyright (c) 2022
 * 
 */

#ifndef INDIVIDU_H
#define INDIVIDU_H

using namespace std;

#include "Voiture.h" // Utilisée ci-dessous
#include <iostream>

/**
 * @brief Représente un Individu via son nom, son prénom et sa Voiture
 * @deprecated Il existe desormais la classe Personne, celle-ci étant obsolète
 * 
 */
class Voiture; /* Annonce une définition ultérieure de Voiture
                   permet de faire référence aux membres de Voiture dans la classe Individu */

class Individu
{
    // ATTRIBUTS
  public:
    /**
     * @brief Le nom de l'individu
     * 
     */
    string nom;
    /**
     * @brief Le prénom de l'individu
     * 
     */
    string prenom;
    /**
     * @brief Lien avec la voiture de l'individu
     * 
     */
    Voiture *maVoiture;

    // MÉTHODES
  public:
    // Constructeur
    /**
     * @brief Construit un nouvelle object Individu à partir de son nom et de son prénom
     * 
     */
    Individu(string = "", string = "");
    // destructeur
    /**
     * @brief Détruit un object Individu
     * 
     */
    ~Individu();

    // Méthodes usuelles : toString
    /**
     * @brief Retourne l'identité de l'Individu
     * 
     * @return une chaîne de caractère sous la forme 'nom prénom'
     * @bug problème de formatage, 2 espace entre le nom et le prénom
     * @todo ajouter un paramètre pour préciser si l'on veut un affichage "nom prenom" "ou prenom nom"
     */
    string toString(); 
    string toStringAndLink(); // Affiche l'identité de l'individu et de sa voiture s'il en a une

    // Méthodes spécifiques
    void majMaVoiture(Voiture* voiture);
    /**
     * @brief définie le poiteur qui vas désigner la Voiture de l'Individu
     * 
     * @param voiture pointeur vers l'object Voiture pilloter par l'Individu
     */
    void setMaVoiture(Voiture* voiture);
    void supprimerLien();
};

#endif // INDIVIDU_H