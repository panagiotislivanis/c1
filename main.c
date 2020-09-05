#include <stdio.h>
#include <stdlib.h>
#include <string.h>


void login();
void singup();
int main(int argc, char *argv[]) {
	int menu;
	printf("menu\n");
	printf("1.login\n");
	printf("2.sign up\n");
	scanf("%d",&menu);
	printf("ebales %d\n",menu);
	if (menu==1){	
		login ();	}    
	else if (menu==2){	
		singup();
		}
	return 0;}

void login() {
    int flag = 0;
    char onoma[100], kodikos[100], temp[100],temp1[100];
    FILE *fp;
    fp = fopen("name.txt", "r+");
    if (fp == NULL) {
        printf("error \n");
        exit(0);
    }
    printf("dose onoma\n");
    scanf("%s", onoma);
    printf("to onoma einai %s ", onoma);
    while (!feof(fp)) {
        //printf("46\n");
        fscanf(fp, "%s", &temp);
        printf("%c", temp);
        if (strcmp(temp, onoma) == 0) {
           // printf("User with username %s exist!\n", temp);
            flag = 1;
            break;

        }
    }
    fclose(fp);
    if(flag=1){
    	FILE *fp1;
    	fp1 = fopen("pass.txt", "r+");
    	if (fp1 == NULL) {
       		printf("error \n");
       		exit(0);
    	}
    	//printf("39 \n");
    	printf("dose kodiko\n");
    	scanf("%s", kodikos);
    	//printf("to onoma einai %s ",onoma);
    	while (!feof(fp1)) {
        	//printf("46\n");
        	fscanf(fp1, "%s", &temp1);
        	printf("%c", temp1);
        		if (strcmp(temp1, kodikos) == 0) {
            		printf("welcome\n");
            		flag = 2;
            		break;
       			 }

   		 }
    fclose(fp1);
}
}
void singup(){
	FILE *fp;
	char name[100],pass[100];
	fp=fopen("name.txt","a");
	if(fp==NULL){
		printf("error \n");
       	exit(0);
	}
	printf("dose to onoma soy\n");
	scanf("%s",name);
	fprintf(fp,"%s",name);
	printf("dose to kodiko soy\n");
	FILE *fp1;
	fp1=fopen("pass.txt","a");
	scanf("%s",pass);
	fprintf(fp1,"%s",pass);
	
	
	
	
}

