
Encapsulation means protecting data by keeping it private inside the class and controlling access through public methods.

Here, brand and year are private, so they cannot be modified directly from outside the class.

Instead, we use setData() and display() — this ensures the internal state of the object is only changed in a controlled way.


If you uncomment the lines:
car1.brand = "BMW";
cout << car1.brand;

you’ll get an error like:
error: 'std::string Car::brand' is private within this context


That’s encapsulation — the class hides its internal details.
