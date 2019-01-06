#include<iostream>
using namespace std;
class MyString {
public:
	MyString() {
		char c[1];
		cString = c;
	};
	MyString(char* cString) {
		this->cString = cString;
	}
	char at(int index) const {
		return *(cString + index);
	}
	int length() const {
		int cnt=0;
		while (1) {
			if (*(cString + cnt) == NULL)
				break;
			cnt++;
		}
		return cnt;
	}
	void clear() {
		for (int i = 0; i < length(); i++)
			*(cString + i) = NULL;
	}
	bool empty() {
		if (*cString == NULL)
			return true;
		else return false;
	}
	int compare(const MyString& s) const {

	}
	int compare(int index, int n, const MyString& s) const {

	}
	void copy(char s[], int index, int n) {

	}
	char* data() const {
		
	}
	int find(char ch) const {
		for (int i = 0; i < length(); i++)
			if (*(cString + i) == ch)
				return i;
	}
	int find(char ch, int index) const {
		for (int i = 0; i < length(); i++)
			if (*(cString + i) == ch)
				return i + index;
	}
	int find(const MyString& s, int index) const {

	}
private:
	char* cString;
};
int main() {

	return 0;
}