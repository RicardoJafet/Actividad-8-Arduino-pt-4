/*Autor: Ricardo Jafet Granados Chable, Realizado: 10/02/2022
	Onceavo programa en C, Programa en arduino: En deicha tienda existe una promocion, 
	si se llevan minimo 5 arduinos, se les hace el 20% de descuento, cada arduino tiene un costo de $350.
	El programa pedira la cantidad de arduinos a comprar y calculara el total a pagar.
	Usando el operador ternario.
	*/

#include<stdio.h>

int main() {
	// Declaracion 
	int arduinos;
	float total, descuento=0;
	// Entrada de datos
	printf("Porfavor introduzca la cantidad de arduinos deseada: ");
	scanf("%d", &arduinos);
	// Proceso 
	total=arduinos*350.0;
	descuento = (arduinos>=5)? total*0.2 : 0;
	printf("Subtotal:   $%10.2f\n", total);
	printf("Descuento: -$%10.2f\n", descuento);
	printf("           -------------\n");
	printf("Total:      $%10.2f", total-descuento);
	return 0;
}
