#include<stdio.h>
#include<unistd.h>

void forkexample(){

	if(fork()==0){
	printf("1\n");
	}
	
	else
		printf("2\n");
}

int main(){
	forkexample();
	return 0;
}
