#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
void login();
int main(int argc, char *argv[]) {
	char menu;
	FILE *fp;
	printf("menu\n");
	printf("login\n");
	printf("sign up\n");
	scanf("%c",&menu);
	 switch(menu){
		case 'login':
	 login ();
	//	break;
	//	case 'sing up':
	//	break;
//	}
    fp =fopen ("test.txt","r+");  
	if (fp==NULL){
		printf("error");
		exit(0);
			}	
	fprintf(fp,"\n");
	fprintf(fp,"hello\n");
	fclose (fp);
	
	
	return 0;
}
void login(){
	printf("hello");

}
