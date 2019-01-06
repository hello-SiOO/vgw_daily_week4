//
//  main.cpp
//  1109_11.6_임수정
//
//  Created by 임수정 on 2018. 11. 9..
//  Copyright © 2018년 임수정. All rights reserved.
//

#include <iostream>
#include <string>
using namespace std;

void count(const string& s, int counts[], int size){
    for(int i = 0 ; i < s.size();i++){
        if(s[i] <= 57 && s[i] >= 48)
            counts[s[i]-48]++;
    }
}
int main(){
    
    //int *counts = count("12203AB3");
    int counts[10] = {0};
    count("SSN is 343 32 4545 and ID is 434 34 4323", counts, 10);
    cout << "   In this array" << endl;
    for(int i = 0 ; i < 10 ; i++)
        cout << i << " : " << *(counts+i) << endl;
    
    return 0;
}
