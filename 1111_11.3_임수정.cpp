#include<iostream>
using namespace std;

int *doubleCapacity(const int* list, int size){
	int newSize = 2*size;
	int *newList = new int[newSize];
	for(int i = 0 ; i < size ; i++){
		newList[i] = list[i];
	}
	for(int i = size ; i < newSize ; i++){
		newList[i] = 0;
	}
	
	return newList;
}
int main(){
	cout << "Enter the size of list : ";
	int size ;
	cin >> size ;
	int *list = new int[size];
	for(int i = 0 ; i < size ; i++)
		cin >> *(list+i);

	int* newList = doubleCapacity(list,size);
	
	return 0;
}
