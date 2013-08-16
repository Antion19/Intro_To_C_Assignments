#include <stdio.h>

typedef struct adress_t {
	int xx;
	int yy;
	int zz;
	int mm;
	char nickname[10];
	
} adress_t;

adress_t scan_adress(FILE*, adress_t);
void print_adress(adress_t);
int local_adress(adress_t, adress_t);

int main () {
	
	FILE *datafile;
	
	datafile = fopen("add_list.dat", "r");
	
	int i, j, k;
	
	adress_t array[100];
	
	
	printf("Enter a list of adresses and nicknames in the form (xx.yy,zz.mm nickname)\n");
	printf("Terminate by entering 0.0.0.0 none\n");
	array[0] = scan_adress(datafile, array[0]);
	for (i=1; array[i-1].xx != 0 || array[i-1].yy != 0
		 || array[i-1].zz != 0 || array[i-1].mm != 0; i++) {
		array[i] = scan_adress(datafile, array[i]);
	}
	
	fclose(datafile);
	
	for (j=0; j<i; j++) {
		for (k= j+1; k<i; k++) {
			if (local_adress(array[j], array[k])) {
				printf("Machines %s and %s are on the same local network.\n",
					   array[j].nickname,array[k].nickname);
			}
		}
	}
	
	
	for (j=0; j<i; j++) {
		print_adress(array[j]);
	}
	
    return 0;
}

adress_t scan_adress(FILE* f, adress_t v) {
	
	char c;
	
	fscanf(f, " %d%c%d%c%d%c%d %s", &v.xx, &c, &v.yy, &c, &v.zz, &c, &v.mm, v.nickname);
	
	return v;
	
};

void print_adress(adress_t b) {

	printf("%d.%d.%d.%d\t%s\n", b.xx, b.yy, b.zz, b.mm, b.nickname);
	
};

int local_adress(adress_t g, adress_t h) {

	if (g.xx == h.xx && g.yy == h.yy)
		return 1;
	else
		return 0;
	
};
