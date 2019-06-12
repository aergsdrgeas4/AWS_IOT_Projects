// ConsoleApplication2.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include <iostream>
#include <algorithm>
#include <vector>
#include <iterator>

int main()
{
	//vector of 3 filled with 10
	std::vector<int>myVec(10, 10);
	//push 12345 to the end
	for (int i = 1; i <= 5; i++)
		myVec.push_back(i);
	std::cout << "Output of begin and end: ";
	for (auto i = myVec.begin(); i != myVec.end(); ++i)
		std::cout << *i << " ";
	std::cout << "\nOutput of cbegin and cend: ";
	for (auto i = myVec.cbegin(); i != myVec.cend(); ++i)
		std::cout << *i << " ";
	//Copy vector to another
	std::vector<int> vect1{ 10, 20, 30 };
		std::vector<int> vect2(vect1.begin(), vect1.end());
	for (int x : vect2)
		std::cout << x << " ";


} 

//class
class Device {
public:

private:

};


//Derived class
class Wireless :public Device {
public:

private:
};

//Overload
float myFunc(float a, float b)
{

	return a + b;
}
float myFunc(float a, float b, float c)
{
	return a + b + c;
}
//Override


//copy constructor


//assignment operator




//function pass by value



//function pass by ref



//function pass by pointer



//function return array


//function return ref


//function return pointer



//function object parameter



//function object ref


//safe pointer


//buffer array and overlay struct for communications


//static object



//dynamic object


//Using the "this" keyword




//iterators


//pure virtual base


//derived from virtual base


//Sum array


//