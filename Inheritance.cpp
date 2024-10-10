 #Inheritance is a key feature of Object-Oriented Programming (OOP) that allows one class (called the derived class) 
 to inherit properties and behaviors (attributes and methods) from another class (called the base class). 
 This helps in code reusability, hierarchical classification, and extending functionalities.

Types of Inheritance in C++
1.Single Inheritance
2.Multiple Inheritance
3.Multilevel Inheritance
4.Hierarchical Inheritance
5.Hybrid Inheritance

#1. Single Inheritance
In single inheritance, a derived class inherits from only one base class.
#include <iostream>
using namespace std;
// Base class
class Animal {
public:
    void eat() {
        cout << "Eating..." << endl;
    }
};
// Derived class
class Dog : public Animal {
public:
    void bark() {
        cout << "Barking..." << endl;
    }
};
int main() {
    Dog d;
    d.eat();  // Inherited from Animal
    d.bark(); // Defined in Dog
    return 0;
}
Output:
Eating...
Barking...
Explanation:
The Dog class inherits the eat() function from the Animal class.
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////
2. Multiple Inheritance
In multiple inheritance, a derived class inherits from more than one base class.

Example:
#include <iostream>
using namespace std;
// Base class 1
class Father {
public:
    void height() {
        cout << "Tall" << endl;
    }
};
// Base class 2
class Mother {
public:
    void skinColor() {
        cout << "Fair" << endl;
    }
};
// Derived class
class Child : public Father, public Mother {
public:
    void showTraits() {
        height();    // Inherited from Father
        skinColor(); // Inherited from Mother
    }
};
int main() {
    Child c;
    c.showTraits(); // Calls functions from both base classes
    return 0;
}
Output:
Tall
Fair
Explanation:
The Child class inherits height() from Father and skinColor() from Mother.
/////////////////////////////////////////////////////////////////////////////////////////////////////////
3. Multilevel Inheritance
In multilevel inheritance, a derived class inherits from a base class, and then another class inherits from the derived class. It forms a chain of inheritance.

Example:

#include <iostream>
using namespace std;
// Base class
class Animal {
public:
    void eat() {
        cout << "Eating..." << endl;
    }
};
// Derived class from Animal
class Dog : public Animal {
public:
    void bark() {
        cout << "Barking..." << endl;
    }
};
// Derived class from Dog
class Puppy : public Dog {
public:
    void weep() {
        cout << "Weeping..." << endl;
    }
};
int main() {
    Puppy p;
    p.eat();  // Inherited from Animal
    p.bark(); // Inherited from Dog
    p.weep(); // Defined in Puppy
    return 0;
}
Output:
Eating...
Barking...
Weeping...
Explanation:
The Puppy class inherits eat() from Animal and bark() from Dog.
/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
4. Hierarchical Inheritance
In hierarchical inheritance, multiple derived classes inherit from the same base class.

Example:
#include <iostream>
using namespace std;

// Base class
class Animal {
public:
    void eat() {
        cout << "Eating..." << endl;
    }
};

// Derived class 1
class Dog : public Animal {
public:
    void bark() {
        cout << "Barking..." << endl;
    }
};

// Derived class 2
class Cat : public Animal {
public:
    void meow() {
        cout << "Meowing..." << endl;
    }
};

int main() {
    Dog d;
    Cat c;

    d.eat();  // Inherited from Animal
    d.bark(); // Defined in Dog

    c.eat();  // Inherited from Animal
    c.meow(); // Defined in Cat

    return 0;
}
Output:
Eating...
Barking...
Eating...
Meowing...
Explanation:
Both Dog and Cat inherit the eat() function from Animal.
//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
5. Hybrid Inheritance
Hybrid inheritance is a combination of more than one type of inheritance. 
It typically involves multiple and multilevel inheritance together.

Example:

#include <iostream>
using namespace std;
// Base class 1
class Vehicle {
public:
    void fuel() {
        cout << "Uses fuel" << endl;
    }
};
// Base class 2
class Engine {
public:
    void engineType() {
        cout << "Engine type: V8" << endl;
    }
};
// Derived class from Vehicle
class Car : public Vehicle {
public:
    void carType() {
        cout << "This is a car" << endl;
    }
};
// Derived class from Car and Engine
class SportsCar : public Car, public Engine {
public:
    void features() {
        fuel();        // Inherited from Vehicle
        carType();     // Inherited from Car
        engineType();  // Inherited from Engine
    }
};
int main() {
    SportsCar sc;
    sc.features(); // Calls functions from both the base classes and derived class

    return 0;
}
Output:

Uses fuel
This is a car
Engine type: V8
Explanation:
The SportsCar class inherits properties from both Vehicle (multilevel inheritance) and Engine (multiple inheritance).
Summary of Inheritance Types:
    Type	                        Description	                                          Example
Single Inheritance:	        One class inherits from another.	                  Dog inherits from Animal
Multiple Inheritance:	 A class inherits from more than one base class.	      Child inherits from Father and Mother
Multilevel Inheritance:	A derived class inherits from another derived class.	  Puppy inherits from Dog, which inherits from Animal
Hierarchical Inheritance:	Multiple classes inherit from the same base class.	   Dog and Cat inherit from Animal
Hybrid Inheritance:	  A combination of more than one type of inheritance.   	SportsCar inherits from Car (multilevel) and Engine (multiple)

Key Points of Inheritance:
Code Reusability: Inheritance allows reusing existing code and extending it without modification.

Modularity: Inherited classes can be modified independently of the base class.

Polymorphism: Through inheritance, you can achieve polymorphism,
 which allows methods to be overridden or overloaded in derived classes.