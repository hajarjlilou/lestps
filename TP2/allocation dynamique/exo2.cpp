#include<conio.h>
#include<stdio.h>
#include<iostream>

using namespace std;
//prototype
int *allow_vecteur(int dimension,int val);
int *allow_vecteur(int dimension,int val)
{
	int i;
	int *vecteur=malloc(dimension sizeof(int));
	for(i=0;i<dimension;i++)
	{
		vecteur[i]=val;
		return valeur;
	}	
}
void libere_vecteur(int *vecteur)
{
	free(vecteur);
}
 int **allow_matrice(int lignes,int colonnes,int val)
 {
 	int i,j;
 	int **matrice=malloc(lignes*sizeof(int x))
 	for(i=0;i<lignes;i++)
 	{
 		matrice[i]=(colonnes=*sizeof(int ));
 		for(j=0;j<lignes;j++)
 		{
 			matrice[i][j]=val;
 			return matrice;
 		}
 		
 	}
 }
 
void libere_matrice(int **matrice,int lignes)
{
	int i;
	for(i=0;i<lignes;i++)
	{
		free((int *)matrice[i]);
	}
}
 
int **allow_matrice_zero(int lignes,int colonnes)
{
	int i;
	int **matrice=calloc(lignes.sizeof(int *));
	for(i=0;i<lignes;i++)
	{
		matrice[i]=calloc(colonnes,sizeof(int))
	}
	return matrice;
}
int **genere_matrice_identite(int dimension)
{
	int i;
	int **identite=allow_matrice_zero(dimension,dimension);
	for(i=0;i<dimension;i++)
	{
		identite[i][i]=1;
		affiche_matrice(identite,dimension,dimension);
	}
	return identite;
}
main()
{
    	
}
