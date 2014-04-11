/*
 * tri.cpp
 *
 *  Created on: 09.04.2014
 *      Author: Cyrill Zundler
 */
 
#include "tri.h"

 
 void  triTas(int tableau[], int premier, int dernier)
 {
	int n = dernier - premier;
	int taille = n;
	
	for(int i = n/2; i >= 0; --i)
	{
		descend(tableau, i, premier, dernier);
	}
	
	do
	{
		permute(tableau, 0, taille);
		taille--;
		descend(tableau, 0, premier, taille);
	} while (taille > 0);
	
	
 }


void  descend(int tableau[], int i, int premier, int dernier)
{
	int n = (dernier - premier);
	int position; 
	
	while(i <= (n/2))
	{
		position = 2 * i;
		if(position < n)
		{
			if(tableau[position + 1] > tableau[position])
				position++;
		}
		
		if(tableau[i] >= tableau[position])
			break;
		
		permute(tableau, i, position);
		
		i = position;
	}
}

void permute(int tableau[], int i, int j)
{
	int tmp = tableau[i];
	tableau[i] = tableau[j];
	tableau[j] = tmp;
}

void triSelection(int tableau[], int size)
{
	int imin;
	
	for(int i = 0; i < size; ++i)
	{
		imin = i;
		for (int j = i + 1; j < size; ++j)
		{
			if(tableau[j] < tableau[imin])
				imin = j;
		}
		permute(tableau,i,imin);
	}
}