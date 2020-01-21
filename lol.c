#include <stdio.h>
#include <stdlib.h>

int main()
{
	int PV=100;
    printf("Point de vie du monstre :%d\n",PV);
	while(PV>0){
	printf("Attaque puissante\n");
	printf("-20PV\n");
	PV-=20;
	printf("Point de vie de %d\n",PV);
	}
	printf("Point de vie de %d\n",PV);
	printf("Monstre Mort")
    return 0;
}
