/*
 * Assignment 1: Classes
 *
 * Created on: Oct 1, 2019
 * Author: Sung Ho park
 * File name: Library.h
 *
 */

#ifndef SRC_LIBRARY_H_
#define SRC_LIBRARY_H_

#include <iostream>
#include <string>

using namespace std;

class Library
{
    public:

		/*
		 * Constructor
		 */
        Library();

        /*
         * Destructor
         */
        ~Library();

        /*
         * Parameterized constructor that takes in a string.
         * It will set the private instance variable.
         */
        Library(string nameOfLibrary);

        /*
         * Precondition: The string that is passed in has values inside it.
         *
         * Postcondition: The name of the book will be added to the Array
         * and return true.
         */
        bool AddBook(const string &name);

        /*
         * Precondition: The string that is passed in has values inside it.
         *
         * Postcondition: The name of the book will be removed from the Array
         * and return true.
         */
        bool RemoveBook(const string &name);

        /*
         * Precondition: There are string values inside of the array.
         *
         * Postcondition: It will iterate through the array and print
         * out all the elements.
         */
        void ListAllBooks() const;

        /*
         * Precondition: There are string values inside of the array.
         *
         * Postcondition: It will iterate through the array and check if there
         * is a book in the array. Returns true if successful.
         */
        bool IsInLibrary(const string &name) const;
        friend ostream &operator<< (ostream &out, const Library &lib);

    private:
        //Private instance variables
        string nameOfLib;
        int numberOfBooks;
        static const int MAX = 100;
        int FindBook(const string &name) const;
        string books[MAX];
};


#endif /* SRC_LIBRARY_H_ */
