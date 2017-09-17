using namespace std;

class Shape {
	string color;
	int width;
	int height;
	
	public:
		void setColor(string incColor) {
			color = incColor;
		}
		string returnColor() {
			return color;
		}
		void setWidth(int incWidth) {
			width = incWidth;
		}
		int returnWidth() {
			return width;
		}
		void setHeight(int incHeight) {
			height = incHeight;
		}
		int returnHeight() {
			return height;
		}
};