#include <iostream>
#include "postfix_form.h"

int main() {
	setlocale(LC_ALL, "Ru");
	char* st = "B*(A-C)";
	cout << "������� �����: " << st << endl;
	int n = strlen(st);
	string a;
	a = getPost(st);
	cout << "����������� �����: " << a << endl;
	cout << "\n" << endl;
	map<char, int> s;
	vector<char> v = getOper(a);
	for (int i = 0; i < v.size(); i++) {
		int d;
		cout << "������� �������� ��� �������� " << v[i] << ":" << endl;
		cin >> d;
		s[v[i]] = d;
	}
	cout << "�����: " << Calc(a, s) << endl;



}