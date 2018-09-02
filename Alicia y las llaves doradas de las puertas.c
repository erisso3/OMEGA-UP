#include <stdio.h>
#include <stdlib.h>
int main(int argc, char *argv[]) {
	int a,b;
	scanf("%d",&a);
	int vec[a];
	if (vec==NULL)
	{
		exit (1);
	}
	else{
		for(int i=0;i<a;i++){
			scanf("%d",&vec[i]);
		}
		scanf("%d",&b);
		int vec2[b];
		for(int j=0;j<b;j++){
			scanf("%d",&vec2[j]);
		}
		for(int k=0;k<a;k++){
			if(vec[k]!=vec2[k]){
				printf("0");
			}
			for(int o=0;o<b;o++){
				if(vec[k]==vec2[o]){
					printf("%d",k+1);
				}
			}
		}
	}
	return 0;
}
