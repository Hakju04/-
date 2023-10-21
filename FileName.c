#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <time.h>

#define	DATA_FILE	"jjuggumi.dat"

int randint(int low, int high) {
	int rnum = rand() % (high - low + 1) + low;
	return rnum;
}

void intro(void);
void intro(void) {
	printf("けけけけけけけけけけけけけけけけけけけけけけけけけけけけけけけけけけけけけけけけけけけ\n"); Sleep(10);
	printf("け                                                                                  け\n"); Sleep(10);
	printf("け   ##########    ###############        ###          ##########    #############  け\n"); Sleep(10);
	printf("け  ###                  ##             ## ##         ##       ###         ##       け\n"); Sleep(10);
	printf("け  ##                   ##            ###  ##        ##        ##         ##       け\n"); Sleep(10);
	printf("け   ###                 ##            ##   ##        ##        ##         ##       け\n"); Sleep(10);
	printf("け    ######             ##           ##     ##       ##      ###          ##       け\n"); Sleep(10);
	printf("け          ####         ##          ###      ##      #########            ##       け\n"); Sleep(10);
	printf("け            ###        ##         ############      ##      ###          ##       け\n"); Sleep(10);
	printf("け             ##        ##         ##         ##     ##       ###         ##       け\n"); Sleep(10);
	printf("け  ##        ##         ##        ###          ##    ##        ##         ##       け\n"); Sleep(10);
	printf("け   #########           ##       ###           ##    ##        ###        ##       け\n"); Sleep(10);\
	printf("け                                                                                  け\n"); Sleep(10);
	printf("けけけけけけけけけけけけけけけけけけけけけけけけけけけけけけけけけけけけけけけけけけけ\n"); Sleep(10);
	Sleep(1000);
}

int main(void) {
	//jjuggumi_init();
	intro();
	//sample();
	//mugunghwa();
	//nightgame();
	//juldarigi();
	//jebi();
	//ending();
	return 0;
}