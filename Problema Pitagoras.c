#include <stdio.h>
#include <math.h>
int main(int argc, char *argv[]) {
	int a,b;
	int c=0;
	scanf("%d" "%d",&a,&b);
	for(int i=a; i <= b; i++){
		for(int j=a; j <= b; j++){
			for(int k=a; k <= b; k++){
				if(pow(i,2) + pow(j,2) == pow(k,2)){
					c++;
				}
			}
		}
	}
	printf("%d",c/2);
	return 0;
}
