
#include "stdafx.h"
#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

class Student {
public:
	void SetID(string ID);
	void SetFirstName(string FirstName);
	void SetLastName(string LastName);
	void SetEmail(string EmailAddress);
	void SetAge(int Age);
	void SetCompletion(array CourseComplete[]);
	void SetDegree(string DegreeProgram);

  string GetID()const;
  string GetFirstName()const;
  string GetLastName()const;
  string GetEmail()const;
	 int GetAge()const;
   array GetCompletion()const;
  string GetDegree()const;

private:
	string studentID;
	string studentFirstName;
	string studentLastName;
	string studentEmailAddress;
	int    studentAge;
	array  daysCourseComplete[2];
	string studentDegreeProgram;
};
Student::studentID() {
	 studentID = "empty";
	 studentFirstName = "empty";
	 studentLastName = "empty";
	 studentEmailAddress = "empty";
     studentAge = -1;
     daysCourseComplete[0] = 0;
	 daysCourseComplete[1] = 0;
	 daysCourseComplete[2] = 0;
	 studentDegreeProgram = "empty";
}

void Student::SetID(string ID) {
	studentID = ID;
}
void Student::SetFirstName(string FirstName){
	studentFirstName = FirstName;
}

void Student::SetLastName(string LastName) {
	studentLastName = LastName;
}
void Student::SetEmail(string EmailAddress) {
	studentEmailAddress = EmailAddress;
}
void Student::SetAge(int Age) {
	studentAge = Age;
}
void Student::SetCompletion(array CourseComplete[]) {
	daysCourseComplete = CourseComplete;
}
void Student::SetDegree(string DegreeProgram) {
	studentDegreeProgram = DegreeProgram;
}

string Student::GetID()const {
	return studentID;
}
string Student::GetFirstName()const {
	return studentFirstName;
}
string Student::GetLastName()const {
	return studentLastName
}
string Student::GetEmail()const {
	return studentEmailAddress;
}
int Student::GetAge()const {
	return studentAge;
}
array Student::GetCompletion()const {
	return daysCourseComplete;
}
string Student::GetDegree()const {
	return studentDegreeProgram;
}
void Student::Print() const {
	cout << "Student Data" << endl;
	cout << "__________________________________________________________"; << endl;
	cout << " Student ID: " << studentID << endl;
	cout << " Student first name: " << studentFirstName << endl;
	cout << " Student last name: " << studentLastName << endl;
	cout << " Student email address: " << studentEmailAddress << endl;
	cout << " Student age: " << studentAge << endl;
	cout << " Student completion time: " << daysCourseComplete[] << endl;
	cout << " Student degree program: " << studentDegreeProgram << endl;
}
   




