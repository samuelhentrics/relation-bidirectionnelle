/**
 * @file Individu.h
 * @author Samuel HENTRICS LOISTINE
 * @brief Spécification de la classe Individu en relation réciproque avec sa Voiture
 * @details representer une personne par son nom et son prénom, la classe Individu permet
 * également de renseignant la voiture qu'il conduit.
 * 
 * La voiture associe à l'individu est représentée par un pointer vers un objet de la
 * classe Voiture.
 * @version 1.0
 * @date 2022-10-17
 * @warning Un Individu correspond au plus à une Voiture.
 * 
 * @copyright Copyright (c) 2022
 * 
 */

#ifndef INDIVIDU_H
#define INDIVIDU_H

using namespace std;

#include "Voiture.h" // Utilisée ci-dessous
#include <iostream>

class Voiture; /* Annonce une définition ultérieure de Voiture
                   permet de faire référence aux membres de Voiture dans la classe Individu */


/**
 * @brief Represente un Individu via son nom, son prenom et sa voiture
 * @deprecated Utiliser à la place la classe Personne qui est plus récente
 * 
 */
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
    /**
     * @brief Construit un nouvel objet Individu à partir de son nom et de son prénom
     * 
     */
    Individu(string = "", string = "");
    /**
     * @brief Détruit un objet Individu
     * 
     */
    ~Individu();

    // Méthodes usuelles : toString

    /**
     * @brief Retourne l'identité de l'individu
     * 
     * @return une chaîne de caractères sous la forme nom, prénom
     * @bug Problème de formatage des espaces entre le nom et le prénom
     * @todo Ajouter un paramètre pour préciser si on veut un affichage du type nom/
     * prénom ou nom/prénom
     * 
     */
    string toString();
    string toStringAndLink(); // Affiche l'identité de l'Individu et de sa Voiture s'il en a une

    // Méthodes spécifiques
    void majMaVoiture(Voiture* voiture);

    /**
     * @brief Définit la Voiture de l'Individu
     * 
     * @param voiture pointeur vers l'objet Voiture piloté par l'Individu
     */
    void setMaVoiture(Voiture* voiture);
    void supprimerLien();
};

#endif // INDIVIDU_H