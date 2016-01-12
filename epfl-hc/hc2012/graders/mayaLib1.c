/////////////////////////////
// DO NOT SUBMIT THIS FILE //
/////////////////////////////

#include <stdlib.h>
#include <stdio.h>
#include "mayaLib1.h"

static int p[1024][16];
static int c[1024];
static int R; 
static int ourSol;
static int yourSol;
static int T;
static FILE* fin;

static void read_case() {
  int i, j;
	fscanf(fin, "%d",&R);
	for (i=0; i<=R; i++) {
		fscanf(fin, "%d",&(c[i]));
		for (j=0; j<c[i]; j++)
			fscanf(fin, "%d",&(p[i][j]));
	}
	fscanf(fin, "%d",&ourSol);
}

int main() {
        fin = stdin;
	fscanf(fin, "%d",&T);
	while (T--) {
		read_case();
		yourSol = fetch_calendar(R, c, p);
		if (yourSol != ourSol) {
			printf("Incorrect\n");
			exit(0);
		}
	}
	printf("Correct dd4ecd6fa7ca205a407d8d6dcaddaa64\n");
	return 0;
}
