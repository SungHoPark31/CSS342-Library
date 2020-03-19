/*
 * Assignment 1: Classes
 *
 * Created on: Oct 1, 2019
 * Author: Sung Ho park
 * File name: Library.cpp
 *
 */
#include <iostream>

#include "Library.h"

using namespace std;

Library::Library()
{
	//Set it to a default value.
	nameOfLib = "";
	numberOfBooks = 0;
}

Library::~Library()
{

}

Library::Library(string nameOfLibrary)
{
    //Set the name of the library to nameOfLibrary.
	//And set the default value to numberOfBooks.
    nameOfLib = nameOfLibrary;
    numberOfBooks = 0;
}

int Library::FindBook(const string &name) const
{
    //If there is no books, then return -1.
    if (numberOfBooks == 0)
    {
        return -1;
    }
    else
    {
        //Iterate through the array until you find the book.
        //If you do, then return the index.
        for (int i = 0; i < numberOfBooks; i++)
        {
            if (books[i] == name)
            {
                return i;
            }
        }
        return -1;
    }
}

bool Library::AddBook(const string &name)
{
    //If there are no books in the array...
    if (numberOfBooks == 0)
    {
        //... Add it to the first element and update the numberOfBooks
        books[0] = name;
        numberOfBooks++;
        return true;
    }
    //If the numberOfBooks is the same as the max, which is 100...
    if (numberOfBooks == MAX)
    {
        //...You can't add it and print out an expression.
        cout << "The Library is Full" << endl;
        //Return false to indicate that the add wasn't successful.
        return false;
    }
    else
    {
        //Iterate through the array if there is more than 1 book.
        for (int i = 0; i < numberOfBooks; i++)
        {
            //If there is a book in the array with the same name that is
            //being passed in...
            if (books[i] == name)
            {
                //...Return false for failure of the execution
                return false;
            }
        }
        //Add a book in the array.
        books[numberOfBooks] = name;
        //Increment the number of books.
        numberOfBooks++;
        return true;
    }
    return false;
}

bool Library::RemoveBook(const string &name)
{
    //Find the book that you want to remove.
    int removeIndex = FindBook(name);

    if (removeIndex == -1)
    {
    	return false;
    }

    //Replace the last index with the index you want to remove.
    books[removeIndex] = books[numberOfBooks - 1];

    //Decrease the number of books by 1
    numberOfBooks--;
    return true;
}

void Library::ListAllBooks() const
{
    //If there is no books in the library...
    if (numberOfBooks == 0)
    {
        //...Print out there there is none.
        cout << "There are no books in the Library" << endl;
    }
    else
    {
        //List the books in the library by iterating through the array.
        cout << "Here are the books in the Library: " << endl;
        for (int i = 0; i < numberOfBooks; i++)
        {
            cout << books[i] << endl;
        }
    }
}

bool Library::IsInLibrary(const string &name) const
{
    //If there are no books then return false
    if (numberOfBooks == 0)
    {
        return false;
    }
    else
    {
        //If there is, then go through the array until you find
        //the string that is equal to the string name.
        for (int i = 0; i < numberOfBooks; i++)
        {
            if (books[i] == name)
            {
                return true;
            }
        }
        return false;
    }
}

ostream &operator<<(ostream &out, const Library &lib)
{

	for (int i = 0; i < lib.numberOfBooks; i++)
	{
	    out << lib.books[i] << ", ";
	}
	return out;
}
