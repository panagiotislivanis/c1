#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main (void){
	int max=-9999,min=9999,temp,i;
	FILE *nun_file=fopen("num_file.txt", "r");
		if (nun_file == NULL) {
			printf("error!");	
		}
		while (!feof(nun_file))
		{
		    fscanf(nun_file, "%d", &temp);
		    if (temp >max){
			max=temp;
			}
			if (temp <min) {
			min=temp;
			}   
	}
	printf ("max:%d \nmin:%d",max,min );
			return 0;
}
