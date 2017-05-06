#include <iostream>
#include <Windows.h>

#include "Time.h"

using namespace std;

int main(){
	Time t1;
	Time t2(1,2,3);


	t1.set(23,59,50);
	t2.set(17,10,51);

	while(1){
		t1.increment();
		t1.display();
		Sleep(1*1000);

	}
	

	t1.display();
	t2.display();

	system("pause");
	return 0;
}