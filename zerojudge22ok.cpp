#include <iostream>
//#include <conio.h>
#include <string.h>
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(void) {
	char str[999],a[999];
	int len;
	fflush(stdin);
	gets(str);
	//printf("%s\n",str);
	strcpy(a,str);
	/*for(int i=0;i<999;i++)
		a[i]=str[i];*/
	strrev(str);
	len=strlen (str);
	
	/*for(int i=1;i<=*str;i++){
		str[i-1]=a[*str-i];
	
	
	}
	printf("1 %s\n",a);
	printf("2 %s\n",str);
	*/
	int test;
	for(int i=0;i<len;i++)
		if(a[i]==str[i])
			test++;
	
	if(len==test)
		printf("yes");
	else
		printf("no");
	system("pause");
	
	return 0;
}
