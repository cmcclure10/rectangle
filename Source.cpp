#include<iostream>
using namespace std;

class rectangle {
public:
	void setLength(double len)
	{
		length = len;
	}
	void setWidth(double wid)
	{
		width = wid;
	}

	void setArea(double len, double wid)
	{
		area = len * wid;
	}

	double getLength()
	{
		return length;
	}
	double getWidth()
	{
		return width;
	}

	double getArea()
	{
		return area;
	}

private:
	double width;
	double length;
	double area;
};


int main()
{
	rectangle box;
	
	double bLength;
	double bWidth;

	cout << "Enter the length of the box: ";
	cin >> bLength;
	box.setLength(bLength);

	cout << "Enter the Width of the box: ";
	cin >> bWidth;
	box.setWidth(bWidth);

	box.setArea(bLength, bWidth);

	system("cls");

	cout << "A box with a length of " << box.getLength() << " and width of " << box.getWidth() << " has an area of " << box.getArea() << ". \n \n";
	
	return 0;
}