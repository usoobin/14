#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

/*int main(int argc, char *argv[]) {
	return 0;
}*/

void main(void)
{
	char *pc = NULL; //pc는 포인터 
	int i = 0;
	
	pc = (char*)malloc(100*sizeof(char)); //100byte가 malloc에 의해서 할당됨 
	if(pc == NULL)
	{
		printf("메모리 할당 오류 \n");
		exit(1); //프로그램 종료 
	}
	
	for(i=0; i<26; i++)
	{
		pc[i] = 'a'+i;
	}
	
	pc[i] = 0;
	printf("%s\n", pc);
	free(pc);	
}

