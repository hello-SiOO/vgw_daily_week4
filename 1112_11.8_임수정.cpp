#include<iostream>
#include<cmath>
using namespace std;
class Circle2D{
	public:
		Circle2D(){
			x = 0;
			y = 0;
			radius = 1;
		}
		Circle2D(double x, double y, double radius){
			this->x = x;
			this->y = y;
			this->radius = radius; 
		}
		double getX() const{
			return x;
		}
		double getY() const{
			return y;
		}
		double getRadius() const{
			return radius;
		}
		double getArea() const{
			return radius*radius*3.14;
		}
		double getPerimeter() const{
			return radius*2*3.14;
		}
		bool contains(double x, double y) const{
			if((x-this->x)*(x-this->x)+(y-this->y)*(y-this->y) <= radius*radius)
				return true;
			else return false;
		}
		bool contains(const Circle2D& c) const{
			if(c.getRadius()+sqrt(((c.getX()-x)*(c.getX()-x)+(c.getY()-y)*(c.getY()-y)),2) <= radius)
				return true;
			else return false;
		}
		bool overlaps(const Circle2D& c) const{
			if(c.getradius()+sqrt(((c.getX()-x)*(c.getX()-x)+(c.getY()-y)*(c.getY()-y))*1.0,2.0) > radius && c.getradius()+sqrt(((c.getX()-x)*(c.getX()-x)+(c.getY()-y)*(c.getY()-y))*1.0,2.0) < 2*c.getRadius()+radius)
				return true;
			else return false;
		}
		
	private:
		double x,y;
		double radius;
};
int main(){
	Circle2D c1(2,2,5.5), c2(2,2,5.5), c3(4,5,10.5);
	cout << c1.getArea() << endl;
	cout << c1.getPerimeter() << endl;
	cout << c1.contains(3,3) << endl;
	cout << c1.contains(c2) << endl;
	cout << c1.overlaps(c3) << endl;
	return 0;
}
