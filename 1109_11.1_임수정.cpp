//
//  main.cpp
//  1109_데일리
//
//  Created by 임수정 on 2018. 11. 9..
//  Copyright © 2018년 임수정. All rights reserved.
//

#include <iostream>
using namespace std;

double getAvg(const int* list, int size){
    int sum = 0 ;
    for(int i = 0 ; i < size ; i++){
        sum += *(list+i);
    }
    
    return sum*1.0 / size ;
    
}
int main() {
    
        cout << "Enter a number of list size : ";
        int size;
        cin >> size;
    
        int *list = new int[size];
        cout << "Enter numbers of the list : ";
        for(int i = 0 ; i < size ; i++)
            cin >> list[i];
        
        //average
        double avg = getAvg(list, size);
        
        //over average
        int cnt = 0 ;
        for(int i = 0 ; i < size ; i++){
            if(*(list+i) >= avg)
                cnt++;
        }
        
        cout << "The number of numbers over the average is " << cnt << endl;

    return 0;
}
