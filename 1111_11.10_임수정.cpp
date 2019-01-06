#include<iostream>
#include<string>
using namespace std;
int* count(const string& s){
	int* list = new int[26];
	for(int i = 0 ; i < 26 ; i++)
		list[i] = 0;
	for(int i = 0 ; i < s.size() ; i++ ){
		if(s[i] >= 65 && s[i] <= 90 )
			list[s[i]-65]++;
		else if(s[i] >= 97 && s[i] <= 122)
			list[s[i]-97]++;
	}	
	return list;
}
int main(){
	string s;
	cout << "Enter a string : " ;
	getline(cin,s);
	int *counts = count(s);
	for(int i = 0 ; i < 26 ; i ++)
		if(counts[i] > 0)
			cout << static_cast<char>(i+65) << " : " << counts[i] << " times" << endl;
	return 0;
}
