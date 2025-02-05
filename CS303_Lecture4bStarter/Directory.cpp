#include "Directory.h"
#include "Employee.h"

//add the employee to the end of the employee vector
void Directory::addEntry(const Employee& the_Employee) {
	//theDirectory.push_back(the_Employee); 
	theDirectory.pushBack(the_Employee);
}


void Directory::loadData(const string& source_name) {
	// Remember the source name for use by save.
	this->sourceFile = source_name;
	ifstream in(sourceFile);
	if (!in.good())
		return;
	string inputLine, token;
	vector<string> tokens;
	while (getline(in,inputLine)){
		tokens.clear();
		stringstream inSS(inputLine);
		while (getline(inSS, token, ',')) 
			tokens.push_back(token);
		
		addEntry(Employee(tokens[0], tokens[1], tokens[2], tokens[3]));
		
	}
	in.close();
} 


//PRE:  receives string of the employee name to find
//POST: return the index of the found employee or -1 if not found
int Directory::findEntry(const string& name) const {
	for (int i = 0; i < theDirectory.size(); i++) {
		if (name == theDirectory[i].getName()) {
			return i;
		}
	}
	return -1;
}

//PRE:  receives string of the employee name to find
//POST: return the directory entry at the that or return empty employee
Employee Directory::lookupEntry(const string& name) const{
	for (int i = 0; i < theDirectory.size(); i++) {
		if (name == theDirectory[i].getName()) {
			return theDirectory[i];
		}
	}
	return Employee();
 
}

//PRE:  receives string of the employee name to remove
//POST: erase the employee at that directory or just exit the function 
void Directory::removeEntry(const string& name) {
	for (int i = 0; i < theDirectory.size(); i++) {
		if (name == theDirectory[i].getName()) {
			theDirectory.erase(i);
		}
	}
 
}

//PRE:  receives string with a new employee object
//POST: if found, update the other fields in the employee object
//      or add the employee
void Directory::changeEntry(const Employee & new_Employee){ 
	for (int i = 0; i < theDirectory.size(); i++) {
		if (new_Employee.getName() == theDirectory[i].getName()) {
			theDirectory.erase(i);
			theDirectory.insert(i, new_Employee);
			return;
		}
	}
	theDirectory.pushBack(new_Employee);
}

void Directory::printDirectory() {
	for (int i = 0; i < theDirectory.size(); i++) 
		cout << theDirectory[i].getName() << "\t" << theDirectory[i].getPhoneNumber() << endl;

}
