#include<conio.h>
#include<stdio.h>
#include<iostream>

using namespace std;
//prototype
void remplir_vecteur(int *vecteur,int dimension);
void affiche_vecteur(int *vecteur,int dimension);
void affiche_matrice(int **matrice, int lignes , int colonnes);
int main()
{
	int dimension,*vecteur;
	printf("Entrer la dimension du tableau");
	scanf("%d",&dimension);
	vecteur=new int[dimension];
	remplir_vecteur(vecteur,dimension);
	affiche_vecteur(vecteur,dimension);
	int lignes,colonnes,**matrice;
	printf("entrer le nbr de lignes");
	scanf("%d",&lignes);
	printf("entrer le nbr de colonnes");
	scanf("%d",&colonnes);
	affiche_matrice(matrice,lignes,colonnes);
}

void remplir_vecteur(int *vecteur,int dimension)
{
	int i;
	for(i=0;i<dimension;i++)
	{
		printf("Taper vecteur vecteur[i]= ");
		scanf("%d",&vecteur[i]);
	}
}

void affiche_vecteur(int *vecteur,int dimension)
{
	int i;
	for(i=0;i<dimension;i++)
	{
		printf("vecteur[i]= %d",vecteur[i]);
		printf("\n");
	}
}

void affiche_matrice(int **matrice,int lignes,int colonnes)
{
	int i,j;
	for(i=0;i<lignes;i++)
	{
		for(j=0;j<colonnes;j++)
		{
			printf("%d",matrice[i][j]);
		}
		printf("\n");
	}
}
