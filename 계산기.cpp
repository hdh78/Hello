#include <iostream>
using namespace std;
int main()
{
	int a, b;
	char c;
	cout << "숫자1:";
	cin >> a;
	cout << "숫자2:";
	cin >> b;
	cout << "기호:";
	cin >> c;
	switch (c) {
	case '+': cout << a + b << '\n';
		break;
	case '-': cout << a - b << '\n';
		break;
	};
}