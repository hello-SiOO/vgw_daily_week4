//
//  main.cpp
//  1113_11.10_임수정
//
//  Created by 임수정 on 2018. 11. 13..
//  Copyright © 2018년 임수정. All rights reserved.
//

#include <iostream>
using namespace std;
class Rectangle2D {
public:
    Rectangle2D() {
        x = 0;
        y = 0;
        width = 1;
        height = 1;
    }
    Rectangle2D(double x, double y, double width, double height) {
        this->x = x;
        this->y = y;
        this->width = width;
        this->height = height;
    }
    double getX() const {
        return x;
    }
    double getY() const {
        return y;
    }
    double getWidth() const {
        return width;
    }
    double getHeight() const {
        return height;
    }
    void setX(double nX) {
        x = nX;
    }
    void setY(double nY) {
        y = nY;
    }
    void setWidth(double nWidth) {
        width = nWidth;
    }
    void setHeight(double nHeight) {
        height = nHeight;
    }
private:
    double x, y, width, height;
};
int max(const double points[][2], int size, int xory){
    double max = points[0][xory];
    for(int i = 0 ; i < size ; i++)
        if(points[i][xory]>max){
            max = points[i][xory];
        }
    return max;
}
int min(const double points[][2], int size, int xory){
    double min = points[0][xory];
    for(int i = 0 ; i < size ; i++)
        if(points[i][xory]<min){
            min = points[i][xory];
        }
    return min;
}
Rectangle2D getRectangle(const double points[][2], int size){
    Rectangle2D r;
    double minX = min(points,size,0);
    double maxX = max(points,size,0);
    r.setX((minX+maxX)/2.0);
    double minY = min(points,size,1);
    double maxY = max(points,size,1);
    r.setY((minY+maxY)/2.0);
    
    r.setWidth(maxX-minX);
    r.setHeight(maxY-minY);
    return r;
}
int main(){
    cout << "Enter five points: ";
    double points[5][2];
    for(int i = 0 ; i < 5 ; i++){
        cin >> points[i][0] >> points[i][1];
    }
    Rectangle2D r = getRectangle(points,5);
    
    double x = r.getX();
    cout << "The bounding rectangle's center (" << x << ", " << r.getY() << "), width " << r.getWidth() << ", height " << r.getHeight() << endl;
    
    return 0;
}
