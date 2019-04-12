#include <stdio.h>

//void sub1();
void sub2();
//void sub3();
//void sub4();


int main() {
	//sub1();
	sub2();
	//sub3();
	//sub4();

	return 0;
}

void sub2() {
	for(int i = 0; i < 10; i++) {
		for(int j = 0;  j < i; j++) {
			printf("*");
		}
	printf("\n");
	}
}

