#include <stdio.h>

int main(){
	const int a=10;
	int *p = &a;

	*p = 20;

	printf("a=%d\n",a);
	//cout << a << endl;

	return 0;
}
