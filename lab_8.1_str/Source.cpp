#include <iostream>
#include <iomanip>
#include <string>

using namespace std;

void print_line(string s) {
	cout << "line: ";
	for (int i = 0; s[i] != '\0'; i++) {
		cout << s[i];
	}
	cout << endl;
}

int count(string s) {
	size_t size = s.size();
	int pos;
	int p = s.rfind('.', size);

	for (int i = 0; i < 4; i++) {
		pos = s.rfind('.', p);
		p = pos-1;
	}

	return pos;
}

string modify(string s) {
	//int size = s.size();
	//for (int i = 0; s[i] != '\0'; i++) {
	//	if (s[i] == '.') {

	//	}
	//}
	while (s.find(".") != -1)
		s = s.replace(s.find("."), 1, "**");
	return s;
}



void main() {

	string s;
	int pos;

	cout << "Enter line: "; getline(cin, s);
	print_line(s);

	pos = count(s);
	cout << pos << endl;



	string s_m = modify(s);
	print_line(s_m);

}