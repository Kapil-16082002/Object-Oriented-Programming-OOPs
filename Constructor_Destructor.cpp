#1. Constructor
A constructor is a special member function that is automatically called when an object of a class is created. 
 Its main purpose is to initialize the object's attributes.


Properties of Constructors:
Same Name as the Class:       The constructor has the same name as the class.
No Return Type:           Constructors do not have a return type, not even void.
Automatic Call:           It is invoked automatically when an object is created.
Can Be Overloaded:        Multiple constructors can be defined with different parameters (constructor overloading).

Types: There are three types of constructors: 
1.default constructor: Takes no parameters and is used to initialize an object with default values.
2.parameterized constructor: Accepts parameters and is used to initialize an object with specific values.
3.copy constructor:  Used to create a copy of an object by copying its data members. It takes a reference to an object of the same class.
                    Car(const Car &obj) is the copy constructor in the example.

#include <iostream>
using namespace std;
class Car {
public:
    string brand;
    string model;
    int year;
    // Default constructor
    Car() {
        brand = "Unknown";
        model = "Unknown";
        year = 0;
        cout << "Default constructor called." << endl;
    }
    // Parameterized constructor
    Car(string b, string m, int y) {
        brand = b;
        model = m;
        year = y;
        cout << "Parameterized constructor called." << endl;
    }
    // Copy constructor
    Car(const Car &obj) {
        brand = obj.brand;
        model = obj.model;
        year = obj.year;
        cout << "Copy constructor called." << endl;
    }
    void display() {
        cout << "Car Brand: " << brand << ", Model: " << model << ", Year: " << year << endl;
    }
};

int main() {
    Car car1; // Default constructor called
    car1.display();

    Car car2("Toyota", "Corolla", 2021); // Parameterized constructor called
    car2.display();

    Car car3 = car2; // Copy constructor called
    car3.display();

    return 0;
}
Output:

Default constructor called.
Car Brand: Unknown, Model: Unknown, Year: 0

Parameterized constructor called.
Car Brand: Toyota, Model: Corolla, Year: 2021

Copy constructor called.
Car Brand: Toyota, Model: Corolla, Year: 2021
//////////////////////////////////////////////////////////////////////////////////////////////////////////////////
#2. Destructor
A destructor is a special member function that is automatically called when an object goes out of scope or is explicitly destroyed.
 Its main purpose is to perform clean-up tasks, such as releasing resources (memory, files, etc.).

Properties of Destructors:
Same Name as the Class:            The destructor has the same name as the class, but with a tilde ~ prefix.
No Return Type and No Parameters:        Destructors don’t return anything and can’t have parameters.
Only One Destructor:             A class can have only one destructor; it cannot be overloaded.
Automatic Call:                The destructor is called automatically when an object goes out of scope or is deleted.
Example of a Destructor:

#include <iostream>
using namespace std;
class Car {
public:
    string brand;
    // Constructor
    Car(string b) {
        brand = b;
        cout << "Constructor called for " << brand << endl;
    }
    // Destructor
    ~Car() {
        cout << "Destructor called for " << brand << endl;
    }
    void display() {
        cout << "Car Brand: " << brand << endl;
    }
};
int main() {
    Car car1("Toyota"); // Constructor called
    car1.display();
    {
        Car car2("Honda"); // Constructor called for car2
        car2.display();    // Destructor will be called when car2 goes out of scope
    } // Destructor for car2 is automatically called here

    return 0;
}
Output:
Constructor called for Toyota
Car Brand: Toyota
Constructor called for Honda
Car Brand: Honda
Destructor called for Honda
Destructor called for Toyota

Key Points:
The destructor ~Car() is automatically called when car2 goes out of scope (end of the inner block).
The destructor for car1 is called at the end of the program, when the main() function ends, and car1 goes out of scope.

#Destructor Use Cases:
Memory management: Release dynamically allocated memory (using new and delete).
Closing files: Ensure files are closed properly.
Releasing system resources: For example, releasing locks, network connections, or freeing up handles.