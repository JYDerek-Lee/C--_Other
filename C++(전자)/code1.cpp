#define _SRT_SECURE_NO_WARNINGS
#include <iostream>
#include <string>
using namespace std;

void main() {
	string ss1 = "Good-";
	string ss2 = "afternoon.";
	string ss3;

	cout << "20111150032 ���ؿ� ���� 2_4 ���� ����\n" << endl;
	cout << "ss1 : " << ss1 << endl;
	cout << "ss2 : " << ss2 << endl;
	ss3 = ss1;
	cout << "ss3 = ss1 : " << ss3 << endl;
	ss3 += ss2;
	cout << "ss3 += ss2 : " << ss3 << endl;
}