#include<stdio.h>
int i,j,k;
int f,c;
int fila,columna, suma=0,sumac=0, sumab=0,sp=0,ss=0,contador=0,x,y;

int main(){
	
	int horizontal[c];
int vertical[f];

//llenado de la primera matriz
printf("ingrese el numero de filas");
scanf("%d", &f);
printf("ingrese el numero de columnas");
scanf("%d", &c );
int matriz[f][c];

for (fila=0; fila<f;fila++){
for (columna=0; columna<c;columna++){
printf("ingrese los valores %d%d", fila+1,columna+1);
scanf("%d", &matriz[fila][columna]);
}
printf("\n");
}

//imprimir la primera matriz
printf("matriz M1: \n");
for (fila=0; fila<=f-1;fila++){
for (columna=0; columna<=c-1;columna++){
printf("%d\t",matriz[fila][columna]);
}
printf("\n");
}
/*Bucle que suma las filas y registra el resultado en el vector vertical*/
for(fila=0;fila<f;fila++)
{
    suma=0;
    for(columna=0;columna<c;columna++)
    {
        suma+=matriz[fila][columna];
    }
    vertical[fila]=suma;
}


printf("sumatoria de filas es:\n");

/*Recorre el vector vertical y muestra los resultados*/
for(i=0;i<f;i++)
{
    printf("%d\n",vertical[i]);
}

/*Bucle que suma las columnas y registra el resultado en el vector horizontal*/
for(columna=0;columna<c;columna++)
{
    suma=0;
    for(fila=0;fila<f;fila++)
    {
        suma+=matriz[fila][columna];
    }
    horizontal[columna]=suma;
}
printf("sumatoria de columnas es:\n");
/*Recorre el vector horizontal y muestra los resultados*/
for(i=0;i<c;i++)
{
    printf("%d\t",horizontal[i]);
    
   
}
 printf("\n");
    printf("\n");
    
   
for(fila=0;fila<f;fila++)
{
for(columna=0;columna<c;columna++)
{
if(fila==columna){
sumab=sumab+matriz[fila][columna];
}
}
}
printf("la suma de la diagonal principal es: %d\n",sumab);
contador=c;


for(fila=0;fila<f;fila++)
	
	
	{
		
		sumac=sumac+matriz[fila][--c];

}
printf("la suma de la diagonal segundaria es: %d\n",sumac);


	int bandera=0;
	
	
	for(x=0;x<f;x++){
		
		if(sumac==sumab && vertical[x]==vertical[x+1] && horizontal[x]==horizontal[x+1]){
			if (x==(f-1)){
				
				break;
				}
			
			printf("La matriz ingresada es amiga");
			}else {
				printf("La matriz ingresada no es amiga");
			
}
}
}
