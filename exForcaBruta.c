#include <stdio.h>
#include <stdlib.h>
#define TAM 31
#include <pthread.h>
#include <string.h>


int mais1(char ch){
	
		if (ch==57) return ch+8;
	else if (ch==90) return ch+7;
	else if (ch==122) return 48;
	else if ((ch>=48 && ch<=56) || (ch>=65 && ch<=89) || (ch>=97 && ch<=121)){
		return ch+1;
	}else 
		printf ("valor incompativel");
	
}

int main (){
	char comb[9]="00000000",comb2[9]="CFFFFFF3",comb3[9]="8FFFFFF7",comb2[9]="4FFFFFFB",key[9]="A1019110";
	char ch=48;
	int dig;
	int c1,c2,c3,c4,c5,c6,c7,c8;
	int i;
	pthread_t threads[4];			
	
	for (i=0; i<4; i++){
		
	}
	
	for (c8=0; c8<TAM; c8++){
	for (c7=0; c7<TAM; c7++){
	for (c6=0; c6<TAM; c6++){
	for (c5=0; c5<TAM; c5++){
	for (c4=0; c4<TAM; c4++){
	for (c3=0; c3<TAM; c3++){
	for (c2=0; c2<TAM; c2++){
	for (c1=0; c1<TAM; c1++){
		
		if (strcmp(comb,key)==0){
			printf ("\n !SENHA ENCONTRADA!\n\nKey=%s",comb);
			exit(0);
		}
//		printf ("%s\n",comb);
		comb[0]=mais1(comb[0]);
	}
		comb[1]=mais1(comb[1]);
	}
		comb[2]=mais1(comb[2]);
	}
		comb[3]=mais1(comb[3]);
	}
		comb[4]=mais1(comb[4]);
	}
		comb[5]=mais1(comb[5]);
	}
		comb[6]=mais1(comb[6]);
	}
		comb[7]=mais1(comb[7]);
	}
	
	return 0;
}


