#include <stdio.h>
#include <string.h>
int main(int argc, char *argv[]) {
	char t[10000];
	int I,F;
	int	a=0;
	for(int i=0;i<10000;i++){
		t[i]='.';
	}
	scanf("%d %d",&I,&F);	
	fflush(stdin);
	scanf("%[^\n]",&t[0]);
	for(int j=0;j<10000;j++){
		if(t[j]!='.'){
			a++;
		}
	}
	a=a-1;
	for(int k=0;k<a;k++){
		if(k==I){
			for(k=F;k>=I;k--){
				printf("%c",t[k]);
			}
			k=F+1;
		}
		printf("%c",t[k]);
	}
	return 0;
}

