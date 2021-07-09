#include <iostream>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	int t;
	scanf("%d",&t);
	int num[t][5];
	for(int i=0;i<t;i++)
	for(int j=0;j<4;j++)
		scanf("%d",&num[i][j]);
	for(int c=0;c<t;c++){
		if(num[c][1]-num[c][0]==num[c][2]-num[c][1])
			num[c][4]=num[c][3]+num[c][3]-num[c][2];
		else if(num[c][1]/num[c][0]==num[c][2]/num[c][1])
			num[c][4]=num[c][3]*num[c][3]/num[c][2];
	}
		for(int d=0;d<t;d++){
			for(int b=0;b<5;b++)
				printf("%d ",num[d][b]);
			printf("\n");
	}
			
		
	return 0;
}
