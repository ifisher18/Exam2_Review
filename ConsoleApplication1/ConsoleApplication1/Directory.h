#pragma once

#include <iostream>
#include <vector>
#include <fstream>
#include "Entry.h"
using namespace std;

class Directory{
public:
	// data field
	string Fname;// name of the directory
	string Lname;
	string number;
	//

	// Constructor that sets default values
	Directory();

	// adds a new name, and telephone number into the directory
	void enter_entry(string, string, string);

	// get function that returns the specific name
	string get_name();

	// overloaded method returns the telephone number of a person with specified first and last name
	string find_number(string, string);

	// function that saves all the entries (in the entries vector) in a file called DirectoryOutput.txt
	void save();

private:
	// data field
	vector<Entry>entries;
	//

	// method returns the number of entries currently in the telephone directory
	double get_total_entries();

	// function that finds the number
	int find_number(string);
};