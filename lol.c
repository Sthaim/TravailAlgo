#include <stdio.h>
#include <stdlib.h>

int main()
{
	int PVMonstre=100;
	int PVJoueur=100;
  printf("Point de vie du monstre :%d\n",PVMonstre);
	printf("Point de vie du joueur :%d\n",PVJoueur);
	do{
		printf("Attaque puissante du joueur\n");
		printf("-20PV\n");
		PVMonstre-=20;
		printf("Point de vie du monstre :%d\n",PVMonstre);
		if(PVMonstre>0){
			printf("Attaque puissante du monstre\n");
			printf("-20PV\n");
			PVJoueur-=20;
			printf("Point de vie du joueur :%d\n",PVJoueur);
		}
	}
	while(PVMonstre>0&&PVJoueur>0);
  return 0;
}
