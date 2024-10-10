# ACCESS MODIFIERS

Access modifiers control the accessibility of class members (attributes and methods) from outside the class. 
These modifiers determine whether members of a class can be accessed directly, indirectly, 
or not at all from outside the class or derived classes. 
There are three main access modifiers in C++:

#1. Public
Members declared as public can be accessed from outside the class. This means that any function or object can 
directly interact with these members.
Syntax:

class MyClass {
public:
    int x; // Public attribute
    void display() {
        cout << "x = " << x << endl;
    }
};
Example:
int main(){
MyClass obj;
obj.x = 10; // Accessible
obj.display(); // Accessible
}
Output: x = 10
Here, x and display() are public, so they can be accessed directly from outside the class through the obj object.


#2. Private
Members declared as private are not accessible from outside the class. Only the member functions of the class itself can access and modify private members.
Syntax:

class MyClass {
private:
    int x; // Private attribute
public:
    void setX(int val) {
        x = val; // Private member accessed inside class
    }
    void display() {
        cout << "x = " << x << endl;
    }
};
int main(){
MyClass obj;
// obj.x = 10; // Error: 'x' is private
obj.setX(10); // Setting the value using a public function
obj.display(); // Accessible
}
Output: x = 10

x is private and cannot be accessed directly from outside the class. 
However, public functions setX() and display() can manipulate and access x.


#3. Protected

. Protected
Members declared as protected are accessible within the class and by derived classes (subclasses).
 However, they are not accessible from outside the class, except through inheritance.

class MyClass {
protected:
    int x; // Protected attribute
public:
    void setX(int val) {
        x = val;
    }
    void display() {
        cout << "x = " << x << endl;
    }
};

class DerivedClass : public MyClass {
public:
    void changeX() {
        x = 20; // Protected member can be accessed in derived class
    }
};
int main(){
DerivedClass obj;
obj.setX(10); // Accessible through public function of base class
obj.display(); // Accessible
obj.changeX(); // Can access x within derived class
obj.display(); // Output after modification
}
Output:
x = 10
x = 20
x is protected, so it cannot be accessed directly from an object of DerivedClass or MyClass.
 However, it can be accessed inside a method of DerivedClass, demonstrating inheritance-based access.

Access Modifier	  Accessible from Outside Class	  Accessible within Class  	   Accessible by Derived Classes
Public	              Yes	                           Yes                         	Yes
Private	              No	                           Yes	                         No
Protected	          No	                           Yes	                         Yes

#Why Use Access Modifiers?

Data Hiding: Private and protected members ensure that sensitive data or implementation details are hidden from the outside world, 
promoting better encapsulation.
Controlled Access: Public functions can provide controlled access to private data, ensuring that it is used correctly.
Inheritance Control: Protected members allow derived classes to access certain data,
while still keeping it hidden from the outside world.
Example of All Access Modifiers Combined:

class MyClass {
public:
    int publicVar; // Accessible anywhere
protected:
    int protectedVar; // Accessible in derived classes
private:
    int privateVar; // Accessible only within this class

public:
    void setPrivate(int val) {
        privateVar = val;
    }
    int getPrivate() {
        return privateVar;
    }
};
Here, publicVar can be accessed from anywhere, protectedVar can be accessed only within the class and by derived classes, 
and privateVar can only be accessed within the class itself, unless access is granted through public methods like setPrivate() and getPrivate().

Conclusion:
Access modifiers in C++ provide a powerful mechanism for controlling how data and methods are accessed and modified, 
helping maintain the principles of encapsulation, security, and controlled interaction between objects and classes.