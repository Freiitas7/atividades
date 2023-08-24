#include <stdio.h>
#include <locale.h>
int main(){
	setlocale(LC_ALL, "");
	int contador;
	for(contador=10; contador <= 200; contador++){
		printf("%d/n",contador);
	}
	return 0;
}

