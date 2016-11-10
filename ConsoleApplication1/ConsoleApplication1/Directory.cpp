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

	// Constructor directory
Directory::Directory() {
	name = "";

}
	// adds a new name, and telephone number into the directory
void Directory::enter_entry(string EntryFname, string EntryLname , string EntryPnumber) {
	
}

	// get function that returns the specific name
string Directory::get_name() {
	return name;
}



	// function that saves all the entries (in the entries vector) in a file called DirectoryOutput.txt
void Directory::save() {
	entries.push_back(Fname);
	entries.push_back(Lname);
	entries.push_back(number);

	ifstream output_file("DirectoryOuput.txt");
	//save(entries) : "DirectoryOutput.txt"; // lol what are you doing ha
	
}

	// method returns the number of entries currently in the telephone directory
double Directory::get_total_entries() {
	int count = 0;
	for (int i = 0; i < entries.size(); i++) {
		while (iofile >> entries) {
			count++;
			{
	{
					return count;
}

	// overloaded method returns the telephone number of a person with specified first and last name
	double Directory::find_number(string name) {
		if (entries[firstname] = name) {
			if (entries[lastname] = lastname) {
				output >> number;
			}
		}
	}