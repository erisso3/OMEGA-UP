#include <stdio.h>

int main(int argc, char *argv[]) {
	int a,b,c;
	do{
		scanf("%d" "%d" "%d",&a,&b,&c);	
	} while(a<1 && b<1 && c<1);
	if(a+b+c<180||a+b+c>180){
		printf("ERROR");
	}else{
		if(a==b&&b==c){
			printf("EQUILATERO");
		}else{
			if(a==b 	&& b!=c || b==c && c!=a || c==a&&a!=b){
				printf("ISOSCELES");
			}else{
				printf("ESCALENO");
			}
		}
	}
	
	return 0;
}

