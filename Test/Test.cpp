#include <iostream>
#define OUT(x,y) cout<<"====== Ch"<<x<<"_"<<y<<" 풀이 ======"<<endl
#define END cout<<endl;
using namespace std;

void display() {
	cout << "이것은 연습문제 풀이 입니다." << endl;
}

void Ch2_3() {
	enum MyEnum {
		SUN, MON = 3, TUE, WED, THU, FRI, SAT
	};

	MyEnum today = SUN;
	OUT(2, 3);
	cout << today << endl;
	today = THU;
	cout << today << endl;
	END;
}

void Ch2_4() {
	bool holiday = true;
	
	OUT(2, 4);
	if (holiday)
		cout << holiday << " : 오늘은 휴일 입니다." << endl;
	else
		cout << holiday << " : 오늘은 휴일이 아닙니다." << endl;
	END;
}

void main() {
	display();
	Ch2_3();
	Ch2_4();
}