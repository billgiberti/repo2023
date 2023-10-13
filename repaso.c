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
	
	p1=(struct persona *)malloc(2*sizeof(struct persona));
	strcpy(p1->nombre,"maximiliano");
	strcpy(p1->apellido,"gilberto");
	p1->edad = 38;
	strcpy(p1[1].nombre,"faiana");
        strcpy(p1[1].apellido,"abadie");
        p1[1].edad = 42;

	
	printf("%s\n",p1[0].nombre);
	printf("%s\n",p1[0].apellido);
	printf("%i\n",p1[0].edad);
	printf("%s\n",p1[1].nombre);
        printf("%s\n",p1[1].apellido);
        printf("%i\n",p1[1].edad);
	return 0;
}
