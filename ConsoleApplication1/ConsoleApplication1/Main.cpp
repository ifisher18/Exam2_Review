//////////////////////
// Ian Fisher
// CS 172
// 11/8/16
/////////////////////

// CS 172 Test 2 Review//

#include <iostream>
#include <sstream>
#include "Directory.h"
#include "Entry.h"
using namespace std;

int main() {
	string Firstname;
	string Lastname;
	string phonenumber;
	cout << "Enter a first name: ";
	cin >> Firstname;
	cout << endl;
	cout << "Enter a last name: ";
	cin >> Lastname;
	cout << endl;
	cout << "Enter a phone number: ";
	cin >> phonenumber;
	cout << endl;

	// / / / / / / / / / / / / / / / / / / / / / / / / / / / / / / / / ///  / / / / / / / ///  // / / / / / / / / / / //   
	ifstream fin;
	fin.open("TelephoneEntries.txt");

	if (fin.fail()) {
		cout << "can't open file" << endl;
	}
	else {
		while
	}
	fin.close();
	return 0;
}

