#include "stdafx.h"
#include <iostream>
#include <iomanip>
#include <string>
#include "student.h"
using namespace std;

class classRoster {
	Student stu1 = {"A1","John,Smith","John1989@gm ail.com","20","30","35","40","SECURITY"};
	Student stu2 = {"A2","Suzan","Erickson","Erickson_1990@gmailcom","19","50","30","40","NETWORK"};
	Student stu3 = {"A3","Jack","Napoli","The_lawyer99yahoo.com","19","20","40","33","SOFTWARE" };
	Student stu4 = {"A4","Erin","Black","Erin.black@comcast.net","22","50","58","40","SECURITY"};
	Student stu5 = {"A5","Nicholas","Pender","pender@gmail.com","32","20","48","90","SOFTWARE" };
	Student classRosterArray[5] = {stu1, stu2, stu3, stu4, stu5};
	
};