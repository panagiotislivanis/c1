#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
void login();
int main(int argc, char *argv[]) {
	int menu;
	//FILE *fp;
	printf("menu\n");
	printf("1.login\n");
	printf("2.sign up\n");
	scanf("%d",&menu);
	printf("ebales %d\n",menu);
	if (menu==1){	
		login ();	}    
		else if (menu==2){	
			printf("17\n");}
		
	
    //fp =fopen ("test.txt","r+");  
	//if (fp==NULL){
	//	printf("error");
	//	exit(0);
	//		}	
	//fprintf(fp,"\n");
	//fprintf(fp,"hello\n");
	//fclose (fp);
	return 0;
}

void login(){
	printf("32 \n");
	FILE *fp;
	fp =fopen ("test.txt","r+");  
	if (fp==NULL){
		printf("error \n");
		exit(0);
			}
	printf("39 \n");	
	char onoma,kodikos,temp;
	printf("dose onoma\n");
	scanf("%c",onoma);
	printf("to onoma einai %c ",onoma);
	while (!feof(fp))
		{
			printf("46");
		    fscanf(fp, "%c", &temp);
		    if (temp ==onoma){
		    printf("49");
			break;}	
}
fclose(fp);
printf("53");

}

