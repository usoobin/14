#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

/*int main(int argc, char *argv[]) {
	return 0;
}*/

struct Book
{
	int number;
	char title[10];	
}; 

void main(void)
{
	struct Book *p;
	
	p = (struct Book*)malloc(2*sizeof(struct Book));
	
	if(p == NULL)
	{
		printf("�޸� �Ҵ� ���� \n");
		exit(1); //���α׷� ���� 
	}
	
	p->number = 1;
	strcpy(p->title, "C Programming");
	
	(p+1)->number = 2;
	strcpy((p+1)->title, "Electronics");
	
	
	free(p);
	return;	
}

