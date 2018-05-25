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
	try{
		if ((b == 0) && (c == '/'))
			throw b;
		switch (c) {
		case '+': cout << a + b << '\n';
			break;
		case '-': cout << a - b << '\n';
			break;
		case '*': cout << a * b << '\n';
			break;
		case '/': cout << a / b << '\n';
			break;
		case '%': cout << a % b << '\n';
		}
	}
	catch (...)
	{
		cout << b <<"으로 나눌 수 없습니다." << '\n';
	}
}