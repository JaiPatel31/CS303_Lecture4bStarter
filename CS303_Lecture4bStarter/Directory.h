#pragma once
#include <string>
#include <fstream>
#include <iostream>
#include <sstream>
#include <vector>
#include "Employee.h"
#include "VectorClass.h"

using namespace std;

class Directory {

private:
	string sourceFile;
	mySpace::vector <Employee> theDirectory;

public:
	
	Directory() : 
		sourceFile(""), 
		theDirectory() {}

	void addEntry(const Employee& new_Employee);
	void loadData(const string &source_name);
	int  findEntry(const string& name) const;
	void removeEntry(const string& name);
	Employee lookupEntry(const string& name) const;
	void changeEntry(const Employee &new_Employee);
	void printDirectory();

};

