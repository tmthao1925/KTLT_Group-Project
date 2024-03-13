#include <iostream>
#include <fstream>
#include <string>
using namespace std;

void createSemester(Semester* &semester) {
    cout << "Enter semester number: ";
    cin >> semester.number;

    cout << "Enter start date (day month year): ";
    cin >> semester.startDate.day >> semester.startDate.month >> semester.startDate.year;

    cout << "Enter end date (day month year): ";
    cin >> semester.endDate.day >> semester.endDate.month >> semester.endDate.year;
}
void printStudents(Student* students, int numofStudent){
	ifstream input_file ("Student.txt");
	if (!input_file.is_open()) {
		cout << "File cannot be opened." << endl;
		return 1;
	}
	string line;
	while (getline(input_file, line)){
		numofStudent++;
	}
	input_file.close();

	cout << setw(5) << "ID: " << setw(10) << "Firstname: " << setw(15) << "Lastname: " << setw(20) 
	<< "Gender: " << setw(25) << "Date of Birth: " << setw(30) << "Social ID: " << endl;
	cout << "====================================================================" << endl;
	for (int i = 0; i < numofStudent; i++){
		cout << left << setw(5) << students[i].ID << left << setw(10) << students[i].fName << left << setw(15) << students.[i].lName
		<< left << setw(20) << students[i].gender << left << setw(25) << students[i].dateOfBirth << left << setw(30) << students[i].socialID << endl;
	}
}
