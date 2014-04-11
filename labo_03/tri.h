/*
 * tri.h
 *
 *  Created on: Fév 19, 2014
 *      Author: Michael Sandoz
 */

#ifndef TRI_H_
#define TRI_H_

/**
 * But : Permet de permutation de 2 elements dans tableau.
 *
 * Entree : Le tableau contenant les elements.
 * 			L'indice du premier element.
 * 			L'indice du second element.
 */
void permute(int tableau[], int i, int j);

/**
 * But : Permet de remplacer un element a l'emplacement donnee.
 *
 * Entree : Le tableau contenant les elements.
 * 			L'indice de l'element a remplacer.
 * 			Le nouvel element.
 */
void remplace(int tableau[], int i, int element);

/**
 * But : Effectue le tri par selection d'un tableau de n elements de type entier
 *		 en utilisant la permutation, complexite en O(n^2).
 *
 * Entree : Le tableau a trier.
 * 			La taille du tableau.
 */
void triSelection(int tableau[], int size);

/**
 * But : Effectue le tri par tas d'un tableau de n elements de type entier
 * en utilisant la permutation, complexite en O(n*log(n)) constant.
 *
 * Entree : Le tableau a trier.
 * 			L'indice du premier element du tableau.
 * 			L'indice du dernier element du tableau.
 */
void  triTas(int tableau[], int premier, int dernier);

/**
 * But : Descend un element jusqu'a retablir la condition de tas
 * 		 en utilisant la permutation.
 *
 * Entree : Le tableau a trier.
 * 			L'indice de l'element a descendre.
 * 			L'indice du premier element du tableau.
 * 			L'indice du dernier element du tableau.
 */
void  descend(int tableau[], int i, int premier, int dernier);

/**
 * But : Tri par casier d'un tableau de type entier. A besoin de la borne
 * 		 maximal des differents elements present dans le tableau.
 * 		 Complexite en O(n).
 *
 * Entree : Le tableau a trier.
 * 			La taille du tableau.
 *			Le plus grand nombre se trouvant dans le tableau.
 */
void triCasier(int tableau[], int size, int borne);

#endif /* TRI_H_ */
