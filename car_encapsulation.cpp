// this code tested only using Cxxdroid app on android. So, error may generate running on another compiler (as i am a beginner)

#include <iostream>
using namespace std;

// Car class
class Car {
private:
    string brand; // private member
    int year;  // private member 

public:
    // Method to set data
    void setData(string b, int y) {
        brand = b;
        year = y;
    }

    // Method to display data
    void display() {
        cout << "Car Brand: " << brand << endl;
        cout << "Manufacturing Year: " << year << endl;
    }
};

int main() {
    Car car1;

    car1.setData("Toyota", 2022);

    // Displaying data
    car1.display();

    /* 
     Trying to access private data directly:
     car1.brand = "BMW";  --> ERROR: 'brand' is private within this context
     cout << car1.brand;  --> ERROR: cannot access private member
    */
    cout << "\nIf you try to access 'brand' directly from main(), the compiler gives an error." << endl;
    cout << "That’s encapsulation in action private data is hidden from direct access!" << endl;

    return 0;
}
