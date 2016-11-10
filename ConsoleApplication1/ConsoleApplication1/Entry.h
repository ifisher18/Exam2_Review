#pragma once

#include <iostream>
#include <vector>

using namespace std;

class Entry {
public:
	// data field
	
	// Constructor
	Entry() {
		firstname = "";
		lastname = "";
		int number = 0;
	}
	// function that gets the first name of the entry
	string get_firstname();

	// function that gets the last name of the entry
	string get_lastname();

	// function that gets the number of then entry
	int get_number();

private:
	// data field
	string firstname;
	string lastname;
	int number;
};
