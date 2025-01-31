
#include <iostream>
#include "Employee.h"
#include "Directory.h"
#include "VectorClass.h"

int main()
{
    Directory company1;
    company1.loadData("data.txt");
    company1.printDirectory();


    cout << "Bugs located: " << company1.findEntry("Bugs Bunny") << endl;
    cout << "Fred located: " << company1.findEntry("Fred Flintstone") << endl;

    Employee temp = company1.lookupEntry("Yosemite Sam");
    cout << "Sam Phone Number: " << temp.getPhoneNumber() << endl;
    company1.removeEntry("Daffy Duck");

    Employee temp1("Bubba Wubba", "Nada", "9900", "90");
    company1.changeEntry(temp1);

    Employee temp2("James Sullivan", "Monster", "9990", "AA");
    company1.changeEntry(temp2);

    company1.printDirectory();


}
