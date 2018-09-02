#include <stdio.h>

int main(int argc, char *argv[]) {
	int c;
	scanf("%d",&c);
	int v[c];
	for(int i=0;i<c;i++){
		scanf("%d",&v[i]);
	}
	for(int i=0;i<=c-1;i++)
	{
		if(v[i]%3==0&&v[i]%5==0){
			printf("FizzBozz\n");
		}else{
			if(v[i]%5==0){
				printf("Bozz\n");
			}else{
				if(v[i]%3==0){
					printf("Fizz\n");
				}else{
					if(v[i]%3!=0&&v[i]%5!=0){
						printf("NoFizzBozz\n");
					}
				}
			}
		}
	}
	
	return 0;
}

