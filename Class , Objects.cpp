# CLASS
1. A Class is a user-defined data type that has data members and member functions.
Data members are the data variables and member functions are the functions.
2. A class is a blueprint or template for creating objects. 

# OBJECTS
1. An object is an instance of a class. It holds the actual data and can use the methods defined by the class.
2. Multiple objects can be created from the same class, each with different data.

#Note: When a class is defined, no memory is allocated 
but when it is instantiated (i.e. an object is created) memory is allocated.

class Car {
public:
    // Attributes (Data Members)
    string brand;
    string model;
    int year;
    // Method (Member Function)
    void displayDetails() {
        cout << "Brand: " << brand << endl;
        cout << "Model: " << model << endl;
        cout << "Year: " << year << endl;
    }
};
int main() {
    // Create an object of the Car class
    Car myCar;
    // Assign values to the object's attributes
    myCar.brand = "Toyota";
    myCar.model = "Corolla";
    myCar.year = 2021;
    // Call the object's method
    myCar.displayDetails();
    return 0;
}




