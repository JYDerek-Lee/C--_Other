#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <cstring>
using namespace std;

namespace worker {
	char name[10];
	int overtime;
	void Show(char na[], int ot) {
		std::cout << "name : " << na << ", overtime : " << ot << std::endl;
	}
}

namespace student {
	char name[10];
	float score;
	void Show(char na[], float sc) {
		std::cout << "name : " << na << ", score : " << sc << std::endl;
	}
}

void main() {
	strcpy_s(worker::name, 10, "Hong");
	worker::overtime = 15;
	cout << "20111150032 이준영 예제 2_8 과제 제출\n" << endl;
	worker::Show(worker::name, worker::overtime);
}