#include <stdio.h>
#include <stdlib.h>

int main()
{
	int PVMonstre=100;
	int PVJoueur=100;
	int Def=1;
	int DefMonst=1;
	int Choix=0;
	int MPJ=10;
	int MPM=10;
	int PoisJ=0;
	int PoisM=0;
	printf("%d\n",Choix);
  printf("Point de vie du monstre :%d\n",PVMonstre);
	printf("Point de vie du joueur :%d\n",PVJoueur);
	do{
		printf("Choisir entre defense(1)/attaque(2)/Sort de poison(3) et Antidote(4)\n");
		scanf("%d",&Choix);
		while(Choix!=2 && Choix!=1 && Choix!=3 && Choix!=4){
			printf("Choisir entre defense(1)/attaque(2)/Sort de poison(3) et Antidote(4)\n");
			scanf("%d",&Choix);
		}
		while(MPJ<=0 && Choix==3){
			printf("Pas assez de mana\n");
			printf("Choisir entre defense(1)/attaque(2) et Antidote(4)\n");
			scanf("%d",&Choix);
			}
		if(Choix==1){
			Def=4;
		}
		else if(Choix==2){
			printf("Attaque puissante du joueur\n");
			printf("-20PV\n");
			PVMonstre-=20/DefMonst;
			printf("Point de vie du monstre :%d\n",PVMonstre);
			Def=1;
		}
		else if(Choix==3){
			MPJ-=2;
			PoisM=1;
		}
		else{
			PoisJ=0;
		}
		if(PVMonstre>0){
			Choix=rand()%4+1;
			while(MPM<=0 && Choix==3){
				Choix=rand()%3+1;
			}
			if(Choix==1){
				DefMonst=4;
			}
			else if(Choix==2){
				printf("Attaque puissante du monstre\n");
				printf("-20PV\n");
				PVJoueur-=20/Def;
				printf("Point de vie du joueur :%d\n",PVJoueur);
				DefMonst=1;
			}
			else if(Choix==3){
				PoisJ=1;
				MPM-=2;
			}
			else{
				PoisM=0;
			}
		}
		if(PoisM==1){
			printf("Le poison inflige -5 au monstre\n");
			PVMonstre-=5;
			printf("Point de vie du monstre :%d\n",PVMonstre);
		}
		if(PoisJ==1){
			printf("Le poison inflige -5 au joueur\n");
			PVJoueur-=5;
			printf("Point de vie du joueur :%d\n",PVJoueur);
		}
	}
	while(PVMonstre>0&&PVJoueur>0);
  return 0;
}
