#include <stdio.h>
#include <string.h>
#include <stdlib.h> 
#include <stdbool.h>

//compilar c: gcc nombrefile -o ejecutable
//compilar cpp: g++ nombrefile -o ejecutable
struct list{
	char *content;	
	struct list *next;
};

struct list * constList();
bool isEmptyList(struct list * l);
void addElement(struct list *l,char * elem);
void printElements(struct list * l);

int main()
{	
	struct list *lp1 = constList();//*lp2;//,*lp3,*lp4;
	char s[30]="maximiliano";
	char s2[30]="fabiana";
	//lp1=(struct list *) malloc(sizeof(struct list));
	//strcpy(lp1->cabeza,"maximiliano");
	//lp2=(struct list *) malloc(sizeof(struct list));
	/*strcpy(lp2->cabeza,"fabiana");
	lp3=(struct list *) malloc(sizeof(struct list));
	strcpy(lp3->cabeza,"Magali");
	lp4=(struct list *) malloc(sizeof(struct list));
	strcpy(lp4->cabeza,"Simon");*/
	//lp1->siguiente=lp2;
	//strcpy(lp1->contenido,"maximiliano");
	//lp1->contenido=s;
	//printf("%s\n",lp1->contenido);
	
	//addElement(lp1,s);
	//addElement(lp1,s2);
	printElements(lp1);
	
	
}

struct list * constList(){
	return (struct list *) malloc(sizeof(struct list));
}
bool isEmptyList(struct list * l){
	if(l->next==NULL){
		//printf("vacia\n");
		return true;
	}else{
		//printf("no vacia\n");
		return false;
	}
}
void addElement(struct list *l,char * elem){
	struct list * laux=l;
	while(laux->next!=NULL){
		laux=laux->next;
		//printf("%s\n",laux->content);
	}
	laux->content=elem;
	laux->next=constList();
}
void printElements(struct list * l){
	struct list * laux=l;
	while(!isEmptyList(laux)){
		printf("%s\n",laux->content);
		laux=laux->next;
	}	
}





