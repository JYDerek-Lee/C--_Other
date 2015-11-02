#include <iostream>
#include <string>

using namespace std;

const double pi = 3.14159;

class Point {
public:
	Point(int x = 0, int y = 0) :px(x), py(y) {

	}
	void showPoint() const {
		cout << "x = " << px << ", y = " << py << endl;
	}
	~Point() {
	}

private:
	friend class Circle;
	int px;
	int py;
	int number;
	char *de, *name;
};

class Circle {
public:
	Circle(Point cen, int rad = 0) :center(cen), radius(rad) {
		color = "black";
	}
	Circle(int a, char *b, char *c) {
		center.number = a;
		center.de = new char[strlen(b)+1];
		strcpy_s(center.de, strlen(b)+1, b);
		center.name = new char[strlen(c)+1];
		strcpy_s(center.name, strlen(c) + 1, c);
	}
	~Circle() {
		delete[] center.de, center.name;
	}
	void getArea() {
		area = pi*radius*radius;
	}
	void showCircle() {
		cout << "중심점: (x = "<< center.px << ", y = " << center.py << ")";
		cout << " 반지름 : " << radius << " 색상 : " << color << endl;
	}
	void showArea(Circle &cir) {
		cout << "원의 넓이 : " << cir.area << endl;
	}
	void showJune() {
		cout << center.number <<"\t"<< center.de <<"\t"<< center.name << endl;
		cout << endl;
	}

private:
	Point center;
	int radius;
	string color;
	double area;
};

void main() {
	Point cen(5, 7);
	Circle cir1(cen, 10);
	Circle June(2011150032, "컴퓨터 공학과", "이준영");

	cir1.showCircle();
	cir1.getArea();
	cir1.showArea(cir1);
	June.showJune();
}