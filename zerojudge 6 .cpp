#include <iostream>
#include <math.h>
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	int num[3], ans[2], root, result;
	
	
	for(int i=0;i<3;i++)
		scanf("%d",&num[i]);
	
	root=num[1]*num[1]-4*num[0]*num[2];
	result=sqrt(root);
	ans[0]=(-num[1]+result)/2*num[0];
	ans[1]=(-num[1]-result)/2*num[0];
	
	if (num[0]==0 && num[1]==0 && num[2]==0)
		printf("No real root");
	else if(ans[0]!=ans[1])
		printf("Two different roots x1=%d , x2=%d",ans[0],ans[1]);
	else if(result==0)
		printf("Two same roots x=%d",ans[0]);
	else if(root<0)
		printf("No real root");
	

	
	
	return 0;
}
