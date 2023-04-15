#include <cstdio>
#include <cstdlib>
#include <conio.h>

/*
	Source by AlphaCodingSkills (https://www.alphacodingskills.com)
	Modified For Learn by RK
	I.D.E : VS2022
*/

int main() {
	char str[] = "123 10 555";
	char* pEnd;

	unsigned long long int val1 = strtoull(str, &pEnd, 10);
	unsigned long long int val2 = strtoull(pEnd, &pEnd, 10);
	unsigned long long int val3 = strtoull(pEnd, &pEnd, 10);

	//menampilkan hasil
	printf("val1 = %llu\n", val1);
	printf("val2 = %llu\n", val2);
	printf("val3 = %llu\n", val3);

	_getch();
	return 0;
}