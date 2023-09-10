#include <stdio.h>

//Diego Demian Quiros Vicencio
// 09/09/2023
//Ingresar 3 numeros e imprimirlos en orden ascendente

int main(){

    int n1,n2,n3,op;
    
	do{
	    printf("Escribe 3 numeros:\n");
	    scanf("%d %d %d",&n1,&n2,&n3);
	
		if(n1>n2&&n2>n3){
			printf("%d %d %d",n3,n2,n1);
		}
		else if(n2>n3&&n3>n1){
			printf("%d %d %d",n1,n3,n2);
		}
		else if(n3>n1&&n1>n2){
			printf("%d %d %d",n2,n1,n3);
		}
		else if(n1>n3&&n3>n2){
			printf("%d %d %d",n2,n3,n1);				
		}
		else if(n3>n2&&n2>n1){
			printf("%d %d %d",n1,n2,n3);
		}
		else if(n2>n1&&n1>n3){
			printf("%d %d %d",n3,n1,n2);
		}
		printf("\n1) seguir 2)parar: \t");scanf("%d",&op);
		
	}while(op==1);
    return 0;
}