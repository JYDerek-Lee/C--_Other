#include <iostream>
#define OUT(x,y) cout<<"====== Ch"<<x<<"_"<<y<<" Ǯ�� ======"<<endl
#define END cout<<endl;
using namespace std;

void display() {
	cout << "�̰��� �������� Ǯ�� �Դϴ�." << endl;
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
		cout << holiday << " : ������ ���� �Դϴ�." << endl;
	else
		cout << holiday << " : ������ ������ �ƴմϴ�." << endl;
	END;
}

void main() {
	display();
	Ch2_3();
	Ch2_4();
}