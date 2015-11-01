#include <iostream>
#include <cstring>
using namespace std;

class Point {
public:
	Point();
	Point(int i1, int i2, char *cp1);
	Point(const Point &input);
	~Point();
	void setPoint() const;
	void putPoint() const;
private:
	int x, y; char *color; // 1번 조건
};

Point::Point() {
}

Point::Point(int i1, int i2, char *cp1) { // 2번 조건
	x = i1;
	y = i2;
	color = new char[strlen(cp1)+1];
	strcpy_s(color, strlen(cp1) + 1, cp1);
}

Point::Point(const Point &input) { // 3번 조건
	x = input.x;
	y = input.y;
	color = new char[strlen(input.color)+1];
	strcpy_s(color, strlen(input.color) + 1, input.color);
}

Point::~Point() { // 4번 조건
	delete[] color;
}

void Point::setPoint() const{ // 5번 조건
}

void Point::putPoint() const { // 6번 조건
	cout << "x 값 : " << x << "y 값: " << y << "color 값 : " << color << endl;

}

void main() {
	Point p1(12, 13, "blue"); // 7번 조건
	Point p2(p1); // 8번 조건
	p1.putPoint;
	//p2.putPoint;
}
