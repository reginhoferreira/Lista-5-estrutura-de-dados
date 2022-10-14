#include <iostream>
#include <string.h>
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
using namespace std;

void reverse(char *str)
{
	if(*str){
		reverse(str+1);
		cout<<*str;
	}
}


int main() {
	setlocale(LC_ALL,"Portuguese");
	
	char a[]= "Invertendo strings";
	reverse(a);
	return 0;
}
