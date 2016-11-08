////// Directory.cpp -- implementation of Directory.h

#include <iostream>
#include <vector>
#include "Directory.h"
#include "Entry.h"
using namespace std;

	// public data field
	// string name;

	// private data field
	// vector<Entry>entries

	// adds a new name, and telephone number into the directory
void Directory::enter_entry(string EntryFname, string EntryLname , string Entry pNumber) {}

	// get function that returns the specific name
string Directory::get_name() {}

	// overloaded method returns the telephone number of a person with specified first and last name
double Directory::find_number(string, string) {}

	// function that saves all the entries (in the entries vector) in a file called DirectoryOutput.txt
void Directory::save() {}

	// method returns the number of entries currently in the telephone directory
double Directory::get_total_entries() {}

	// function that finds the number
int Directory::find_number(string) {}