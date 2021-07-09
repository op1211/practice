#include <iostream>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	int year;
	while(scanf("%d",&year)!=EOF){
		if(year%400==0)
			printf("閏年\n");
		else if(year%4==0 && year%100!=0)
			printf("閏年\n");
		else
			printf("平年\n");
	
	
	
	
	
		
		
	}
	
	
	return 0;
}
