#include <stdio.h>
int main(int argc, char **argv)
{
	int i;
	int nbr,cond=1;
	printf("Entrez un nombre SVP ");
	scanf("%i",&nbr);
	if (nbr==1)
	 printf("le nombre %i n'est pas premier ", nbr) ;
	for (i=nbr-1;i!=1;i--){
	   if (nbr%i==0){ 
		   cond=0;}
	   }
	   if (cond==0)
	 printf("le nombre %i n'est pas premier ", nbr) ;
	   else 
	 printf("le nombre %i est premier ", nbr) ;
	return 0;
}

