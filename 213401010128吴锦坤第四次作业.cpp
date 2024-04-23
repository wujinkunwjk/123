#include <iostream>
#include <vector>
#include <queue>

class Elevator {
public:
    int currentFloor;
    std::queue<int> stops;
    std::string direction;
    Elevator() : currentFloor(1), direction("up") {}

    void requestFloor(int floor) {
        stops.push(floor);
    }

    void move() {
        if (stops.empty()) {
            return;
        }

        int nextFloor = stops.front();
        if (nextFloor == currentFloor) {
            stops.pop();
            std::cout << "Elevator opens doors at floor " << currentFloor << std::endl;
        }
        else {
            if (nextFloor > currentFloor) {
                std::cout << "Elevator moving up to floor " << nextFloor << std::endl;
                currentFloor++;
            }
            else {
                std::cout << "Elevator moving down to floor " << nextFloor << std::endl;
                currentFloor--;
            }
        }
    }
};

int main() {
    Elevator elevator;

    // ʾ�������û���5¥����������10¥
    elevator.requestFloor(5);
    elevator.requestFloor(10);

    // ģ���������
    while (!elevator.stops.empty()) {
        elevator.move();
    }

    return 0;
}