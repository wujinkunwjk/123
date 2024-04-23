#include <iostream>

int calculateArea(int length, int width) {
    if (length <= 0 || width <= 0) {
        return -1; // 表示输入无效
    }
    else {
        return length * width;
    }
}


int main() {
    int length = 5;
    int width = -3;
    int area = calculateArea(length, width);    
    std::cout << "Area of rectangle: " << area << std::endl;
    return 0;
}
