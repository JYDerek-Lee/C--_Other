#include <iostream>
#include <cstring>
using namespace std;

class Point {
private:
	int x, y; char *color; // 1번 조건
	int number; char *de; char *name;

public:
	Point() {
	}

	Point(int i1, int i2, char *cp1) { // 2번 조건
		x = i1;
		y = i2;
		color = new char[strlen(cp1) + 1];
		strcpy_s(color, strlen(cp1) + 1, cp1);
	}

	Point(const Point &input) { // 3번 조건
		x = input.x;
		y = input.y;
		color = new char[strlen(input.color)+1];
		strcpy_s(color, strlen(input.color) + 1, input.color);
	}

	Point(int i1, char *cp1, char *cp2) {
		number = i1;
		de = new char[strlen(cp1)];
		strcpy_s(de, strlen(cp1) + 1, cp1);
		name = new char[strlen(cp2)];
		strcpy_s(name, strlen(cp2) + 1, cp2);
	}

	~Point() { // 4번 조건
		delete[] color, de, name;
	}

	void setPoint(int i1, int i2, char *cp1) { // 5번 조건
		x = i1;
		y = i2;
		strcpy_s(color, strlen(cp1) + 1, cp1);
	}

	void putPoint() { // 6번 조건
		cout << "x 값 : " << x << "\t ";
		cout << "y 값: " << y << "\t";
		cout << "color 값 : " << color << endl;
	}

	void who() {
		cout << number << "\t";
		cout << de << "\t";
		cout <<name<<endl;
	}
};

void main() {
	Point p1(12, 13, "blue"); // 7번 조건
	Point p2(p1); // 8번 조건
	Point p3(2011150032, "컴퓨터공학과", "이준영");

	p1.putPoint(); // 9번 조건
	p2.putPoint(); 

	cout << endl;

	p1.setPoint(3, 4, "red"); // 10번 조건
	p1.putPoint(); // 11번 조건
	p2.putPoint(); 

	cout << endl;

	p3.who();
}
