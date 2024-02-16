/*Aim:- Create a class named Room with three data members length (int), breadth (int) and height (int). Assign values to data members in main function. Define and use member functions calculateArea() and calculateVolume() to display the area and volume of the room.

 

Program Code:-*/

#include<iostream>

using namespace std;

class Room {

private:

    int length;

    int breadth;

    int height;

 

public:

 

    // Member function to calculate and display the area of the room

    void calculateArea(int length, int breadth) {

        int area = length * breadth;

        cout << "Area of the room: " << area << " square units" <<endl;

    }

 

    // Member function to calculate and display the volume of the room

    void calculateVolume(int length, int breadth, int height) {

        int volume = length * breadth * height;

        cout << "Volume of the room: " << volume << " cubic units" <<endl;

    }

};

int main() {

    // Assign values to data members

    int roomLength = 5;

    int roomBreadth = 3;

    int roomHeight = 2;

 

    // Create an object of the Room class

    Room myRoom;

 

    // Call member functions to calculate and display area and volume

    myRoom.calculateArea(roomLength, roomBreadth);

    myRoom.calculateVolume(roomLength, roomBreadth, roomHeight);

 

    return 0;

}