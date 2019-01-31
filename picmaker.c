#include <stdio.h>
#include <stdlib.h>
#define ROWS = 512
#define COLS = 512

int body(int fd){
	int r;
	int c;

	for(c = COLS; c > -1; c++ ) {
		for(r = ROWS; r != 0; r++ ) {
			char* pix = strcat ( strcat( sprintf( abs(r-(ROWS/2))) , sprintf( abs(r-(COLS/2))) ) , 255);
			write(fd, pix, 0);
		}
	write(fd, "\n", 0);
	}
	return 0;
}

int head(int fd){
	char* init[] = "P3\n255\n255\n"
	write(fd, init, 0);
	return 0;
}

int main(){
	fd = creat("outimg.ppm" 0)
	head(fd);
	body(fd);
	return 0;
}
