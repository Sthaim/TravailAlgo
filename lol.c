#include <stdio.h>
#include <stdlib.h>

int main()
{
	int PVMonstre=100;
	int PVJoueur=100;
	int Def=0;
	int Choix=0;
  printf("Point de vie du monstre :%d\n",PVMonstre);
	printf("Point de vie du joueur :%d\n",PVJoueur);
	do{
		printf("Choisir entre defense(1) et attaque(2)\n");
		scanf("%d",&Choix);
		while(Choix!=2 && Choix!=1){
			printf("Choisir entre defense(1) et attaque(2)\n");
			scanf("%d",&Choix);
		}
		if(Choix==1){
			Def=4;
		}
		else if(Choix==2){
			printf("Attaque puissante du joueur\n");
			printf("-20PV\n");
			PVMonstre-=20;
			printf("Point de vie du monstre :%d\n",PVMonstre);
			Def=1;
		}
		if(PVMonstre>0){
			printf("Attaque puissante du monstre\n");
			printf("-20PV\n");
			PVJoueur-=20/Def;
			printf("Point de vie du joueur :%d\n",PVJoueur);
		}
	}
	while(PVMonstre>0&&PVJoueur>0);
  return 0;
}
