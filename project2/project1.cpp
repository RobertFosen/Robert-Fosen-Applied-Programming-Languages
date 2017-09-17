#include <iostream>
#include "project2.hxx"

using namespace std;

int main() {
	
		Shape square;
		Shape circle;
		
		square.setColor("Blue");
		square.setWidth(14);
		square.setHeight(12);
		
		circle.setColor("Orange");
		circle.setWidth(10);
		circle.setHeight(9);
		
		cout << "The color of the square is: " << square.returnColor() << "\n";
		cout << "The width of the square is: " << square.returnWidth() << "\n";
		cout << "The height of the square is: " << square.returnHeight() << "\n";
		cout << "The color of the circle is: " << circle.returnColor() << "\n";
		cout << "The width of the circle is: " << circle.returnWidth() << "\n";
		cout << "The height of the circle is: " << circle.returnHeight() << "\n";
		
		
};