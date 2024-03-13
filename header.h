#include <iostream>
#include <fstream>
#include <string>
using namespace std;

struct Date
{
	int day, month, year;
};

struct Student
{
	string number, ID, fName, lName, gender, dateOfBirth, socialID;
	string account, password;
	Student* nextStudent = NULL;
};

struct Staff
{
	string number, ID, fName, lName, gender, dateOfBirth, socialID;
	string account, password;
};

struct NodeStudent
{
    Student data;
    NodeStudent* pNext;
};

struct NodeStaff
{
    Staff data;
    NodeStaff* pNext;
};

struct ScoreBoard
{
	string number, ID, fName, totalMark, finalMark, midtermMark, otherMark;
};

struct Class
{
	string name;
	Student *student = NULL;
	string schoolYear;
	Class* nextClass = NULL;
};

struct Course
{
	string ID, courseName, className, teacherName, numOfCredits, maxNumOfStudents, day, session;
	ScoreBoard scoreBoard;
	Course* nextCourse = NULL;
};

struct Semester
{
	unsigned int number;
	Date startDate, endDate;
	string schoolYear;
	Course *course = NULL;
	
};

struct SchoolYear
{
	string year;
	Class *classes = NULL;
	Semester semes1, semes2, semes3;
	SchoolYear *prevYear = NULL;
	SchoolYear *nextYear = NULL;
};

NodeStudent* makeNodeStudent(Student x);

NodeStaff* makeNodeStaff(Staff x);

void pushBackStudent(NodeStudent* &head , Student x);

void pushBackStaff(NodeStaff* &head , Staff x);

void readInfoStaff(const char* s, NodeStaff* &headStaff);

void readInfoStudent(const char* s, NodeStudent* &headStudent);

void Log_In(string &username, string &password);

bool Log_In_Verify(string username , string password , int user , NodeStudent* &currStudent , NodeStaff* &currStaff);

void updateInfo(const char* filename , NodeStudent* headStudent, NodeStaff* headStaff , int user);

void changeInfo(NodeStudent* &currStudent , NodeStaff* &currStaff , int choose , NodeStudent* headStudent , NodeStaff* headStaff , int user);
