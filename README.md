# CSS342-Library
Create a new class called Library that uses a private 
string array to store the list of books 

Tips & Hints
You can set the maximum number of books in the library 
to be 100 and use that to set the size of your array. 
Use a private variable in the library class rather rather
than hard coding the number 100 into your code, such as 

Since the library does not always have 100 books, you 
should have a private variable, such as ​numberOfBooks​, 
to keep track of how many books are in the library 
(i.e. how much of the array is used)

Removing an element from an array requires you know the 
index of that element, so your Library class might need
a private function such as 
​int findBook(const std::string& name) const;​ This would
return the valid index if book is in library or -1 if book 
is not in library. Once you have the index of the book you
want to remove, you can copy the last book in the array 
to overwrite the book being removed and then decrease the
variable. For example, your library might have 4 books 
[ "A", "B", "C", "D" ] with as 4. If we are removing “B”,
we find its index which is 1. We then copy the last book at
to that index, making the library [ "A", "D", "C", "D" ]. 
We decrease the   variable, so the library is now [ "A", "D",
"C" ]. The array still has “D” at index 3, but that part of 
the array is not being used.
