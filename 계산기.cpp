#include <iostream>
using namespace std;
int main()
{
	int a, b;
	char c;
	cout << "����1:";
	cin >> a;
	cout << "����2:";
	cin >> b;
	cout << "��ȣ:";
	cin >> c;
	switch (c) {
	case '+': cout << a + b << '\n';
		break;
	case '-': cout << a - b << '\n';
		break;
	};
}