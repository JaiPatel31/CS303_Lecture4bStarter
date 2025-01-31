#pragma once

class Employee {

private:
	std::string name;
	std::string jobDescription;
	std::string phoneNumber;
	std::string room;

public:
	// Constructor of Employee
	Employee(const std::string& n,
		 	 const std::string& j,
			 const std::string& p,
			 const std::string& r) :
		name(n), 
		jobDescription(j),
		phoneNumber(p),
		room(r) {}

	/** Construct a default Employee */
	Employee() : 
		name(""), 
		jobDescription(""),
		phoneNumber(""), 
		room("") {}

	std::string getName() const				{ return name; }
	std::string getJobDescription() const   { return jobDescription;}
	std::string getPhoneNumber() const		{ return phoneNumber; }
	std::string getRoom() const				{ return room; }

	void setJobDescription(const std::string& newJobDescription) { jobDescription = newJobDescription; }
	void setPhoneNumber(const std::string& p) {	phoneNumber = p;}
	void setRoom(const std::string& newRoom) { room = newRoom;}

};
