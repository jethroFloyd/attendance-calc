#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main() {

	FILE *f;
	f = fopen("courseRec.txt","r");
	FILE *g;
	g=fopen("courseRecAux.txt","w+");
	int i = 0;
	int j = 0;
	int code,d1,d2,d3;
	char instructor[50];
	for(i=0; i<5; i++) {
		fscanf(f,"%d,%d,%d,%d,%s\n", &code, &d1, &d2, &d3, instructor);
		fprintf(g,"\tcourse[%d].courseCode = %d;\n", i, code);
		fprintf(g,"\tcourse[%d].days[0] = %d;\n", i, d1);
		fprintf(g,"\tcourse[%d].days[1] = %d;\n", i, d2);
		fprintf(g,"\tcourse[%d].days[2] = %d;\n", i, d3);
	}

	fclose(f);
	fclose(g);

	FILE *h;
	h = fopen("courseAtt.txt", "w");
	fprintf(h,"301,0,0\n331,0,0\n341,0,0\n343,0,0\n344,0,0\n");
	fclose(h);
	return 0;
}