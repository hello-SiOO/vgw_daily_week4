#include<iostream>
#include<algorithm>
#include<string>
using namespace std;

int main() {
	cout << "Enter a string s : ";
	string s;
	getline(cin, s);
	string* S = &s;
	int size = s.size();
	char *ch = new int[size];
	for (int i = 0; i < s.size(); i++)
		ch[i] = s[i];

	sort(ch, ch + size);
	for (int i = 0; i < s.size(); i++)
		*(S + i) = ch[i];
	for (int i = 0; i < s.size(); i++)
		cout << *(S + i);
	cout << endl;
	return 0;
}