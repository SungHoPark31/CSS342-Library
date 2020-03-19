/*
 * Assignment 1: Classes
 *
 * Created on: Oct 1, 2019
 * Author: Sung Ho park
 * File name: ass1.cpp
 *
 */

#include <iostream>
#include <cassert>

#include "Library.h"

using namespace std;

void Test1()
{
	Library libs("UWB");
	libs.AddBook("Don Quixote");
	libs.AddBook("In Search of Lost Time");
	libs.AddBook("Ulysses");
	libs.AddBook("The Odyssey");
	libs.ListAllBooks();


	// should generate already in library message and return true
	bool result = libs.IsInLibrary("The Odyssey");
	assert(result);

	// cannot add book twice, result should be false
	result = libs.AddBook("The Odyssey");
	assert(!result);

	// test remove, result should be true
	result = libs.RemoveBook("The Odyssey");
	assert(result);

	// not in library, result should be false
	result = libs.IsInLibrary("The Odyssey");
	assert(!result);

	// cannot remove twice, result should be false
	result = libs.RemoveBook("The Odyssey");
	assert(!result);

	cout << "\n";

}

void Test2()
{
	Library other("SomeLibrary");

	//Fill up the entire array
	for(int i = 0; i < 101; i++)
	{
		other.AddBook(to_string(i));
	}
	//This should print out that there the library is full
}

void Test3()
{
	Library n("SomeOtherLibrary");
	bool something = n.RemoveBook("a");

	//This should be false because you cannot remove an empty array
	assert(!something);

}

void TestAll()
{
	Test1();
	Test2();
	Test3();
	cout << "Successfully completed all tests." << endl;
}

int main()
{
	TestAll();
	return 0;
}


