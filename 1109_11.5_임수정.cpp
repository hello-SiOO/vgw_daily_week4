//
//  main.cpp
//  1109_11.5_임수정
//
//  Created by 임수정 on 2018. 11. 9..
//  Copyright © 2018년 임수정. All rights reserved.
//

#include <iostream>
using namespace std;

int minElement(const int* list, int size){
    int min = *list;
    for(int i = 1 ;i < size ; i++)
        if(*(list+i) < min)
            min = *(list+i);
    return min;
}
int main(){

    int list[8] = {1,2,4,5,10,100,2,-22};
    //배열 출력(그냥)
    cout << "The list is : ";
    for(int i = 0 ; i < 8; i++){
        cout << *(list+i);
        if(i < 7)
            cout << ", ";
    }
    cout << endl;
    //최소 요소 출력
    cout << "The minimum element is " << minElement(list, 8) << endl;
    
    return 0;
}
