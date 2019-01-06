#include<iostream>
#include<cmath>
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
	double getArea() const {
		return width * height;
	}
	double getPerimeter() const {
		return 2 * (width + height);
	}
	bool contains(double nX, double nY) const {
		if (nX > x && nX < width+x && nY > y && nY < y+height)
			return true;
		else return false;
	}
	bool contains(const Rectangle2D& r) const {
		if (r.getX() > x && r.getX()+r.getWidth() < x+width && r.getY() > y && r.getY() + r.getHeight() < y + height)
			return true;
		else return false;
	}
	bool overlaps(const Rectangle2D& r) const {
			return true;
	}

private:
	double x, y, width, height;
};
int main() {
	Rectangle2D r1(2, 2, 5.5, 4.9), r2(4, 5, 10.5, 3.2), r3(3, 5, 2.3, 5.4);
	cout << r1.getArea() << endl;
	cout << r1.getPerimeter() << endl;
	cout << r1.contains(3, 3) << endl;
	cout << r1.contains(r2) << endl;
	cout << r1.overlaps(r3) << endl;
	system("pause");
	return 0;
}