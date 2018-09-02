#include <stdio.h>
#include <string.h>
int main(int argc, char *argv[]) {
	int tm;
	int	c=0,c1=0,c3=0,c4=0;
	char v[1000000];
	scanf("%[^\n]",&v[c]);
	tm= strlen(v);
	for(int i=0;i<tm;i++){
		if(v[i]>=97){
			c3+=v[i]-32;
		}else{
			c4+=v[i];
		}
	}
	for(int j=1;j<(c3+c4);j++){
		if((c3+c4)%j==0){
			c1+=1;
		}
	}
	printf("%d",c1+1);
	return 0;
}
