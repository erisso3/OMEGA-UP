#include <stdlib.h>
#include <stdio.h>
int main(int argc, char *argv[]) {
	int a,b,*v,e=0;
	scanf("%d" "%d",&a,&b);
	v=(int*)malloc(b*sizeof(int));
	if(v==NULL){
		exit(1);
	}else{
		for(int i=0;i<a;i++){
			scanf("%d",&v[i]);
			if(v[i]==b){
				e++;
			}
		}
	}
	printf("%d",e);
	free(v);
	return 0;
}

