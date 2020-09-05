#include <stdio.h>
#include <stdlib.h>
#include <string.h>

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
	return 0;}

void login(){
	int flag = 0;
	printf("32 \n");
	FILE *fp;
	fp =fopen ("test.txt","r+");
	if (fp==NULL){
		printf("error \n");
		exit(0);
	}
	printf("39 \n");	
	char onoma[100],kodikos,temp [100];
	int rest;
	printf("dose onoma\n");
	scanf("%s",onoma);
	printf("to onoma einai %s ",onoma);
	while (!feof(fp)){
		printf("46\n");
	    fscanf(fp, "%s", temp);
	    printf("%c",temp);
        if(strcmp(temp, onoma) == 0){
        	printf("User with username %s exist!\n", temp);
        	flag = 1;
        	break;
		}
        /*printf("%s",temp);
        printf("%d\n",rest);
	    if (rest==0){
	    	printf("hello90");
	    } */
	}
	fclose(fp);
	if(flag == 0)
		printf("User with username %s not exist!\n", onoma);
	printf("53");
}

