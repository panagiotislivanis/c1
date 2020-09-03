#include <stdio.h>
#include <stdlib.h>
#include <string.h>
struct amaxia {
	char kataskeuastis[7];
	char montelo[7];
	float  kivika;
	int etos;
	float kostos;
};
int main(int argc, char* argv[]) {
	int ekt;
	struct amaxia amaxi1;
	struct amaxia amaxi2;
	struct amaxia amaxi3;
	struct amaxia amaxi4;
	strcpy(amaxi1.kataskeuastis, "opel");
	strcpy(amaxi1.montelo, "VECRA");
	amaxi1.kivika = 1.8;
	amaxi1.etos = 1996;
	amaxi1.kostos = 25000;
	strcpy(amaxi2.kataskeuastis, "ford");
	strcpy(amaxi2.montelo, "monteo");
	amaxi2.kivika = 1.8;
	amaxi2.etos = 2001;
	amaxi2.kostos = 25000;
	strcpy(amaxi3.kataskeuastis, "flat");
	strcpy(amaxi3.montelo, "punto");
	amaxi3.kivika = 1.4;
	amaxi3.etos = 2002;
	amaxi3.kostos = 12000;
	strcpy(amaxi4.kataskeuastis, "hunday");
	strcpy(amaxi4.montelo, "atos");
	amaxi4.kivika = 1.0;
	amaxi4.etos = 2002;
	amaxi4.kostos = 9000;
	printf("amaxi1 kataskeuatis %s \n", amaxi1.kataskeuastis);
	printf("amaxi1 montelo %s \n", amaxi1.montelo);
	printf("amaxi1 kivika %.1f \n", amaxi1.kivika);
	printf("amaxi1 etos %d \n", amaxi1.etos);
	printf("amaxi1 kostos %.f \n", amaxi1.kostos);
	printf("amaxi2 kataskeuatis %s \n", amaxi2.kataskeuastis);
	printf("amaxi2 montelo %s \n", amaxi2.montelo);
	printf("amaxi2 kivika %.1f \n", amaxi2.kivika);
	printf("amaxi2 etos %d \n", amaxi2.etos);
	printf("amaxi2 kostos %.f \n", amaxi2.kostos);
	printf("amaxi3 kataskeuatis %s \n", amaxi3.kataskeuastis);
	printf("amaxi3 montelo %s \n", amaxi3.montelo);
	printf("amaxi3 kivika %.1f \n", amaxi3.kivika);
	printf("amaxi3 etos %d \n", amaxi3.etos);
	printf("amaxi3 kostos %.f \n", amaxi3.kostos);
	printf("amaxi4 kataskeuatis %s \n", amaxi4.kataskeuastis);
	printf("amaxi4 montelo %s \n", amaxi4.montelo);
	printf("amaxi4 kivika %.1f \n", amaxi4.kivika);
	printf("amaxi4 etos %d \n", amaxi4.etos);
	printf("amaxi4 kostos %.f \n", amaxi4.kostos);
	ekt = ektp(amaxi1, amaxi2, amaxi3, amaxi4);




	return 0;
}
int ektp(struct amaxia amaxi1, struct amaxia amaxi2, struct amaxia amaxi3, struct amaxia amaxi4) {
	printf("amaxi1 kataskeuatis %s \n", amaxi1.kataskeuastis);
	printf("amaxi1 montelo %s \n", amaxi1.montelo);
	printf("amaxi1 kivika %.1f \n", amaxi1.kivika);
	printf("amaxi1 etos %d \n", amaxi1.etos);
	printf("amaxi1 kostos %.f \n", amaxi1.kostos);
	printf("amaxi2 kataskeuatis %s \n", amaxi2.kataskeuastis);
	printf("amaxi2 montelo %s \n", amaxi2.montelo);
	printf("amaxi2 kivika %.1f \n", amaxi2.kivika);
	printf("amaxi2 etos %d \n", amaxi2.etos);
	printf("amaxi2 kostos %.f \n", amaxi2.kostos);
	printf("amaxi3 kataskeuatis %s \n", amaxi3.kataskeuastis);
	printf("amaxi3 montelo %s \n", amaxi3.montelo);
	printf("amaxi3 kivika %.1f \n", amaxi3.kivika);
	printf("amaxi3 etos %d \n", amaxi3.etos);
	printf("amaxi3 kostos %.f \n", amaxi3.kostos);
	printf("amaxi4 kataskeuatis %s \n", amaxi4.kataskeuastis);
	printf("amaxi4 montelo %s \n", amaxi4.montelo);
	printf("amaxi4 kivika %.1f \n", amaxi4.kivika);
	printf("amaxi4 etos %d \n", amaxi4.etos);
	printf("amaxi4 kostos %.f \n", amaxi4.kostos);
	return 0;

}
