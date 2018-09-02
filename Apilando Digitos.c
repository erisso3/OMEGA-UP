#include <stdio.h>

int main(int argc, char *argv[]) {
	int n;
	scanf("%i",&n);
	for(int a=1;a<=n;a++){
		for(int b=1;b<=a;b++){
			printf ("%i",a);
		}
		printf("\n");
	}  
	for(int a=n-1;a>=1;a--){
		for(int b=1;b<=a;b++){
			printf ("%i",a);
		}
		printf("\n");
	}  
	return 0;
}

