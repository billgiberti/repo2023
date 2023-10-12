#include <stdio.h>

//compilar c: gcc nombrefile -o ejecutable
//compilar cpp: g++ nombrefile -o ejecutable
struct persona{
   char nombre[]="maximiliano";
   char apellido[]="gilberto";
   int edad;
};

int main()
{
	
	struct persona p1;
	
	//p1.apellido[] = {'M', 'a', 'x', 'i', 'm', 'i', 'l', 'i', 'a', 'n', 'o', '\0'};
	p1.edad= 38;
	

	
	printf("%s\n",p1.nombre);
	printf("%s\n",p1.apellido);
	printf("%i\n",p1.edad);
	return 0;
}
