#include<stdio.h>

int main(int argc, char *argv[]) {
	int num;
	int residuo;
	scanf("%i",&num);
	if (num!=0) {
		residuo = num%2;
		if (residuo==0) {
			printf("Par\n");
		} else {
			printf("Impar\n");
		}
	}
}
