#include <stdio.h>
#include <time.h>
#include <stdlib.h>

#define GREEN  "\x1B[32m"

void rand_leaf(char l)
{
	int color = rand() % 18 - 10;
	if (color < 0)
		printf(GREEN "%c", l);
	else
		printf("\x1B[%im" "%c", 32+color, 'o');
}

int main(int argc, char **argv)
{
	int i, j, w;
	char t,l;
	srand(time(NULL));

	scanf("%i %c %c", &w, &t, &l);
    for (i=0; i<(w-1); i++) {
    	printf("%*s", (w+1)-i, "");
    	for (j=0;j<1+i*2;j++)
    		 rand_leaf(l);
    	printf("\n");
    }
    printf("%*s" "%c%c%c\n", w, " ", t, t, t);

    return 0;
}