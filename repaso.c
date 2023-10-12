#include <stdio.h>
#include <string.h>
#include <stdlib.h> 

//compilar c: gcc nombrefile -o ejecutable
//compilar cpp: g++ nombrefile -o ejecutable
struct persona{
   char nombre[30];
   char apellido[30];
   int edad;
};

int main()
{
	
	struct persona *p1;
	
	p1=(struct persona *)malloc(sizeof(struct persona));
	strcpy(p1->nombre,"maximiliano");
	strcpy(p1->apellido,"gilberto");
	p1->edad = 38;
	

	
	printf("%s\n",p1->nombre);
	printf("%s\n",p1->apellido);
	printf("%i\n",p1->edad);
	return 0;
}
