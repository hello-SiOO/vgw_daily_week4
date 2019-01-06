//
//  main.cpp
//  1109_11.4_임수정
//
//  Created by 임수정 on 2018. 11. 9..
//  Copyright © 2018년 임수정. All rights reserved.
//

#include <iostream>
using namespace std;

int average(const int* array, int size){
    int sum  = 0 ;
    for(int i = 0 ; i < size ; i++)
        sum += *(array+i);
    return sum / size;
}
double average(const double* array, int size){
    double sum  = 0 ;
    for(int i = 0 ; i < size ; i++)
        sum += *(array+i);
    return sum / size;
}
int main(){
    double list[10];
    cout << "Enter numbers of the list : ";
    for(int i = 0 ; i < 10 ; i++)
        cin >> list[i];
    
    //average
    double doubleAvg = average(list, 10);
    int intAvg = average(list, 10);
    
    cout << "The integer average of this list is " << intAvg << endl;
    cout << "The double average of this list is " << doubleAvg << endl;
    
    return 0;
}
