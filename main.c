// Tomas Gomez Berruezo
#include <stdio.h>
#include <ctype.h>

int main (void) {

	int caracter;

	caracter = getchar();

	while (caracter != EOF) {
		if(islower(caracter)) {
			putchar(toupper(caracter));
		}
		else if (isupper(caracter)) {
			putchar(tolower(caracter));
		}
		else if (!isdigit(caracter)){
			putchar(caracter);
		}
		caracter = getchar();
	}

}
