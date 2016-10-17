#include <iostream>

using namespace std;

// Base class for shape
class Shape{
public:
	void setSides(int s){
		sides = s;
	}
	string getname(){
		return name;
	}
protected:
	int sides;
	string name;
};

class Object {
public:
	string obj = "Object";
};

//Shape Classes
class Rect : public Shape{
public:
	int length, width;

	int getSides(){return (sides);}
	int getarea(){return length * width;}
};

class Triangle : public Shape{
public:
	int base, hieght;

	int getSides() { return (sides); }
	int getarea() { return (base * hieght) /2; }
};

class Circle : public Shape {
public:
	double radius;

	int getSides() { return (sides); }
	double getarea() { return (radius * radius * 3.14); }
};

//Base oShape
class OShape : public Object, Shape {
public:
	OShape() {};
};

class ORect : public OShape, Rect {
public:
	ORect() {};
};

class OTri : public OShape, Triangle {
public:
	OTri() {};
};

class OCircle : public OShape, Circle {
public:
	OCircle() {};
};