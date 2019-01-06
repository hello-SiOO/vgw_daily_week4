//
//  main.cpp
//  1110_11.2_임수정
//
//  Created by 임수정 on 2018. 11. 10..
//  Copyright © 2018년 임수정. All rights reserved.
//

#include <iostream>
using namespace std;
int main(){
    
    cout << "Enter the size of list : ";
    int size;
    cin >> size;
    
    int* list = new int[size];
    for(int i = 0 ; i < size ; i++)
        list[i] = 0;
    cout << "Enter " << size << " numbers of the list : ";
    int i = 0;
    while(i<size){
        int n;
        cin >> n;
        bool isIn = false;
        for(int j = 0 ; j < size ; j++)
            if(n==list[j]){
                isIn = true;
                break;
            }
        if(!isIn){
            list[i] = n;
            i++;
        }
    }
    cout << "numbers of the list is " ;
    for(int i = 0 ; i < size ; i++)
        cout << list[i] << " ";
    cout << endl;
    return 0;
}
